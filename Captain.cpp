#include <iostream>
#include <string>
#include "Captain.hpp"
using namespace std;
namespace coup{
    Captain::Captain(Game &game, string privateName):Player(game, privateName){
        game.insertPlayer(privateName);
        this->roleName="Captain";
    }
    Captain::~Captain(){}
    string Captain::role(){return this->roleName;}
    int Captain::coins(){return this->numsCoins;}
    void Captain::income(){
        this->numsCoins++;
    }
    void Captain::foreign_aid(){
        this->numsCoins+=2;
    }
    void Captain::coup(Player &p){
        if(this->numsCoins<7){
            throw invalid_argument{"you need at least 7 coins"};
        }this->game->deletePlayer(p.getName());
        this->numsCoins-=7;
    }
    void Captain::steal(Player &p){
        p.numsCoins-=2;
        this->numsCoins+=2;
    }
    // void Captain::transfer(Player &send, Player &accept){}
    // void Captain::tax(){}
    void Captain::block(Player &blocked){
        blocked.isBlocked=1;
        blocked.whoBlockMe=4;
    }
}