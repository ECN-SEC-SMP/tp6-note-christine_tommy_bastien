#include "../headers/Pion.hpp"
#include "../headers/Des.hpp"

void Pion::setPosition(uint8_t nouvelle_position){
    position = nouvelle_position;
}

uint8_t Pion::getPosition(){
    Des des;
    uint8_t nouvelle_position=position+des.getValue();
    return nouvelle_position;
}