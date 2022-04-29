#include "Game.hpp"
#include <iostream>
#include <string>

namespace coup{
    Game::Game(){
        vector <string> p;
        this->playersList=p;
        this->currTurn=0;
        this->numsPlayers=0;
        this->online=0;
    }
    Game::~Game(){}
    vector<std::string> Game::players(){
        return this->playersList;
    }
    std::string Game::turn(){
        // cout<<this->currTurn%(this->playersList.size())<<endl;
        // cout<<(this->playersList.size())<<endl;
        return this->playersList.at(this->currTurn%((unsigned int)this->playersList.size()));
    }
    unsigned int Game::getTurnInd(){
        return this->currTurn;
    }
    void Game::nextTurn(){
        ++this->currTurn;
    }
    std::string Game::winner(){
        if(this->playersList.size()!=1){
           throw invalid_argument{"the game hasn't finished yet"};
        }
        return this->playersList.at(0);
        }

    void Game::insertPlayer(std::string player){
        this->playersList.push_back(player);
        this->numsPlayers++;
    }
    void Game::deletePlayer(std::string player){
        this->playersList.erase(this->playersList.begin()+0);
        this->numsPlayers--;
    }
}