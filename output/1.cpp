#include <iostream>
#include <string>
#include <vector>
#include "teamScribe.h"


team test_team;
int i;
member test_member = 2000;
int a = something.something;
int func(){
    test_member.salary = 33260;
    a = 2;
    members.salary = 20000;
    test_member.test_member = "12/08/2021";
    test_team.id = 3472;
    member a2;
    a2 = create_members(name = "John", email = "john120@gmail.com", contact = "9972073345");
    add_team_members(3472, {test_member.id, John.id});
}
int main(){
    for (i = 0; i < len(test_team.members); i++){ /* Add len(test_team.members) as a functionality*/
        float sal =  test_team.members[i].salary;
        if (sal > 20000){
            test_team.members[i].salary += 10000;
        }
    }

    printf("Looking at team now...");
    flow(test_team);

    member member2;
    member2.name = "Hello";

    test_team += member2;
    test_team2 = test_team;

    test_team2.add(member2); /* Will the member be added again, or overwritten, or an error? */
    /*team.add_member(member2);*/ /* This should give an error, as the team is not defined.*/
    /* There are too many ways to add a member, we should reduce that.*/

    task test_task = create_task("Will this work?", "This is to test the addition of a task and assigning.", "12/12/2023");
    test_task.lead = member2;
    test_task.status = Doing; /* Can only be three options, any other should give error.*/
    test_member++;
    test_task .add_member( test_member); /*take care of  ARROW*/
    team team3;
    team3 = test_team & test_team2;
    board(team3);

}