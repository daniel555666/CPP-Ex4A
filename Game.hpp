#pragma once
#include<iostream>
#include<string.h>
#include<vector>
#include"Player.hpp" 
using namespace std;


namespace coup{
    
    class Player;

    class Game{

        public:
            size_t turn_num;
            vector<Player>playerList;

            Game();
            string turn();
            vector<string>players();
            void next_turn();
            string winner();

   
    
             

       
    };

}