#include<iostream>
#include<string.h>
#include"Contessa.hpp"
using namespace coup;
using namespace std;

Contessa::Contessa(Game &game1,string name):Player(game1,name){
    this->myRole="Contessa";
}
void Contessa::block(Player p){
if(this->check_if_my_trun()){
        this->game->next_turn();
    //need to fill
    }}