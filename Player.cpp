#include <iostream>
#include <string.h>
#include "Player.hpp"
#include <exception>
using namespace coup;
using namespace std;

bool Player::check_if_my_trun()
{
    if (game->playerList.at(game->turn_num).name != name)
    {   
        cout<<"not your turn,dont cheat"<<endl;
       // throw ;
        return false;
    }
    return true;
}

Player::Player(Game &game1, string name)
{
    
    this->name = name;
    this->coinsNum = 0;
    this->game = &game1;
    this->game->playerList.push_back(*this); // need to check if no have the same name,for tests as well
}

void Player::income()
{
    if(this->check_if_my_trun()){

    this->coinsNum++;
    this->game->next_turn();
    }  
}
void Player::foreign_aid()
{
    if(this->check_if_my_trun()){
    
    this->coinsNum += 2;
    this->game->next_turn();
    }
}
void Player::coup(Player p)
{
    if(this->check_if_my_trun()){

        // need to do
    this->game->next_turn();
    }
}
string Player::role()
{
    return this->myRole;
}
int Player::coins()
{
    return this->coinsNum;
}