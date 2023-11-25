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