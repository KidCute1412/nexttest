#include "Function03.h"
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

void reverseList(Node*& arr)
{
	Node* cur = arr;
	if (!cur)
		return;
	Node* pre = NULL;
	while (cur)
	{
		Node* tmp = cur;
		cur = cur->next;
		tmp->next = pre;
		pre = tmp; 
	}
	arr = pre;

}
void deallocate(Node*& arr)
{
	while (arr)
	{
		Node* tmp = arr;
		arr = arr->next;
		delete tmp;
	}
}