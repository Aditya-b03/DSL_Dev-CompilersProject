#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    // Test Case 5
    // Event handling: Create events and display them

    member m1 = create_member("Alice", "alice@example.com", "1234567890");
    event event1 = create_event("Event 1", "Description 1", date(2023, 12, 15));


    // Show events
    cout << showEvents() << endl;

    return 0;
}
