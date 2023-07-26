#include <iostream>
#include <ctime>
#include <cstdlib>

#define MAX 32767

using namespace std;

class Random{
public:
    static void seed() {srand((unsigned)time(NULL));}
    static int nextInt(int min=0, int max=32767);
    static char nextAlphabet();
    static double nextDouble();
};



int Random::nextInt(int min, int max){
    int n = rand()%(max-min+1)+min;
    return n;
}

char Random::nextAlphabet(){
    bool isAlpha = true;
    char a;
    
    while(isAlpha){
        a = (char)(rand()%58+65);
        if(!(a>90 && a<97)) isAlpha = false;
    }

    return a;
}

double Random::nextDouble(){
    double d = (double)rand();
    d /= MAX;
    return d;
}

int main(){
    int n;
    char a;
    double d;

    Random::seed();
    
    cout<<"from 1 to 100 randomized integer"<<endl;
    for(int i=0; i<10; i++){
        n = Random::nextInt(1, 100);
        cout<<n<<' ';
    }

    cout<<endl;

    cout<<"random alphabet 10"<<endl;
    for(int i=0; i<10; i++){
        a = Random::nextAlphabet();
        cout<<a<<' ';
    }

    cout<<endl;

    cout<<"random real number 10"<<endl;
    for(int i=0; i<10; i++){
        d = Random::nextDouble();
        cout<<d<<' ';
        if(i==4) cout<<endl;
    }
}