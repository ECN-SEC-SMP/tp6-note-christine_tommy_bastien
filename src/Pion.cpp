
#include "Pion.hpp"
#include "Des.hpp"

void Pion::setPosition(unsigned int nouvelle_position){
    position = nouvelle_position;
}

unsigned int Pion::getPosition(){
    Des des;
    unsigned int nouvelle_position=position+des.getValue();
    return nouvelle_position;
}