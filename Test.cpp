#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

TEST_CASE("check income,foreign_aid,coins functions and Duke block function")
{
    Game game_1{};

    Duke player1{game_1, "Moo"};
    Duke player2{game_1, "avi"};
    Assassin player3{game_1, "or"};
    Ambassador player4{game_1, "Meirav"};
    Captain player5{game_1, "Reut"};
    Contessa player6{game_1, "Gilad"};

    for (int i = 0; i < 100; i++)
    {
        player1.income();
        player2.income();
        player3.income();
        player4.income();
        player5.income();
        player6.income();
        player1.block(player3);
        player2.block(player4);
        player3.foreign_aid();
        player4.foreign_aid();
        player5.foreign_aid();
        player6.foreign_aid();
    }
    CHECK(player1.coins() == 100); // use income and block
    CHECK(player2.coins() == 100); // use income and block
    CHECK(player3.coins() == 100); // use income,foreign_aid and got a block
    CHECK(player4.coins() == 100); // use income,foreign_aid and got a block
    CHECK(player5.coins() == 300); // use income and foreign_aid
    CHECK(player6.coins() == 300); // use income and foreign_aid
}
TEST_CASE("check throw when play not in your turn")
{
    Game game_2{};

    Duke player1{game_2, "Moo"};
    Duke player2{game_2, "avi"};
    Assassin player3{game_2, "or"};
    Ambassador player4{game_2, "Meirav"};
    Captain player5{game_2, "Reut"};
    Contessa player6{game_2, "Gilad"};

    CHECK_THROWS(player2.income());  // player1 turn
    CHECK_NOTHROW(player1.income()); // player1 turn
    CHECK_NOTHROW(player2.income()); // player2 turn
    CHECK_THROWS(player4.income());  // player2 turn
    CHECK_NOTHROW(player3.income()); // player3 turn
    CHECK_NOTHROW(player4.income()); // player4 turn
    CHECK_NOTHROW(player5.income()); // player5 turn
    CHECK_NOTHROW(player6.income()); // player6 turn
    CHECK_THROWS(player2.income());  // player1 turn
    CHECK_NOTHROW(player1.income()); // player1 turn
}
TEST_CASE("check you dont allow players with the same name ")
{

    Game game_3{};              // in real game you will throw in the constructor and
                                //  the game will continue because use of try and catch
    Duke player1{game_3, "avi"};
    Duke player2_not_add{game_3, "avi"};
    Assassin player3{game_3, "or"};
    Ambassador player4{game_3, "Meirav"};
    Captain player5{game_3, "Reut"};
    Contessa player6{game_3, "Gilad"};
    Contessa player7_not_add{game_3, "Gilad"};

    for (size_t i = 0; i < game_3.playerList.size(); i++)
    {
        for (size_t j = i + 1; j < game_3.playerList.size(); j++)
        {
            CHECK(game_3.playerList.at(i).name != game_3.playerList.at(j).name);
        }
    }
}
TEST_CASE("check role,players functions "){
    Game game_4{};

    Duke player1{game_4, "Moo"};
    Duke player2{game_4, "avi"};
    Assassin player3{game_4, "or"};
    Ambassador player4{game_4, "Meirav"};
    Captain player5{game_4, "Reut"};
    Contessa player6{game_4, "Gilad"};

    vector<string>temp={"Moo","avi","or","Meirav","Reut","Gilad"};
    vector<string>players_function=game_4.players();

    for( size_t i=0; i < 6 ; i++ ){
        CHECK(players_function.at(i)==temp.at(i));
    }
    CHECK(player1.role()=="Duke");
    CHECK(player2.role()=="Duke");
    CHECK(player3.role()=="Assassin");
    CHECK(player4.role()=="Ambassador");
    CHECK(player5.role()=="Captain");
    CHECK(player6.role()=="Contessa");

}


