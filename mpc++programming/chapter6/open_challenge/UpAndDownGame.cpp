#include "UpAndDownGame.h"
#include "Person.h"

int UpAndDownGame::n = 0;
int UpAndDownGame::left = 0;
int UpAndDownGame::right = 99;

void UpAndDownGame::PlayGame(){
    srand((unsigned)time(NULL));
    n = rand()%100;
    
    cout<<"Up & Down Game Started"<<endl;

    int answer1 = 0;
    int answer2 = 0;

    Person player1;
    Person player2;

    while (true){
        cout<<"the answer is between "<<left<<" and "<<right<<endl;
        answer1 = player1.getAnswer();
        if(n == answer1) {cout<<player1.getName()<<" won"<<endl; break;}
        else if(answer1 > n) right = answer1;
        else left = answer1;

        cout<<"the answer is between "<<left<<" and "<<right<<endl;
        answer2 = player2.getAnswer();
        if(n == answer2) {cout<<player2.getName()<<" won"<<endl; break;}
        else if(answer2 > n) right = answer2;
        else left = answer2;
    }
}

