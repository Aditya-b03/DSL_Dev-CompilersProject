#include <iostream>
#include "../teamScibe.h"

using namespace std;
int main() {
    member alice = create_member("Alice", "alice@email.com", "123-456");
    member bob = create_member("Bob", "bob@email.com", "789-012");

    // Creating teams
    team developmentTeam = create_team("Development Team", "Coding Wizards");
    team marketingTeam = create_team("Marketing Team", "Promotion Gurus");

    // Adding members to teams
    developmentTeam += alice;
    developmentTeam += bob;
    marketingTeam += alice;

    // Creating sub-teams
    team frontendTeam = create_team("Frontend Team", "UI/UX Experts");
    team backendTeam = create_team("Backend Team", "Server-side Masters");

    // Adding sub-teams to the development team
    developmentTeam += frontendTeam;
    developmentTeam += backendTeam;

    // Displaying team hierarchy
    developmentTeam.show();

    // Creating events
    event releaseEvent = create_event("Product Release", "Launch of the new version");

    // Displaying member and team calendars
    showCalendar(alice);
    showCalendar(developmentTeam);

    // Saving data to document
    savetoDocument("test_case_5");

    return 0;
}
