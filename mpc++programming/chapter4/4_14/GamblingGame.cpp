#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>
#include "GamblingGame.h"

using namespace std;

GamblingGame::GamblingGame(){
    cout<<"***** gamblinggame started *****"<<endl;
    srand((unsigned)time(NULL));

    p = new Player[2];

    string player1;
    string player2;

    cout<<"player 1>>";
    cin>>player1;
    cout<<"player 2>>";
    cin>>player2;

    p[0].setName(player1);
    p[1].setName(player2);

    cin.ignore();
}

void GamblingGame::Gameplay(){
    while(true) {
        cout<<p[0].getName()<<":<enter>";
        getline(cin, s);
        if(s.empty()){
            a = rand()%3; b = rand()%3; c = rand()%3;
            if(a==b && b==c) {
                cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<p[0].getName()<<" victory!"<<endl;
                return;
            }
            else {
                cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<"again"<<endl;
            }
        }
        cout<<p[1].getName()<<":<enter>";
        getline(cin, s);
        if(s.empty()){
            a = rand()%3; b = rand()%3; c = rand()%3;
            if(a==b && b==c) {
                cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<p[1].getName()<<" victory!"<<endl;
                return;
            }
            else {
                cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<"again"<<endl;
            }
        }
    }
}

GamblingGame::~GamblingGame(){ delete [] p; }