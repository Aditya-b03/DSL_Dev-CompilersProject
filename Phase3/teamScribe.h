#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include "json.hpp"
#include <fstream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include "./cpp-dump/dump.hpp"

using json = nlohmann::json;
using namespace std;

/*********************COMMENTS*******************

-> LoadfromDocument -- Finish this function
-> Add Calendar class
-> Make Test Cases
-> Add Calendar to Member and Team
-> Code gen fixes

*********************COMMENTS END*******************/

// definitions

template <typename... Args>
inline auto print(Args &&...args) -> decltype(cpp_dump::dump(std::forward<Args>(args)...))
{
    return cpp_dump::dump(std::forward<Args>(args)...);
}

class team;
class member;
class task;
typedef struct date
{
    int day;
    int month;
    int year;

    date() // Default constructor
    {
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);
        tm *localTime = localtime(&currentTime);

        // Set the date members
        this->day = localTime->tm_mday;
        this->month = localTime->tm_mon + 1;    // Month is zero-based
        this->year = localTime->tm_year + 1900; // Year is years since 1900
    }

    date(int day, int month, int year) // Parameterized constructor
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
class event;
class calendar;

// maps
map<string, member *> member_map;
map<string, team *> team_map;
map<string, task *> task_map;
vector<event *> all_events;

//************************ CLASSES ************************

class member
{
    string member_id;
    set<task *> _tasks;
    set<team *> _teams;
    // calendar *m_calendar;
public:
    map<string, string> info;
    // member member functions
    member(string = "random name", string = "NULL", string = "NULL", string = "NULL");
    string get_id();
    // void add_task(task assigned_task);

    void add_task(task assigned_task);
    void add_team(team t);
    void remove(task assigned_task);
    void remove(team t);
    void update_info(map<string, string> = {});

    vector<task> tasks();
    vector<team> teams();

    void display(int = 0);

    // Operator Overloading
    void operator+=(task t);
    void operator+=(team t);
    void operator-=(task t);
    void operator-=(team t);

    friend class team;
    friend class task;
};

class team
{
    string team_id;
    set<member *> _members;
    set<team *> sub_teams;
    // calendar t_calendar;

public:
    string name;
    string description;
    // team member functions
    team(string = "random name", string = "No Description Given", vector<member *> = {}, vector<team *> = {}, string = "NULL");

    string get_id();
    json to_json();

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

    // Operator Overloading
    void operator+=(member m);
    void operator+=(vector<member> m);
    void operator+=(team t);
    void operator+=(vector<team> t);
    void operator-=(member m);
    void operator-=(vector<member> m);
    void operator-=(team t);
    void operator-=(vector<team> t);

    team operator&(team other);
    team operator|(team other);
    void show(int level = 1);
    friend class member;
};

class task
{
    string task_id;
    set<member *> assigned; // set of pointers to members

public:
    // set<member *> assigned_to;
    int priority;
    string title;
    string description;
    string _status;
    date due_date;
    task(string = "random title", string = "No Description Given", int = 0, string = "To_Do", date = date(), string = "NULL");
    string get_id();

    void assign_to(member);
    void status(string);
    void operator+(member m)
    {
        assign_to(m);
    }
    // update status function implement karna hai
    vector<member> assigned_to();

    friend class member;
};

class event
{
    string event_id;

public:
    string title;
    string description;
    date event_date;
    event(string = "random title", string = "No Description Given", date = date());
    string get_id();
};

// ********************Utility features/functions*******************

void tab(int n)
{
    for (int i = 0; i < n; i++)
        cout << "\t";
}

string dateToString(date d)
{
    string s = "";
    s += to_string(d.month);
    s += "/";
    s += to_string(d.day);
    s += "/";
    s += to_string(d.year);
    return s;
}

date stringToDate(string s)
{
    int i = 0;
    string month_ = "";
    string day_ = "";
    string year_ = "";
    while (s[i] != '/')
    {
        month_ += s[i];
        i++;
    }
    i++;
    while (s[i] != '/')
    {
        day_ += s[i];
        i++;
    }
    i++;
    while (i < s.length())
    {
        year_ += s[i];
        i++;
    }
    int day = stoi(day_);
    int month = stoi(month_);
    int year = stoi(year_);
    date *d = new date(day, month, year);
    return *d;
}

// generate random ID - done
string character_string = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string gen_ID(int n)
{
    // srand(time(0));
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += character_string[rand() % 62];
    }
    return s;
}

json makeJson(member _m)
{
    member *m = member_map[_m.get_id()];
    json j;
    j["member_name"] = m->info["name"];
    j["member_email"] = m->info["email"];
    j["member_phone"] = m->info["phone"];
    j["member_tasks"] = json::array();
    for (auto t : m->tasks())
    {
        j["member_tasks"].push_back(t.title);
    }
    j["member_teams"] = json::array();
    return j;
}

json makeJson(team _t)
{
    team *t = team_map[_t.get_id()];
    json j;
    j["team_name"] = t->name;

    // j["team_lead"] = t->lead->info["name"];
    j["team_description"] = t->description;
    j["members"] = json::array();

    for (auto mem : t->members())
    {
        j["members"].push_back(makeJson(mem));
    }

    j["sub_teams"] = json::array();
    for (auto sub : t->teams())
    {
        j["sub_teams"].push_back(makeJson(*team_map[sub.get_id()]));
    }

    return j;
}

json makeJson(task _t)
{
    task *t = task_map[_t.get_id()];
    json j;
    j["task_title"] = t->title;
    j["task_description"] = t->description;
    j["task_priority"] = t->priority;
    j["task_status"] = t->_status;
    j["task_due_date"] = dateToString(t->due_date);
    j["task_assigned_to"] = json::array();
    for (auto mem : t->assigned_to())
    {
        j["task_assigned_to"].push_back(mem.info["name"]);
    }
    return j;
}

void jsonOutput(team _t)
{
    json j;
    j["team"] = makeJson(_t);
    string fileName = "team_" + _t.name + ".json";
    ofstream outputFile(fileName);
    outputFile << j.dump(4);
}

void jsonOutput(member _m)
{
    json j;
    j["member"] = makeJson(_m);
    string fileName = "member_" + _m.info["name"] + ".json";
    ofstream outputFile(fileName);
    outputFile << j.dump(4);
}

void jsonOutput(task _t)
{
    json j;
    j["task"] = makeJson(_t);
    string fileName = "task_" + _t.title + ".json";
    ofstream outputFile(fileName);
    outputFile << j.dump(4);
}

string showEvents()
{
    string markWhen = "";
    for (auto ev : all_events)
    {
        event e = *ev;
        string due_date = dateToString(e.event_date);
        markWhen += (due_date + ": " + e.title + " #event\n");
    }
    return markWhen;
}

string makeCalendar(member _m)
{
    member *m = member_map[_m.get_id()];
    json j;
    string markWhen = "";

    // cout << m->tasks().size() << endl;
    if ((m->tasks().size()) == 0)
    {
        return markWhen;
    }
    int month = m->tasks()[0].due_date.month;
    int year = m->tasks()[0].due_date.year;
    // cout << "Month: "<<month << "Year: "<<year << "Date: "<<dateToString(date(1, month, year))<<endl;
    for (auto t : m->tasks())
    {
        string due_date = dateToString(t.due_date);
        string information = t.title + "-> " + m->info["name"] + " Status: " + t._status + " ";

        markWhen += (due_date + ": " + information + "#" + t._status + "\n\n");
    }
    return markWhen;
}

string makeCalendar(team _t)
{
    team *t = team_map[_t.get_id()];
    string markWhen = "";

    for (auto mem : t->members())
    {
        markWhen += makeCalendar(mem);
    }

    for (auto sub : t->teams())
    {
        markWhen += makeCalendar(sub);
    }
    markWhen += showEvents();
    return markWhen;
}

string makeCalendar()
{
    string markWhen = "";
    markWhen += showEvents();
    return markWhen;
}

void showCalendar(member _m)
{
    string calendars = makeCalendar(_m);
    string fileName = "member_" + _m.info["name"] + "_calendar.mw";
    ofstream outputFile(fileName);
    outputFile << calendars;
}

void showCalendar(team _t)
{
    string calendars = makeCalendar(_t);
    string fileName = "task_" + _t.name + "_calendar.mw";
    ofstream outputFile(fileName);
    outputFile << calendars;
}

void showCalendar()
{
    string calendars = makeCalendar();
    ofstream outputFile("overallCalendar.mw");
    outputFile << calendars;
}

date create_date(int day, int month, int year)
{
    date *d = new date(day, month, year);
    return *d;
}

date create_date()
{
    date *d = new date();
    return *d;
}

// ********************Member Class | Function Definitions*******************

member::member(string name, string email, string phone, string id)
{
    this->info["name"] = name;
    this->info["email"] = email;
    this->info["phone"] = phone;
    if (id != "NULL")
        this->member_id = id;
    else
        this->member_id = gen_ID(10);
    member_map[member_id] = this;
}

string member::get_id()
{
    return this->member_id;
}

member create_member(string name = "random name", string email = "NULL", string phone = "NULL")
{
    member *m = new member(name, email, phone);
    return *m;
}

void member::add_task(task assigned_task)
{
    member_map[this->member_id]->_tasks.insert(task_map[assigned_task.get_id()]);
    task_map[assigned_task.get_id()]->assigned.insert(member_map[this->member_id]);
}

void member::add_team(team t)
{
    member_map[this->member_id]->_teams.insert(team_map[t.get_id()]);
    team_map[t.get_id()]->_members.insert(member_map[this->member_id]);
}

void member::remove(task assigned_task)
{
    member_map[this->member_id]->_tasks.erase(task_map[assigned_task.get_id()]);
    task_map[assigned_task.get_id()]->assigned.erase(member_map[this->member_id]);
}

void member::remove(team t)
{
    member_map[this->member_id]->_teams.erase(team_map[t.get_id()]);
    team_map[t.get_id()]->_members.erase(member_map[this->member_id]);
}

vector<task> member::tasks()
{
    vector<task> v;
    for (auto t : member_map[this->member_id]->_tasks)
    {
        v.push_back(*t);
    }
    return v;
}

vector<team> member::teams()
{
    vector<team> v;
    for (auto t : member_map[this->member_id]->_teams)
    {
        v.push_back(*t);
    }
    return v;
}

void member::display(int level)
{
    tab(level);
    cout << "Member Name: " << this->info["name"] << endl;
    tab(level);
    cout << "Member Email: " << this->info["email"] << endl;
    tab(level);
    cout << "Member Phone: " << this->info["phone"] << endl;
    tab(level);
    cout << "Member Tasks: " << endl;
    for (auto t : member_map[this->get_id()]->tasks())
    {
        tab(level);
        cout << "\t" << t.title << endl;
    }
    tab(level);
    cout << "Member Teams: " << endl;
    for (auto t : member_map[this->get_id()]->teams())
    {
        tab(level);
        cout << "\t" << t.name << endl;
    }
    cout << "\n\n";
}

void member::update_info(map<string, string> info)
{
    for (auto i : info)
    {
        member_map[this->member_id]->info[i.first] = i.second;
        this->info[i.first] = i.second;
    }
}

// Operator Overloading
void member::operator+=(task t)
{
    add_task(t);
}
void member::operator+=(team t)
{
    add_team(t);
}
void member::operator-=(task t)
{
    remove(t);
}
void member::operator-=(team t)
{
    remove(t);
}

// ********************Team Class | Function Definitions*******************

team::team(string name, /*member lead,*/
           string moto, vector<member *> members, vector<team *> sub_teams, string id)
{
    this->name = name;
    // this->lead = member_map[lead.get_id()];
    this->description = moto;
    for (auto m : members)
    {
        this->_members.insert(m);
    }
    for (auto t : sub_teams)
    {
        this->sub_teams.insert(t);
    }
    if (id == "NULL")
        this->team_id = gen_ID(10);
    else
        this->team_id = id;
    // cout << this->team_id << endl;
    team_map[this->team_id] = this;
}

string team::get_id()
{
    return this->team_id;
}

json team::to_json()
{
    json teamJson;
    team teams = *this;
    teamJson["team_id"] = teams.get_id();
    teamJson["team_name"] = this->name;
    // teamJson["team_lead"] = this->lead->info["name"];

    json membersJson;
    for (auto &_member : this->members())
    {
        json memberJson;
        member *memPointer = &_member;
        memberJson["name"] = memPointer->info["name"];
        memberJson["email"] = memPointer->info["email"];
        memberJson["phone_no"] = memPointer->info["phone"];
        membersJson.push_back(memberJson);
    }

    teamJson["team_members"] = membersJson;

    return teamJson;
}

team create_team(string name = "random name", /*member lead = member(),*/
                 string moto = "No Description Given", vector<member> members = {}, vector<team> sub_teams = {})
{
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
    team *t = new team(name, moto, m, v);

    return *t;
}

void team::insert(member m)
{

    team_map[this->team_id]->_members.insert(member_map[m.get_id()]);
    member_map[m.get_id()]->_teams.insert(team_map[this->team_id]);
}

void team::insert(vector<member> m)
{
    for (auto mem : m)
    {
        // cout << this->team_id  << endl;
        team_map[this->team_id]->_members.insert(member_map[mem.get_id()]);
        member_map[mem.get_id()]->_teams.insert(team_map[this->team_id]);
    }
}

void get_subteam_ids(set<string> &v, team t, string id)
{
    if (v.find(id) != v.end())
    {
        cout << "Error: Cyclic Dependency: Insert Subteam Failed " << endl;
        exit(0);
    }
    for (auto teams : team_map[t.get_id()]->teams())
    {
        v.insert(teams.get_id());
        get_subteam_ids(v, teams, id);
    }
    return;
}

void team::insert(team t)
{
    // get all subteams of t and check if this team is already present in them
    set<string> v;
    get_subteam_ids(v, t, this->team_id);
    team_map[this->team_id]->sub_teams.insert(team_map[t.get_id()]);
}

void team::insert(vector<team> t)
{

    for (auto teams : t)
    {
        // cout << this->team_id  << endl;
        set<string> v;
        get_subteam_ids(v, teams, this->team_id);
        team_map[this->team_id]->sub_teams.insert(team_map[teams.get_id()]);
    }
}

void team::remove(member m)
{
    team_map[this->team_id]->_members.erase(member_map[m.get_id()]);
    member_map[m.get_id()]->_teams.erase(team_map[this->team_id]);
}

void team::remove(vector<member> m)
{
    for (auto mem : m)
    {
        team_map[this->team_id]->_members.erase(member_map[mem.get_id()]);
        member_map[mem.get_id()]->_teams.erase(team_map[this->team_id]);
    }
}

void team::remove(team t)
{
    team_map[this->team_id]->sub_teams.erase(team_map[t.get_id()]);
}

void team::remove(vector<team> t)
{
    for (auto teams : t)
    {
        if (team_map[this->team_id]->sub_teams.find(team_map[teams.get_id()]) != team_map[this->team_id]->sub_teams.end())
        {
            cout << "Error: Team not found" << endl;
            return;
        }
        team_map[this->team_id]->sub_teams.erase(team_map[teams.get_id()]);
    }
}

vector<member> team::members()
{
    vector<member> v;
    for (auto m : team_map[this->team_id]->_members)
    {
        v.push_back(*m);
    }
    return v;
}

vector<team> team::teams()
{
    vector<team> v;
    for (auto t : team_map[this->team_id]->sub_teams)
    {
        v.push_back(*t);
    }
    return v;
}

void team::show(int level)
{
    team *t = team_map[this->team_id];
    tab(level);
    cout << "Team Name: " << t->name << endl;
    tab(level);
    cout << "Team ID: " << t->team_id << endl;
    // tab(level);
    // cout << "Team Lead: " << t->lead->info["name"]<< endl;
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
    cout << "\n\n";
}

// Operator Overloading
void team::operator+=(member m)
{
    insert(m);
}
void team::operator+=(vector<member> m)
{
    insert(m);
}
void team::operator+=(team t)
{
    insert(t);
}
void team::operator+=(vector<team> t)
{
    insert(t);
}
void team::operator-=(member m)
{
    remove(m);
}
void team::operator-=(vector<member> m)
{
    remove(m);
}
void team::operator-=(team t)
{
    remove(t);
}
void team::operator-=(vector<team> t)
{
    remove(t);
}

//  ********************Task Class | Function Definitions*******************

task::task(string title, string description, int priority, string status, date due_date, string id)
{
    this->title = title;
    this->description = description;
    this->priority = priority;
    this->_status = status;
    this->due_date = due_date;
    if (id != "NULL")
    {
        this->task_id = id;
    }
    else
        this->task_id = gen_ID(10);
    task_map[task_id] = this;
}

string task::get_id()
{
    return this->task_id;
}

task create_task(string title = "random title", string description = "No Description Given", int priority = 0, string status = "To Do", date due_date = date())
{
    task *t = new task(title, description, priority, status, due_date);
    return *t;
}

void task::assign_to(member m)
{
    task_map[this->task_id]->assigned.insert(member_map[m.get_id()]);
    member_map[m.get_id()]->_tasks.insert(task_map[this->task_id]);
}

void task::status(string status)
{
    task_map[this->task_id]->_status = status;
}

vector<member> task::assigned_to()
{
    vector<member> v;
    for (auto m : task_map[this->task_id]->assigned)
    {
        v.push_back(*m);
    }
    return v;
}

//  ********************Event Class | Function Definitions*******************

event::event(string title, string description, date event_date)
{
    this->title = title;
    this->description = description;
    this->event_date = event_date;
    this->event_id = gen_ID(10);
    all_events.push_back(this);
}

string event::get_id()
{
    return this->event_id;
}

event create_event(string title = "random title", string description = "No Description Given", date event_date = date())
{
    event *e = new event(title, description, event_date);
    return *e;
}

// ******************** DataBase System *******************

json teamtoDocument(team _t)
{
    team *t = team_map[_t.get_id()];
    json j;
    j["team_name"] = t->name;
    // j["team_lead"] = t->lead->info["name"];
    j["team_description"] = t->description;
    j["members"] = json::array();
    for (member m : t->members())
    {
        j["members"].push_back(m.get_id());
    }
    j["sub_teams"] = json::array();
    for (team sub : t->teams())
    {
        j["sub_teams"].push_back(sub.get_id());
    }
    return j;
}

json membertoDocument(member _m)
{
    member *m = member_map[_m.get_id()];
    json j;
    for (auto i : m->info)
    {
        j[i.first] = i.second;
    }
    j["member_tasks"] = json::array();
    for (task t : m->tasks())
    {
        j["member_tasks"].push_back(t.get_id());
    }
    j["member_teams"] = json::array();
    for (team t : m->teams())
    {
        j["member_teams"].push_back(t.get_id());
    }
    return j;
}

json tasktoDocument(task _t)
{
    task *t = task_map[_t.get_id()];
    json j;
    j["task_title"] = t->title;
    j["task_description"] = t->description;
    j["task_priority"] = t->priority;
    j["task_status"] = t->_status;
    j["task_due_date"] = dateToString(t->due_date);
    j["task_assigned_to"] = json::array();
    for (member m : t->assigned_to())
    {
        j["task_assigned_to"].push_back(m.get_id());
    }
    return j;
}

void savetoDocument(string filename = "database")
{
    json j;
    json teamJson;
    for (auto t : team_map)
    {
        teamJson[t.first] = teamtoDocument(*t.second);
    }
    j["teams"] = teamJson;
    json memberJson;
    for (auto m : member_map)
    {
        memberJson[m.first] = membertoDocument(*m.second);
    }
    j["members"] = memberJson;
    json taskJson;
    for (auto t : task_map)
    {
        taskJson[t.first] = tasktoDocument(*t.second);
    }
    j["tasks"] = taskJson;
    ofstream outputFile(filename + ".json");
    outputFile << j.dump(4);
}

vector<team> loadfromDocument(string filename = "database")
{

    ifstream inputFile(filename + ".json");
    json j = json::parse(inputFile);
    json teamJson = j["teams"];
    vector<team> teams;

    for (auto &t : teamJson.items())
    {
        json team_ = t.value();
        team *temp = new team(team_["team_name"], team_["team_description"], {}, {}, t.key());
        teams.push_back(*temp);
    }

    json memberJson = j["members"];
    for (auto &m : memberJson.items())
    {
        json m_ = m.value();
        string email = "NULL";
        if (m_.find("email") != m_.end())
        {
            email = m_["email"];
        }
        string phone = "NULL";
        if (m_.find("phone_no") != m_.end())
        {
            phone = m_["phone_no"];
        }
        member *temp = new member(m_["name"], email, phone, m.key());
    }

    json taskJson = j["tasks"];
    for (auto &t : taskJson.items())
    {
        json t_ = t.value();

        task *temp = new task(t_["task_title"], t_["task_description"], t_["task_priority"], t_["task_status"], stringToDate(t_["task_due_date"]), t.key());
    }

    for (auto &t_ : teamJson.items())
    {
        team *temp = team_map[t_.key()];
        json t = t_.value();
        for (auto &mem : t["members"])
        {
            temp->insert(*member_map[mem]);
        }
        for (auto &sub : t["sub_teams"])
        {
            temp->insert(*team_map[sub]);
        }
    }

    for (auto &m : memberJson.items())
    {
        member *temp = member_map[m.key()];
        json m_ = m.value();
        for (auto t : m_["member_tasks"])
        {
            temp->add_task(*task_map[t]);
        }
    }
    return teams;
}

team team::operator&(team other)
{
    string newTeamName = name + "&" + other.name;
    team t3 = create_team(newTeamName);
    for (auto memberA : team_map[this->get_id()]->members())
    {
        for (auto memberB : team_map[other.get_id()]->members())
        {
            if (memberA.get_id() == memberB.get_id())
            {
                t3.insert(memberB);
                break;
            }
        }
    }
    return t3;
}

team team::operator|(team other)
{
    string newTeamName = name + "|" + other.name;
    team t3 = create_team(newTeamName);
    for (auto memberA : team_map[this->get_id()]->members())
    {
        t3.insert(memberA);
    }
    for (auto memberB : team_map[other.get_id()]->members())
    {
        t3.insert(memberB);
    }
    for (auto memberC : team_map[(*this & other).get_id()]->members())
    {
        t3.remove(memberC);
    }
    return t3;
}