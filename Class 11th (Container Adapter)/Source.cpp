#include "../Program/stdafx.h"
#include <stack>
#include <queue>

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 
	// 기능이 제한되거나 변경된 컨테이너입니다.

#pragma region stack container

	// stack<int> stack;
	// 
	// stack.push(10);
	// stack.push(20);
	// stack.push(30);
	// stack.push(40);
	// stack.push(50);
	// 
	// while (stack.empty() == false) //for (int i = 0; i < 5; i++)
	// {
	// 	cout << stack.top() << endl;
	// 
	// 	stack.pop();
	// }

#pragma endregion

#pragma region queue container

	// queue<int> queue;
	// 
	// queue.push(10);
	// queue.push(20);
	// queue.push(30);
	// queue.push(40);
	// queue.push(50);
	// 
	// const int& size = queue.size(); // int a= queue.size();
	// 
	// for (int i = 0; i < size; i++) // for (int i = 0; i < a; i++)
	// {
	// 	cout << queue.front() << endl;
	// 
	// 	queue.pop();
	// }

#pragma endregion

#pragma region priority_queue
	// 두 자식의 노드 중에서 값이 더 큰 쪽으로 교환합니다.
	// 가장 아래에 자식 노드 중에서 가장 오른쪽에 
	// 있는 노드를 최상위로 넣어줍니다.

	// priority_queue<int> priority_queue;
	// 
	// priority_queue.push(30);
	// priority_queue.push(50);
	// priority_queue.push(40);
	// priority_queue.push(10);
	// priority_queue.push(60);
	// priority_queue.push(20);
	// 
	// while (priority_queue.empty() == false)		// const int& size = priority_queue.size();
	// {											// 
	// 	cout << priority_queue.top() << endl;	// for (int i = 0; i < size; i++)
	// 											// {
	// 	priority_queue.pop();					// 	cout << priority_queue.top() << endl;
	// }											// 	priority_queue.pop();
												// }

#pragma endregion

#pragma endregion

	return 0;
}