#include <iostream>
#include <string>
#include "Duke.hpp"
using namespace std;
namespace coup{
    Duke::Duke(Game &game, string privateName):Player(game, privateName) {
        game.insertPlayer(privateName);

        this->roleName="Duke";
    }
    Duke::~Duke(){}
    string Duke::role(){return this->roleName;}
    int Duke::coins(){return this->numsCoins;}
    void Duke::income(){
        this->numsCoins++;
        this->game->nextTurn();
    }
    void Duke::foreign_aid(){
        this->numsCoins+=2;
        this->game->nextTurn();
    }
    void Duke::coup(Player &p){
        if(this->numsCoins<7){
            throw invalid_argument{"you need at least 7 coins"};
        }this->game->deletePlayer(p.getName());
        this->numsCoins-=7;
    }
    // void Duke::steal(Player &p){}
    // void Duke::transfer(Player &send, Player &accept){}
    void Duke::tax(){
        this->numsCoins+=3;
    }
    void Duke::block(Player &blocked){
        blocked.isBlocked=1;
        blocked.whoBlockMe=1;
        if(blocked.lastAct=="foreign_aid"){
            blocked.numsCoins-=2;
        }
    }
}