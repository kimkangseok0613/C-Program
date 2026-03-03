#pragma once

class Block
{
protected:
	float resistance;
	float hardness;
public:
	virtual void Describe() = 0; // 순수 가상 함수
	virtual ~Block();
};