#include "Buffer.h"

Buffer& append(Buffer& buf, string s){
    buf.add(s);
    return buf;
}

int main(){
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys");
    temp.print();
    buf.print();
}