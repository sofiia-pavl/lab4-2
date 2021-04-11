#include "Ball.h"
#include "Cube.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"

int main()
{
    cout << "Cube:" << endl;
    Cube A(3);
    A.Print();
    cout << "\nSurface area of cube is: " << A.SurfaceArea() << endl<<endl<<endl;

    cout << "Ball:" << endl;
    Ball B(4);
    B.Print();
    cout << "\nSurface area of ball is: " << B.SurfaceArea() << endl << endl << endl;

    cout << "Tetrahedron:" << endl;
    Tetrahedron C(3);
    C.Print();
    cout << "\nSurface area of tetrahedron is: " << C.SurfaceArea() << endl << endl << endl;

    cout << "Parallelepiped:" << endl;
    Parallelepiped D(2, 3, 4);
    D.Print();
    cout << "\nSurface area of tetrahedron is: " << D.SurfaceArea() << endl << endl << endl;

    Abstract* pa = new Cube();
    Abstract* pb = new Ball();
    Abstract* pc = new Tetrahedron();
    Abstract* pd = new Parallelepiped();

    cout << endl;
    cout << typeid(pa).name() << endl;
    cout << typeid(*pa).name() << endl;
    cout << typeid(pb).name() << endl;
    cout << typeid(*pb).name() << endl;
    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;
    cout << typeid(pd).name() << endl;
    cout << typeid(*pd).name() << endl;

    delete pd, delete pc, delete pb, delete pa;

    Abstract* N[4];

    N[0] = &A;
    N[1] = &B;
    N[2] = &C;
    N[3] = &D;

    cout << "\nSurface area of Cube is: " << N[0]->SurfaceArea() << endl;
    cout << "\nSurface area of Ball is: " << N[1]->SurfaceArea() << endl;
    cout << "\nSurface area of Tetrahedron is: " << N[2]->SurfaceArea() << endl;
    cout << "\nSurface area of Parallelepiped is: " << N[3]->SurfaceArea() << endl;

    return 0;

}