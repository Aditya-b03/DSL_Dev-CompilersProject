#include "iostream"
#include "vector"
#include "map"
#include "set"
#include "teamScibe.h"
using namespace std;



int main(){
    team t1 = create_team();

    date d = date(3, 4, 2023);
    event e = create_event("Title", "Description", d);

    
    
    vector<member> v;
    for(int i = 0; i < 3; i++){
        v.push_back(create_member("member" + to_string(i)));
    }

    vector<team> t;
    for(int i = 0; i < 3; i++){
        t.push_back(create_team("team" + to_string(i)));
    }
    
    t1.insert(v);
    team t2 = create_team("team2");
    t1.insert(t2);

    task tsk = create_task();
    tsk + v[0];
    tsk + v[1];
    tsk.assign_to(v[0]);
    tsk.assign_to(v[1]);
    jsonOutput(t1);
    showCalendar(t1);
    

    member m1 = create_member("member100");
    t1.insert(m1);
    jsonOutput(m1);
    jsonOutput(tsk);
    int a = 0;
    int b = 1;
    savetoDocument();
    loadfromDocument();

}