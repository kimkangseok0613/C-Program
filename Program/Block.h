#pragma once

class Block
{
public:
	float resistance;
	float hardness;
	virtual void Describe() = 0; // 순수 가상 함수
};