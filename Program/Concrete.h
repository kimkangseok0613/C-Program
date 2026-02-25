#pragma once
#include "Block.h"

class Concrete : public Block
{
public:
	float resistance;
	float hardness;
	virtual void Describe() override;
};