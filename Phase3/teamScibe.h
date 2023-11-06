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


// DON'T USE LEAD

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
    set<task *> _tasks;
    set<team *> _teams;
    //calendar *m_calendar;
public:
    map<string, string> info;

    // member member functions
    member(string = "random name", string = "NULL", string = "NULL");
    string get_id();
    //void add_task(task assigned_task);

    void update(map<string, string> = {});
    void add_task(task assigned_task);
    void add_team(team t);
    void remove(task assigned_task);
    void remove(team t);

    vector<task> tasks();
    vector<team> teams();

    void display(int = 0);

    friend class team;
    friend class task;

};



class team
{
    string team_id;
    set<member *> _members;
    set<team *> sub_teams;
    //calendar t_calendar;

public:
    string name;
    member *lead;
    string description;

    // team member functions
    team(string = "random name", member = member() ,
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

    vector<member> members();
    vector<team> teams();

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

    friend class member;
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
    this->info["name"] = name;
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

void member::update(map<string, string> info){
    for (auto i : info)
    {
        member_map[this->member_id]->info[i.first] = i.second;
        this->info[i.first] = i.second;
    }
}

void member::add_task(task assigned_task){
    member_map[this->member_id]->_tasks.insert(task_map[assigned_task.get_id()]);
    task_map[assigned_task.get_id()]->assigned_to.insert(member_map[this->member_id]);
}

void member::add_team(team t){
    member_map[this->member_id]->_teams.insert(team_map[t.get_id()]);
    team_map[t.get_id()]->_members.insert(member_map[this->member_id]);
}

void member::remove(task assigned_task){
    member_map[this->member_id]->_tasks.erase(task_map[assigned_task.get_id()]);
    task_map[assigned_task.get_id()]->assigned_to.erase(member_map[this->member_id]);
}

void member::remove(team t){
    member_map[this->member_id]->_teams.erase(team_map[t.get_id()]);
    team_map[t.get_id()]->_members.erase(member_map[this->member_id]);
}

vector<task> member::tasks(){
    vector<task> v;
    for (auto t : member_map[this->member_id]->_tasks)
    {
        v.push_back(*t);
    }
    return v;
}

vector<team> member::teams(){
    vector<team> v;
    for (auto t : member_map[this->member_id]->_teams)
    {
        v.push_back(*t);
    }
    return v;
}


void member::display(int level){
    tab(level);
    cout << "Member Name: " << this->info["name"] << endl;
    tab(level);
    cout << "Member Email: " << this->info["email"] << endl;
    tab(level);
    cout << "Member Phone: " << this->info["phone"] << endl;
    tab(level);
    cout << "Member Tasks: " << endl;
    for (auto t : this->_tasks)
    {
        tab(level);
        cout << "\t" << t->title << endl;
    }
    tab(level);
    cout << "Member Teams: " << endl;
    for (auto t : this->_teams)
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
                this->_members.insert(m);
            }
            for (auto t : sub_teams)
            {
                this->sub_teams.insert(t);
            }
            this->team_id = gen_ID();
            team_map[this->team_id] = this;
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
    team_map[this->team_id]->_members.insert(member_map[m.get_id()]);
    member_map[m.get_id()]->_teams.insert(team_map[this->team_id]);
}

void team::insert(vector<member> m){
    for (auto mem : m)
    {
        //cout << this->team_id  << endl;
        team_map[this->team_id]->_members.insert(member_map[mem.get_id()]);
        member_map[mem.get_id()]->_teams.insert(team_map[this->team_id]);
    }
}

void team::insert(team t){
    team_map[this->team_id]->sub_teams.insert(team_map[t.get_id()]);
}

void team::insert(vector<team> t){

    for (auto teams : t)
    {
        cout << this->team_id  << endl;
        team_map[this->team_id]->sub_teams.insert(team_map[teams.get_id()]);
    }
}

void team::remove(member m){
    team_map[this->team_id]->_members.erase(member_map[m.get_id()]);
    member_map[m.get_id()]->_teams.erase(team_map[this->team_id]);
}

void team::remove(vector<member> m){
    for (auto mem : m)
    {
        team_map[this->team_id]->_members.erase(member_map[mem.get_id()]);
        member_map[mem.get_id()]->_teams.erase(team_map[this->team_id]);
    }
}

void team::remove(team t){
    team_map[this->team_id]->sub_teams.erase(team_map[t.get_id()]);
}

void team::remove(vector<team> t){
    for (auto teams : t)
    {
        team_map[this->team_id]->sub_teams.erase(team_map[teams.get_id()]);
    }
}

vector<member> team::members(){
    vector<member> v;
    for (auto m : team_map[this->team_id]->_members)
    {
        v.push_back(*m);
    }
    return v;
}

vector<team> team::teams(){
    vector<team> v;
    for (auto t : team_map[this->team_id]->sub_teams)
    {
        v.push_back(*t);
    }
    return v;
}


void team::show(int level){
    team *t = team_map[this->team_id];
    tab(level);
    cout << "Team Name: " << t->name << endl;
    tab(level);
    cout << "Team ID: " << t->team_id << endl;
    //tab(level);
    //cout << "Team Lead: " << t->lead->info["name"]<< endl;
    tab(level);
    cout << "Team Description: " << t->description << endl;
    tab(level);
    cout << "Team Members: " << endl;
    for (auto mem : t->_members)
    {
        tab(level);
        cout << "\t" << mem->info["name"] << endl;
    }
    tab(level);
    cout << "Sub Teams: " << endl;
    for (auto teams : t->sub_teams)
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

