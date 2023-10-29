//member, event, team, meeting, calendar
# include <iostream>
# include <vector>
# include <map>
using namespace std;

class task {
    public:
	team team_assigned;
    int task_ID;
	string task_name;
	string task_description;
    vector<member *> assignees;
    vector <calendar *> calendars;
	member assigner;
	int task_status; //0 - To Do, 1 - Doing, 2 - Done
	date due_date;
	int priority_level; //0 - least prior, 5 - most prior

    task(string task_name, string task_description = "No Description Given", member assinger, vector<member *> assignees, 
    vector <calendar *> calendars, date due_date, int task_status = 0, int priority_level = 0);
};

class member {
    public :
	string member_name;
    vector<task *> tasks_assigned;
	string email;
	int salary;
	string memberID;
	string department;
    member(string member_name, string email = NULL, vector<task *>tasks_assigned = {}, string department = NULL, int salary = -1);

};

class team {
    public:
	string team_name;
	int team_ID;
    vector<team *> sub_teams;
	member team_lead;
    vector<member *>members;

    team(string team_name, vector<member *>members = {}, member team_lead = member(""), vector<team *> sub_teams = {});
};

typedef struct date{
    string date;
}date;

class calendar{
	// implement dates via external library
    map<date, vector<task *>> calendar_map;
};

/*
member a2;
task t3;
member.assign_task(t3);
*/
