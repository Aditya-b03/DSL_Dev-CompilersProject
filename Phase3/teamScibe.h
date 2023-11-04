#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class team;
class member;
class task;
class calendar{};
class date{};


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
    string moto = "No Description Given", vector<member> members = {}, vector<team> sub_teams = {});
};

team::team(string name = "random name", member lead = *DEFAULT_LEAD, string moto = "No Description Given", vector<member> members = {}, vector<team> sub_teams = {})
{   
    this->team_id = gen_ID();
    this->name = name;
    this->lead = &lead;
    this->description = moto;
    for (int i = 0; i < members.size(); i++)
    {
        this->members.insert(&members[i]);
    }

    for (int i = 0; i < sub_teams.size(); i++)
    {
        this->sub_teams.insert(&sub_teams[i]);
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
    





};





/*

*/