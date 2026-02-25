#pragma once
#include "stat.h"

class Strength : public stat
{
public:
	virtual void Enhance() override;

	virtual ~Strength();
};
