#ifndef OVAL_H
#define OVAL_H

class Oval{
    int width, height = 0;
public:
    Oval(int a, int b) : width(a), height(b) {}
    Oval() : width(1), height(1) {}
    ~Oval();
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();

};

#endif