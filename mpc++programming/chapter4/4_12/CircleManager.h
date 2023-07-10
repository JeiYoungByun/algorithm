#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H

#include "Circle.h"

class CircleManager {
    Circle *p;
    int size;
public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName();
    void searchByArea();
};



#endif