#include "Function06.h"
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


void listofSum(Node* arr1, Node*& arr2)
{
	Node* cur = arr2;
	int sum = 0;
	Node* pre = arr2;
	if (!arr1)
	{
		arr2 = NULL;
		return;
	}
	while (arr1)
	{
		sum += arr1->data;
		cur->data = sum;
		arr1 = arr1->next;
		cur->next = new Node;
		pre = cur;
		cur = cur->next;
		
	}
	pre->next = NULL;
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
