#include "stdafx.h"
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	// unordered_set<const char*> unordered_set;
	// 
	// unordered_set.max_load_factor(2.0f);
	// 
	// unordered_set.insert("Doran's Sword");
	// unordered_set.insert("Doran's Shield");
	// unordered_set.insert("Doran's Ring");
	// unordered_set.insert("Infinity Edge");
	// unordered_set.insert("Trinity Force");
	// unordered_set.insert("Phantom Dancer");
	// unordered_set.insert("Frozen Heart");
	// 
	// unordered_set.insert("Rod of Ages");
	// unordered_set.insert("Seraph's Embrace");
	// 
	// cout << "Load Factor" << unordered_set.load_factor() << endl;
	// cout << "Bukcet Count : " << unordered_set.bucket_count() << endl;
	// 
	// if (unordered_set.find("Doran's Shield") != unordered_set.end())
	// {
	// 	cout << "the data exist..." << endl;
	// }
	// else
	// {
	// 	cout << "the data ooes not exist" << endl;
	// }
	// 
	// unordered_set.erase("Frozen Heart");
	// 
	// for (const char* element : unordered_set)
	// {
	// 	cout << element << endl;
	// }

#pragma endregion

#pragma region unordered_map

	// unordered_map<string, int> unordered_map;
	// 
	// unordered_map["Potion"] = 5;
	// unordered_map["Elixir"] = 3;
	// unordered_map["Control_Ward"] = 2;
	// 
	// string name;
	// 
	// cin >> name;
	// 
	// if (unordered_map[name] > 0 && unordered_map.find(name) != unordered_map.end())
	// {
	// 	unordered_map[name]--;
	// 
	// 	cout << name << " use" << endl;
	// 
	// 	if (unordered_map[name] < -0)
	// 	{
	// 		unordered_map.erase(name);
	// 
	// 		cout <<  "All the " << name << " has been used" << endl;
	// 	}
	// }
	// else
	// {
	// 	cout << "Doesn't exist..." << endl;
	// }
	// 
	// for (const auto& element : unordered_map)
	// {
	// 	cout << "Name : " << element.first << " Quantity : " << element.second << endl;
	// }	

#pragma endregion

#pragma endregion

	return 0;
}