#include<iostream>
#include<string.h>
#include"Duke.hpp"
using namespace coup;
using namespace std;

Duke::Duke(Game &game1,string name):Player(game1,name){
    this->myRole="Duke";
}
void Duke::block(Player p){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }}
void Duke::tax(){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }}