#include <iostream>
#include <string>

class LinkedList
{
	std::vector <Node>linkedList[];
};

class Node
{
	int data;
	void* next;

public:
	Node(int iData, void* iNext)
	{
		data = iData;
		next = iNext;
	};

	int getData()
	{
		return data;
	};

	void* getNext()
	{
		return next;
	};
};

int main()
{

	Node node1(10, nullptr);
	Node node2(4, &node1);

	void* headptr {&node2};

	
	
	return 0;
}
