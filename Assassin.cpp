#include<iostream>
#include<string.h>
#include"Assassin.hpp"
using namespace coup;
using namespace std;

Assassin::Assassin(Game &game1,string name):Player(game1,name){
    this->myRole="Assassin";
}
void Assassin::coup(Player p){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    
    if(this->coinsNum<3){
        throw runtime_error("not enough coins");
    }
    //need to fill
    }
}
