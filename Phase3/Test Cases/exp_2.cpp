#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    team t1 = create_team("Team A", "Description A");
    task task1 = create_task("Task 1", "Description 1", 1, "To Do", date(2023, 12, 31));
    team t2 = create_team("Team B", "Description B");

    m1 += task1;
    m1 += t1;
    t1.insert(t2);

    // Update member info
    m1.update_info({{"name", "Alice Updated"}, {"email", "updated@example.com"}});
    m1.display();
    printf("\n\n");
    // Remove task from member
    m1 -= task1;
    event e = create_event("Event Name", "Event Desc", date(2023, 12, 5));

    // Remove member from team
    t1 -= m1;

    t1.show();
    jsonOutput(m1);
    showCalendar(m1);


    return 0;
}
