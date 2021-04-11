#include "Tetrahedron.h"

void Tetrahedron::SetA(int a)
{
	this->a=a;
}

int Tetrahedron::GetA() const
{
	return a;
}

Tetrahedron::Tetrahedron()
	:a(0)
{}

Tetrahedron::Tetrahedron(int a = 0)
	:a(a)
{}

Tetrahedron::Tetrahedron(Tetrahedron& q)
	: Tetrahedron(q.GetA())
{}

void Tetrahedron::Print()
{
	cout << "The value of 'a' is equal to: " << GetA() << endl;
}

double Tetrahedron::SurfaceArea()
{
	return  sqrt(3) * (GetA() * GetA());
}