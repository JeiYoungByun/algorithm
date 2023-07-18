#include "Dept.h"

Dept::Dept(int size){
    this->size = size;
    scores = new int[size];
}

/*Dept::Dept(const Dept& dept){
    this->size = dept.size;
    this->scores = new int[dept.size];
    for(int i=0; i<dept.size; i++){
        this->scores[i] = dept.scores[i];
    }
}*/

void Dept::read(){
    cout<<"input "<<size<<" scores>> ";
    for(int i=0; i<size; i++){
        cin>>scores[i];
    }
}

bool Dept::isOver60(int index){
    if( scores[index] > 60 ) return true;
    else return false;
}