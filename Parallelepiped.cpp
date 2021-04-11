#include "Parallelepiped.h"

void Parallelepiped::SetA(int a)
{
	this->a=a;
}

void Parallelepiped::SetB(int b)
{
	this->b = b;
}

void Parallelepiped::SetC(int c)
{
	this->c = c;
}

int Parallelepiped::GetA() const
{
	return a;
}

int Parallelepiped::GetB() const
{
	return b;
}

int Parallelepiped::GetC() const
{
	return c;
}

Parallelepiped::Parallelepiped()
	:a(0),b(0), c(0)
{}

Parallelepiped::Parallelepiped(int a = 0, int b = 0, int c = 0)
	: a(0),b(b), c(c)
{}

Parallelepiped::Parallelepiped(Parallelepiped& q)
	: Parallelepiped(q.GetA(), q.GetB(), q.GetC())
{}

void Parallelepiped::Print()
{
	cout << "     __________________ " << endl;
	cout << "    /|                /|  " << endl;
	cout << "   /_|_______________/ |  " << endl;
	cout << "   | |               | |  " << endl;
	cout << "  a| |               | |  " << endl;
	cout << "   | |_______________|_|  " << endl;
	cout << "   |/                |/c  " << endl;
	cout << "   /_________b_______/  " << endl << endl;
	cout << "The value of 'a' is equal to: " << GetA() << endl;
	cout << "The value of 'b' is equal to: " << GetB() << endl;
	cout << "The value of 'c' is equal to: " << GetC() << endl;
}

double Parallelepiped::SurfaceArea()
{
	return 2 * (GetA() * GetB() + GetC() * GetB() + GetA() * GetC());
}