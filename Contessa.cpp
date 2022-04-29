#include <iostream>
#include <string>
#include "Contessa.hpp"

using namespace std;
namespace coup{
    Contessa::Contessa(Game &game, string privateName):Player(game, privateName){
        game.insertPlayer(privateName);
        this->roleName="Contessa";
    }
    Contessa::~Contessa(){}
    string Contessa::role(){return this->roleName;}
    int Contessa::coins(){return this->numsCoins;}
    void Contessa::income(){
        this->numsCoins++;
    }
    void Contessa::foreign_aid(){
        this->numsCoins+=2;
    }
    void Contessa::coup(Player &p){
        if(this->numsCoins<7){
            throw invalid_argument{"you need at least 7 coins"};
        }this->game->deletePlayer(p.getName());
        this->numsCoins-=7;
    }
    // void Contessa::steal(Player &p){}
    // void Contessa::transfer(Player &send, Player &accept){}
    // void Contessa::tax(){}
    void Contessa::block(Player &blocked){
        blocked.isBlocked=1;
        blocked.whoBlockMe=5;
        // game.insertPlayer((blocked.whoDies);
    }
}