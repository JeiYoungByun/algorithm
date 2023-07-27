#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Trace{
    static vector<pair<string,string>> mypair;
    static pair<string,string> p;
public:
    static void put(string key, string info);
    static void print();
    static void print(string key);
};

vector<pair<string, string>> Trace::mypair;
pair<string, string> Trace::p;

void Trace::put(string key, string info){
    p = make_pair(key, info);
    mypair.push_back(p);
}

void Trace::print(){
    cout<<"print all trace information"<<endl;
    for(int i=0; i<mypair.size(); i++){
        cout<<mypair[i].first<<" : "<<mypair[i].second<<endl;
    }
}

void Trace::print(string key){
    cout<<"print trace information of f() tag"<<endl;
    for(int i=0; i<mypair.size(); i++){
        if(mypair[i].first == "f()") cout<<mypair[i].first<<" : "<<mypair[i].second<<endl;
    }
}

void f(){
    int a, b, c;
    cout<<"enter two integers: ";
    cin>>a>>b;
    Trace::put("f()", "get inputed integers");
    c = a + b;
    Trace::put("f()", "calculate sum");
    cout<<"sum is "<<c<<endl;
}

int main(){
    Trace::put("main()", "start program");
    f();
    Trace::put("main()", "terminate");
    
    Trace::print("f()");
    Trace::print();
}