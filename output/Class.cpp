#include "../Phase3/teamScribe.h"

class Home{
public: 
    team family;
    team relatives;
    team friends;
    team colleagues;
    team neighbours; 
    
    void init(){
        this.family = create_team("family" , "Happy Family");
        this.relatives = create_team("relatives" , "Relatives");
        this.friends = create_team("friends" , "cool friends");
        this.colleagues = create_team("colleagues" , "lets work");
        this.neighbours = create_team("neighbours", "loser neighbours");
    }

    void init(team family, team relatives, team friends, team colleagues, team neighbours){
        this.family = family;
        this.relatives = relatives;
        this.friends = friends;
        this.colleagues = colleagues;
        this.neighbours = neighbours;
    }

    void addPerson(member p, string relation){
        if(relation is "family"){
            family.insert(p);
        }
        else if(relation is "relatives"){
            relatives.insert(p);
        }
        else if(relation is "friends"){
            friends.insert(p);
        }
        else if(relation is "colleagues"){
            colleagues.insert(p);
        }
        else if(relation is "neighbours"){
            neighbours.insert(p);
        }
        else{
            print("Invalid Relation\n");
        }
    }