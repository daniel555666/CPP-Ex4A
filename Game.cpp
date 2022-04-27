#include<iostream>
#include<string.h>
#include"Game.hpp"
// #include"Player.hpp" //to check
using namespace std;

namespace coup{

    Game::Game(){
        this->turn_num=0;
    }

    string Game::turn(){
        return "need to fill";
    }
    vector<string> Game::players(){
        vector<string>players_str;
        for(size_t i =0;i<this->playerList.size();i++){
            players_str.push_back(this->playerList.at(i).name);
        }
        return players_str;
    }
    void Game::next_turn(){
       this->turn_num=(this->turn_num+1)%(this->playerList.size());
    }
    string Game::winner(){
        return "need to fill";
    }


}


