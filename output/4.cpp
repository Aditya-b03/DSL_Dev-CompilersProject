#include "../Phase3/teamScribe.h"
void performTeamOperations() {
    /* Creating members */
    member alice = create_member("Alice", "alice@email.com", "123-456");
    member bob = create_member("Bob", "bob@email.com", "789-012");
    alice.display(0)