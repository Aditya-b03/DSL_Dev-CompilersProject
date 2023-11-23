#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    // Test Case 3
    // Calendar integration: Create tasks with due dates and generate member calendar

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    member m2 = create_member("Bob", "bob@gmail.com", "9880467564");
    team t1 = create_team("Team A", "Description A");

    task task1 = create_task("Task 1", "Description 1", 1, "To Do", date(31, 12, 2023));
    task task2 = create_task("Task 2", "Description 2", 2, "In Progress", date(15, 12, 2023));
    task task3 = create_task("Task 3", "No Desc");
    task task4 = create_task("Task 4", "Member 2");
    event event1 = create_event("Event 1", "Description 1", date(17, 12, 2023));

    m1 += task1;
    m1 += task2;
    m1 += task3;
    m1 += t1;
    t1 += m2;
    m2 += task4;

    // Show member's calendar
    showCalendar(t1);

    return 0;
}
