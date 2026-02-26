#pragma once
#include "Block.h"

class Concrete : public Block
{
public:
	Concrete();
	virtual void Describe() override;
	~Concrete();
};