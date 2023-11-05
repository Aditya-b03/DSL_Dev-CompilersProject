#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
using namespace std;

/*********************COMMENTS*******************
 - add_task(name, description, due_date, priority, assignee_id): Add a new task with specified details. By default, it goes to the “To Do” status
 - move_task(task_id, new_status): Move a task to a new status (e.g., To Do, Doing, Done).
delete_task(task_id): Delete a task from the task list.
 - view_tasks(team_id, status): View tasks for a specific team or status.
 - create_team(name, parent_team_id, manager_id): Create a new team with the specified name, optional parent team, and manager.
 - add_team_member(team_id, member_ids): Add team members to an existing team.
 - remove_team_member(team_id, member_ids): Remove team members from a team.
 - show_team(team_id): Display information about a specific team.
 - create_member(name, email, department, salary, join_date, contact_info): Create a new members profile.
remove_member(members_id): Remove an members from the database.






*********************COMMENTS END*******************/

// definitions
class team;
class member;
class task;
typedef struct date
{
    int day;
    int month;
    int year;

    date(int day = 0, int month = 0, int year = 0)
    {
        if (day > 31 || day < 1 || month > 12 || month < 1 || year < 0)
        {
            cout << "Error: Invalid Date" << endl;
            return;
        }
        this->day = day;
        this->month = month;
        this->year = year;
    }

} date;

class calendar;

//********************Classes*******************
// class calender
// {
//     map<string, set<task *>> calender_map;

// public:
//     void add_task(task &t, date d);
//     void remove_task(task &t, date d);
//     void display(date d);
// };

class member
{
    string member_id;
    set<task *> tasks;
    set<team *> teams;
    //calendar *m_calendar;
public:
    string name;
    map<string, string> info;

    // member member functions
    member(string = "random name", string = "NULL", string = "NULL");
    string get_id();
    //void add_task(task assigned_task);

    void display(int = 0);

    friend class team;

};

class team
{
    string team_id;
    set<member *> members;
    set<team *> sub_teams;
    //calendar t_calendar;

public:
    string name;
    member *lead;
    string description;

    // team member functions
    team(string = "random name", member = member(),
         string = "No Description Given", vector<member *> = {}, vector<team *> = {});

    string get_id();

    void insert(member m);
    void insert(vector<member> m);
    void insert(team t);
    void insert(vector<team> t);

    void remove(member m);
    void remove(vector<member> m);
    void remove(team t);
    void remove(vector<team> t);

    void show(int  = 0);


    friend class member;
};

class task
{
    string task_id;
    set<member *> assigned_to; // set of pointers to members

public:
    // set<member *> assigned_to;
    int priority;
    string title;
    string description;
    string status;
    date due_date;
    task(string = "random title", string = "No Description Given", int = 0, string = "To Do", date = date());
    string get_id();
};

// ********************Utility features/functions*******************

// maps
map<string, member *> member_map;
map<string, team *> team_map;
map<string, task *> task_map;

void tab(int n){
    for (int i = 0; i < n; i++)
        cout << "\t";
}

string dateToString(date d)
{
    string s = "";
    s += to_string(d.day);
    s += "-";
    s += to_string(d.month);
    s += "-";
    s += to_string(d.year);
    return s;
}

// generate random ID - done
string character_string = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string gen_ID()
{   
    
    string s = "";
    for (int i = 0; i < 10; i++)
    {
        s += character_string[rand() % 62];
    }
    return s;
}

//********************Calender Class*******************

// ********************Member Class*******************

member::member(string name, string email, string phone){
    this->name = name;
    this->info["email"] = email;
    this->info["phone"] = phone;
    this->member_id = gen_ID();
    member_map[member_id] = this;
}

string member::get_id(){
    return this->member_id;
}

member create_member(string name = "random name", string email = "NULL", string phone = "NULL"){
    member *m = new member(name, email, phone);
    return *m;
}

void member::display(int level){
    tab(level);
    cout << "Member Name: " << this->name << endl;
    tab(level);
    cout << "Member Email: " << this->info["email"] << endl;
    tab(level);
    cout << "Member Phone: " << this->info["phone"] << endl;
    tab(level);
    cout << "Member Tasks: " << endl;
    for (auto t : this->tasks)
    {
        tab(level);
        cout << "\t" << t->title << endl;
    }
    tab(level);
    cout << "Member Teams: " << endl;
    for (auto t : this->teams)
    {
        tab(level);
        cout << "\t" << t->name << endl;
    }
}


// ********************Team Class*******************

team::team(string name, member lead,
           string moto, vector<member *> members, vector<team *> sub_teams){
            this->name = name;
            this->lead = member_map[lead.get_id()];
            this->description = moto;
            for (auto m : members)
            {
                this->members.insert(m);
            }
            for (auto t : sub_teams)
            {
                this->sub_teams.insert(t);
            }
        }

string team::get_id(){
    return this->team_id;
}

team create_team(string name = "random name", member lead = member(),
            string moto = "No Description Given", vector<member> members = {}, vector<team> sub_teams = {}){
        vector<member *> m;
        for (auto mem : members)
        {   

            m.push_back(member_map[mem.get_id()]);
        }
        vector<team *> v;
        for (auto teams : sub_teams)
        {
            v.push_back(team_map[teams.get_id()]);
        }
        team *t = new team(name, lead, moto, m, v);
        return *t;
    }

void team::insert(member m){
    this->members.insert(member_map[m.get_id()]);
    member_map[m.get_id()]->teams.insert(this);
}
void team::insert(vector<member> m){
    for (auto mem : m)
    {
        this->members.insert(member_map[mem.get_id()]);
        member_map[mem.get_id()]->teams.insert(this);
    }
}
void team::insert(team t){
    this->sub_teams.insert(team_map[t.get_id()]);
}
void team::insert(vector<team> t){
    for (auto teams : t)
    {
        this->sub_teams.insert(team_map[teams.get_id()]);
    }
}

void team::remove(member m){
    this->members.erase(member_map[m.get_id()]);
    member_map[m.get_id()]->teams.erase(this);
}
void team::remove(vector<member> m){
    for (auto mem : m)
    {
        this->members.erase(member_map[mem.get_id()]);
        member_map[mem.get_id()]->teams.erase(this);
    }
}
void team::remove(team t){
    this->sub_teams.erase(team_map[t.get_id()]);
}
void team::remove(vector<team> t){
    for (auto teams : t)
    {
        this->sub_teams.erase(team_map[teams.get_id()]);
    }
}

void team::show(int level = 0){
    tab(level);
    cout << "Team Name: " << this->name << endl;
    tab(level);
    cout << "Team ID: " << this->team_id << endl;
    tab(level);
    cout << "Team Lead: " << this->lead->name << endl;
    tab(level);
    cout << "Team Description: " << this->description << endl;
    tab(level);
    cout << "Team Members: " << endl;
    for (auto mem : this->members)
    {
        tab(level);
        cout << "\t" << mem->name << endl;
    }
    tab(level);
    cout << "Sub Teams: " << endl;
    for (auto teams : this->sub_teams)
    {
        teams->show(level + 1);
    }

}


//  ********************Task Class*******************

task::task(string title, string description, int priority, string status, date due_date){
    this->title = title;
    this->description = description;
    this->priority = priority;
    this->status = status;
    this->due_date = due_date;
    this->task_id = gen_ID();
    task_map[task_id] = this;
}

string task::get_id(){
    return this->task_id;
}

task create_task(string title = "random title", string description = "No Description Given", int priority = 0, string status = "To Do", date due_date = date()){
    task *t = new task(title, description, priority, status, due_date);
    return *t;
}

