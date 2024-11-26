#include <iostream>
#include "player.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    Player p1("Football");
    p1.set_first_name("Adam");
    p1.set_last_name("Fawer");
    std::cout << "Player : " << p1 << std::endl;
    
    return 0;
}