#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class team;
class member;
class task;
class calendar{};

typedef struct date{
    int day;
    int month;
    int year;

    date(int day = 0, int month = 0, int year = 0){
        if(day > 31 || day < 1 || month > 12 || month < 1 || year < 0){
            cout << "Error: Invalid Date" << endl;
            return;
        }
        this->day = day;
        this->month = month;
        this->year = year;
    }


    

}date;


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

string gen_ID(){
    return "random ID"; // future me will implement this
}


member *DEFAULT_LEAD = new member();

class team{
    string team_id;
    set<member *> members;
    set<team *> sub_teams;
    calendar t_calendar;
public:
    string name;
    member *lead;
    string description;

    // team member functions
    team(string name = "random name", member lead = *DEFAULT_LEAD,
    string moto = "No Description Given", vector<member *> members = {}, vector<team *> sub_teams = {});
};

team::team(string name = "random name", member lead = *DEFAULT_LEAD, string moto = "No Description Given", vector<member *> members = {}, vector<team *> sub_teams = {})
{   
    this->team_id = gen_ID();
    this->name = name;
    this->lead = &lead;
    this->description = moto;
    for (int i = 0; i < members.size(); i++)
    {
        this->members.insert(members[i]);
    }

    for (int i = 0; i < sub_teams.size(); i++)
    {
        this->sub_teams.insert(sub_teams[i]);
    }
}



// add_member_function -> two type of args -> single member or vector of members // function overloading
// will add member to the team and // later me problem : update the team's calendar if required


// add_sub_team_function -> two type of args -> single team or vector of teams // function overloading


// add_task_function -> two type of args -> single task or vector of tasks // function overloading
// will add task to the each of the team member and // later me problem : update the team's calendar and member's calendar if required

// remove_member_function -> two type of args -> single member or vector of members




class member
{
    string member_id;
    set<task *> tasks;
    set<team *> teams;
    calendar m_calendar;
    public:
    string name;
    map <string, string> info;

    // member member functions
    member(string name = "random name", string email="NULL", string phone="NULL");


};

member::member(string name = "random name", string email="NULL", string phone="NULL")
{
    this->member_id = gen_ID();
    this->name = name;
    this->info["email"] = email;
    this->info["phone"] = phone;
}

// code member member functions


class task{
    string task_id;
    set<member *> assigned_to; // set of pointers to members
    int priority;
public:
    string title;
    string description;
    string status;
    date due_date;
    task(string title = "random title", string description = "No Description Given", int priority = 0, string status = "To Do", date due_date = date());
};

// code task member functions
task::task(string title = "random title", string description = "No Description Given", int priority = 0, string status = "To Do", date due_date = date())
{
    this->task_id = gen_ID();
    this->title = title;
    this->description = description;
    this->priority = priority;
    this->status = status;
    this->due_date = due_date;
}


class calander{
    map<string, set<task *>> calander_map;
    public:
    void add_task(task &t, date d);
    void remove_task(task &t, date d);
    void display(date d);
};


void calander::add_task(task &t, date d)
{
    this->calander_map[dateToString(d)].insert(&t);
}

// proper return values 1 - success, -1 - task not found
void calander::remove_task(task &t, date d)
{
    this->calander_map[dateToString(d)].erase(&t);
}


// make this function more proper
void calander::display(date d)
{
    set<task *> tasks = this->calander_map[dateToString(d)];
    for (auto i = tasks.begin(); i != tasks.end(); i++)
    {
        cout << "title: " <<(*i)->title << endl;    //check what to display
    }
    
}



/*

*/