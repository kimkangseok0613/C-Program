#include "stdafx.h"
#include "Concrete.h"

Concrete::Concrete()
{
	hardness = 1.8f;
	resistance = 1.8f;
}

void Concrete::Describe()
{
	cout << "Concrete Hardness : "<< hardness << endl;
	cout << "Concrete Resistance : "<< resistance << endl;
}

Concrete::~Concrete()
{
	cout << "Destroyed Concrete" << endl;
}