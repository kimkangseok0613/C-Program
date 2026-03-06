#include "../Program/stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character>& reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Destroyed Character" << endl;
}