#pragma once
#include "Block.h"
class Stone : public Block
{
public:
	Stone();
	virtual void Describe() override;
	~Stone();
};