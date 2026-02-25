#pragma once
#include "Block.h"
class Stone : public Block
{
public:
	float resistance;
	float hardness;
	virtual void Describe() override;
};