#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    // Test Case 1
    // Basic operations: Create members, teams, and tasks

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    member m2 = create_member("Bob", "bob@example.com", "9876543210");
    team t1 = create_team("Team A", "Description A");
    team t2 = create_team("Team B", "Description B");
    task task1 = create_task("Task 1", "Description 1", 1, "To Do", date(31, 12, 2023));

    m1 += task1;   // Add task to member
    m1 += t1;      // Add member to team
    t1 += m2;      // Add member to team
    t1 += t2;      // Add subteam to team

    // Display information
    m1.display();
    t1.show();
    jsonOutput(m1);

    return 0;
}
