#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
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
    // set<member *> members;
    set<team *> sub_teams;
    calendar t_calendar;
public:
    string name;
    set<member *> members;
    member *lead;
    string description;

    // team member functions
    team(string name = "random name", member lead = *DEFAULT_LEAD,
    string moto = "No Description Given", vector<member *> members = {}, vector<team *> sub_teams = {});
    void add(member reqMember);
    void remove(member reqMember);
    void show();
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
    // set<team *> teams;
    calendar m_calendar;
    public:
    string name;
    map <string, string> info;
    set<team *> teams;

    // member member functions
    member(string name = "random name", string email="NULL", string phone="NULL");
    void add_task(task assigned_task);

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
    //set<member *> assigned_to; // set of pointers to members
    
public:
    set<member *> assigned_to;
    int priority;
    string title;
    string description;
    string status;
    date due_date;
    task(string title = "random title", string description = "No Description Given", int priority = 0, string status = "To Do", date due_date = date());
    void move_task(string status);
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


// Add a new task with specified details
void member::add_task(task assigned_task) {
    tasks.insert(&assigned_task);
    assigned_task.assigned_to.insert(this);
    cout << "Member has been assigned the task " << assigned_task.title << endl;

}
member create_member(string name = "random name", string email="NULL", string phone="NULL") {
    // To create a random member ID and add to map
    member a(name, email, phone);
    cout << "Member has been created" << endl;
    return a;
}
/*
string name;
    set<member *> members;
    member *lead;
    string description;*/
team create_team(string name = "random name", member lead = *DEFAULT_LEAD, string moto = "No Description Given", vector<member *> members = {}, vector<team *> sub_teams = {}){
    // To create a random team ID and add to map
    // team(string name = "random name", member lead = *DEFAULT_LEAD,
    // string moto = "No Description Given", vector<member *> members = {}, vector<team *> sub_teams = {});
    team a(name, lead, moto, members, sub_teams);
    cout << "Team has been created" << endl;
    return a;

}
void task::move_task(string status) {
    task requiredTask = *this;
    if (status.compare("To Do") == 0 || status.compare("Doing") == 0|| status.compare("Done") == 0){
        requiredTask.status = status;
        cout << "Status changed to" << status << endl;
    }
}

void view_task(task reqTask){
    cout << reqTask.title << " : " << reqTask.description << "\nAssigned To: " << endl;
    for (auto i : reqTask.assigned_to){
        member a = *i;
        cout << a.name << "\n";
    }
    cout << "\nStatus: " << reqTask.status << "\nPriority Level: " << reqTask.priority << "\nDue on: " << dateToString(reqTask.due_date) << endl;
}

void team::add(member reqMember){
    team reqTeam = *this;
    reqTeam.members.insert(&reqMember);
    reqMember.teams.insert(this);
    cout << "Required member has been added to the team";
}
void team::remove(member reqMember){
    team reqTeam = *this;
    if (reqTeam.members.find(&reqMember) != reqTeam.members.end()){
        reqTeam.members.erase(&reqMember);
        reqMember.teams.erase(this);
        cout << "Required member has been removed from the team";
    }
    else {
        cout << "Required member was not found in the team";
    }
}
void team::show(){
    team reqTeam = *this;
    member a = *(reqTeam.lead); 
    //set<member *>::iterator i;
    cout << reqTeam.name << " : " << reqTeam.description << "\nTeam Lead:" << a.name << "Members:" << endl;

    for (auto i : reqTeam.members){
        member a = *i;
        cout << a.name << "\n";
    }
}

//delete_team(team); team.delete(task);




/*
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
*/