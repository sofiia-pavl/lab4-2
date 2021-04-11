#pragma once
#include "Abstract.h"
class Parallelepiped :
    public Abstract
{
private:
    int a, b, c;
public:
    void SetA(int);
    void SetB(int);
    void SetC(int);

    int GetA() const;
    int GetB() const;
    int GetC() const;

    Parallelepiped();
    Parallelepiped(int, int, int);
    Parallelepiped(Parallelepiped&);

    virtual void Print();
    virtual double SurfaceArea();
};

