#include<iostream>
#include<string.h>
#include"Captain.hpp"
using namespace coup;
using namespace std;

Captain::Captain(Game &game1,string name):Player(game1,name){
    this->myRole="Captain";
}
void Captain::steal(Player p){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }}
void Captain::block(Player p){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }}
