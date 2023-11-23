#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    // Test Case 2
    // Update and remove operations: Update member info, remove tasks, and teams

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    team t1 = create_team("Team A", "Description A");
    task task1 = create_task("Task 1", "Description 1", 1, "To Do", date(2023, 12, 31));

    m1 += task1;
    m1 += t1;

    // Update member info
    m1.update_info({{"name", "Alice Updated"}, {"email", "updated@example.com"}});
    m1.display();
    printf("\n\n");
    // Remove task from member
    m1 -= task1;

    // Remove member from team
    t1 -= m1;

    // Display information
    m1.display();
    t1.show();
    jsonOutput(m1);

    return 0;
}
