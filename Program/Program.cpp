#include "stdafx.h"
#include "Message.h"
#include "Stat.h"
#include "Strength.h"
#include "Dexterity.h"
#include "Intelligence.h"
#include <Windows.h>

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
	// Strength strength;
	// Dexterity dexterity;
	// Intelligence intelligence;
	// 
	// stat.Enhance();
	// strength.Enhance();
	// dexterity.Enhance();
	// intelligence.Enhance();

#pragma endregion

#pragma region 가상 함수
	// 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출하는 함수입니다.

	int input;
	int strength = 0, dexterity = 0, intelligence = 0;

	while (1)
	{
		cout << "1 - Strength" << endl << "2 - Dexterity" << endl << "3 - Intelligence"<<endl<<"0 - 종료" << endl << endl;
		cout << "Strength : " << strength << ", Dexterity : " << dexterity << ", Intelligence : " << intelligence << endl;

		cin >> input;

		if (input == 0)	break;

		if (input == 1)
		{
			strength++;
			Stat* pointer = nullptr;
			pointer = new Strength;
			system("cls");
			pointer->Enhance();
			cout << endl;
			delete pointer;
		}
		else if (input == 2)
		{
			dexterity++;
			Stat* pointer = nullptr;
			pointer = new Dexterity;
			system("cls");
			pointer->Enhance();
			cout << endl;
			delete pointer;
		}
		else if (input == 3)
		{
			intelligence++;
			Stat* pointer = nullptr;
			pointer = new Intelligence;
			system("cls");
			pointer->Enhance();
			cout << endl;
			delete pointer;
		}
		else
		{
			system("cls");
			cout << "1 ~ 3 click" << endl;
			cout << endl;
		}

	}
	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가
	// 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.

	// 가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는
	// 함수를 실행 시간에 결정하며, 정적으로 선언된 함수는
	// 가상 함수로 선언할 수 없습니다.

#pragma endregion
	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능합니다.

#pragma endregion

	return 0;
}