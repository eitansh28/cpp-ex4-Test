#include <iostream>
#include <string>
#include "Assassin.hpp"
using namespace std;
namespace coup{
    Assassin::Assassin(Game &game, string privateName):Player(game, privateName){
        game.insertPlayer(privateName);
        this->roleName="Assassin";
    }
    Assassin::~Assassin(){}
    string Assassin::role(){return this->roleName;}
    int Assassin::coins(){return this->numsCoins;}
    void Assassin::income(){
        // if(this->game->turn()!=this->privateName){
        //     throw invalid_argument{"it's not your turn"};
        // }
        this->numsCoins++;
        this->game->nextTurn();
    }
    void Assassin::foreign_aid(){
        this->numsCoins+=2;
        this->game->nextTurn();
        this->lastAct="foreign_aid";
    }
    void Assassin::coup(Player &p){
        if(this->numsCoins<3){
            throw invalid_argument{"you need at least 3 coins"};
        }this->game->deletePlayer(p.getName());
        this->numsCoins-=3;
        this->whoDies=p.privateName;
    }
    // void Assassin::steal(Player &p){}
    // void Assassin::transfer(Player &send, Player &accept){}
    // void Assassin::tax(){}
    // void Assassin::block(Player &blocked){}
}