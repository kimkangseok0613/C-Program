#include "stdafx.h"
#include "Message.h"
#include "Stat.h"
#include "Strength.h"
#include "Dexterity.h"
#include "Intelligence.h"

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

#pragma region 오버로딩
	// 같은 이름의 함수를 매개변수의 자료형과 매개변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	// Message message;
	// 
	// message.Send(144);
	// message.Send("This program cannot be executed...");
	// message.Send("Identify the issue frequency signal, ", 60);

	// 함수의 오버로딩의 경우 함수의 매개변수에 전달하는 인수의 형태를
	// 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.

#pragma endregion

#pragma region 오버라이딩
	// 상위 클래스의 함수를 하위 클래스에서 재정의하여 사용하는 방법입니다.

	// Stat stat;
	// Strength Str;
	// Dexterity Dex;
	// Intelligence Int;
	// 
	// stat.Enhance();
	// Str.Enhance();
	// Dex.Enhance();
	// Int.Enhance();

	Stat* stat = new Stat;
	Strength* Str = new Strength;
	Dexterity* Dex = new Dexterity;
	Intelligence* Int = new Intelligence;

	stat->Enhance();
	delete stat;
	Str->Enhance();
	delete Str;
	Dex->Enhance();
	delete Dex;
	Int->Enhance();
	delete Int;

#pragma endregion

#pragma region 가상 함수

#pragma endregion
	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능합니다.

#pragma endregion

	return 0;
}