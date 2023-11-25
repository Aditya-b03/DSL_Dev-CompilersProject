#include "../Phase3/teamScribe.h"
int main() {

    /*Create a new member*/
    member m1 = create_member("Aditya Sridhar", "I am a student", "1234567890");
    member m2 = create_member("Aditya Sridhar", "I am a student", "1234567890");

    /* a new team*/
    team t1 = create_team("Team 1", "This is team 1");
    team t2 = create_team("Team 2", "This is team 2");

    /* Create a new task*/
    task tsk1 = create_task("Task 1", "This is task 1", 1, "To Do", create_date(31, 12, 2023));
    task tsk2 = create_task("Task 2", "This is task 2", 2, "To Do", create_date(31, 12, 2023));

    /* Create a new event*/
    event e1 = create_event("Event 1", "This is event 1", create_date(31, 12, 2023));

    /* using team methods */
    t1.insert(m1);
    /* operator */
    t1 += m2;


    /* using member methods */
    m1.add_team(t1);
    m1.add_task(tsk1);
    /* operator */
    m1 += t1;
    m1 += tsk2;

    /* using task methods */
    tsk1.assign_to(m1);
    /* operator */
    tsk1 + m2;

    /* using event methods */
    event e2 = create_event("Event 2", "This is event 2", create_date(31, 12, 2023));

    /* using global functions */
    jsonOutput(t1);
    jsonOutput(m1);
    jsonOutput(tsk1);

    return 0;
}