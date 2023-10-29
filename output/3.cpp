#include <iostream>
#include <string>
#include <vector>
#include "teamScribe.h"


main data = base.load("../Data/data.json");

int main()
{
    member m_a, m_b, m_c;
    m_a = create_member("Sumedh");
    m_b = create_member("Kaustubh");
    m_c = create_member("Aman");

    team t = data.search(type = "team", id = "4321");

    t.add_member({m_a, m_b, m_c});

    member m = data.search(type = of_type(abc), id = "78324");

    if(t.find_member(m))
    {
        task t_0 = create_task("Update Team Info", "01-11-23 11:59PM", Assigned, note="Urgent");
        t_0 .add_member( m);
    }

    team finances, finances_dummy;

    /* Naive way to search */
    for(int i = 0; i < len(t.subteams); i++)
    {
        if(t.subteam[i].id is "17823")
        {
            finances_dummy = t.subteam[i];
            break;
        }
    }

    /* Efficient Search */
    finances = t.search(type = of_type(abc), id = "17823");

    meeting finance_sync = create_meeting(name="Finance Team Updates", date = "02-11-23", time = "14:30", team_ = finances);

    base.save(data, "../Data/data.json"); 
     team t[d][1][3][2] = data.search(type = of_type(abc), id = "17823"); 
    return 0;
}