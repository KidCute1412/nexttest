#include "Function10.h"
#include<fstream>
#include<iostream>
void readFromFile(std::ifstream& fin, Node*& arr)
{

	fin.open("input.txt");
	if (!fin.is_open())
	{
		std::cout << "File is not existed !";
		return;
	}
	Node* cur = arr;
	int x;
	fin >> x;
	if (x == -1)
		cur = NULL;
	else {
		do {
			cur->data = x;
			fin >> x;
			if (x != -1)
			{
				cur->next = new Node;
				cur = cur->next;
			}
		} while (x != -1);
		cur->next = NULL;
	}

	fin.close();

}




int listToNumber(Node* arr)
{
	int res = 0;
	while (arr)
	{
		res *= 10;
		res += arr->data;
		arr = arr->next;

	}
	return res;
}


void deallocateList(Node*& arr)
{
	while (arr)
	{
		Node* tmp = arr;
		arr = arr->next;
		delete tmp;
	}
}
