#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int r) {this->radius = r;}
    Circle() {radius = 1;}
    int showRadius() {return radius;}
};

void swap(Circle& a, Circle& b){
    Circle temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    Circle a(3);
    Circle b(1);

    cout<<a.showRadius()<<endl;
    cout<<b.showRadius()<<endl;

    cout<<'\n';

    swap(a, b);

    cout<<a.showRadius()<<endl;
    cout<<b.showRadius()<<endl;

}