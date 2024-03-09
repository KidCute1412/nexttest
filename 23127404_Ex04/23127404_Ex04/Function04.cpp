#include "Function04.h"
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
	if (!x)
		return;
	do {
		cur->data = x;
		fin >> x;
		if (x)
		{
			cur->next = new Node;
			cur = cur->next;
		}
	} while (x);
	cur->next = NULL;
	fin.close();

}
void printToFile(std::ofstream& fout, Node* arr)
{
	fout.open("output.txt");
	while (arr)
	{
		fout << arr->data << " ";
		arr = arr->next;
	}
	fout << 0;
	fout.close();
}

void insertEvenNumber(Node*& arr)
{
	if (!arr)
		return;
	Node* cur = arr;
	Node* pre = NULL;
	int data = 2;
	while (cur)
	{
		Node* newOne = new Node;
		newOne->data = data;
		newOne->next = cur;
		if (pre != NULL)
			pre->next = newOne;
		if (cur == arr)
			arr = newOne;
		data += 2;
		pre = cur;
		cur = cur->next;


	}
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
