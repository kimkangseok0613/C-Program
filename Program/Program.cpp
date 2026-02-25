#include "stdafx.h"
#include "Block.h"
#include "Concrete.h"
#include "Stone.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고,
	// 필요한 부분만 외부에서 사용할 수 있도록 단순화시키는 작업입니다.

	Stone stone;
	Concrete concrete;

	Block* pointer = nullptr;

	stone.Describe();
	pointer = new Stone;
	pointer->hardness = 1.5;
	pointer->resistance = 6;
	cout << "저항력 : " << pointer->hardness << "\n경도   : " << pointer->resistance << endl;
	delete pointer;

	concrete.Describe();
	pointer = new Concrete;
	pointer->hardness = 1.8;
	pointer->resistance = 1.8;
	cout << "저항력 : " << pointer->hardness << "\n경도   : " << pointer->resistance << endl;
	delete pointer;

#pragma endregion

	return 0;
}