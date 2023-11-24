#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    // Test Case 4
    // JSON output: Generate JSON files for member, team, and task

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    team t1 = create_team("Team A", "Description A");
    task task1 = create_task("Task 1", "Description 1", 1, "To Do", date(2023, 12, 31));

    m1 += task1;
    m1 += t1;

    // Generate JSON files
    jsonOutput(m1);
    jsonOutput(t1);
    jsonOutput(task1);

    return 0;
}
