#include<iostream>
#include<string.h>
#include"Ambassador.hpp"
using namespace coup;
using namespace std;

Ambassador::Ambassador(Game &game1,string name):Player(game1,name){
    this->myRole="Ambassador";
}
void Ambassador::block(Player p){
    if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }
}
void Ambassador::transfer(Player p1,Player p2){
    if(this->check_if_my_trun()){
        this->game->next_turn();

    //need to fill
    }
}
