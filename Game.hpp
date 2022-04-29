#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
namespace coup{

    class Game
    {
        
    private:
        vector <string> playersList;
        unsigned int numsPlayers;
        unsigned int currTurn;
        bool online;
    public:
        // vector <string> playersList;
        // int numsPlayers;
        // bool online;
        Game(/* args */);
        ~Game();
        vector<string> players();
        string turn();
        unsigned int getTurnInd();
        void nextTurn();
        string winner();
        void insertPlayer(string player);
        void deletePlayer(std::string player);
    };
    
    // Game::Game(/* args */)
    // {
    // }
    
    // Game::~Game()
    // {
    // }
    
}