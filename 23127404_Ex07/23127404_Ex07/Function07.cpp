#include "Function07.h"
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
void printToFile(std::ofstream& fout, Node* arr1, Node* arr2)
{
	fout.open("output.txt");
	while (arr1)
	{
		fout << arr1->data << " ";
		arr1 = arr1->next;
	}
	fout << 0;
	fout << "\n";
	while (arr2)
	{
		fout << arr2->data << " ";
		arr2 = arr2->next;
	}
	fout << 0;
	fout.close();

}


void seperateList(Node*& arr, Node*& arrODD, Node*& arrEVEN)
{
	Node* cur = arr;
	arrODD = NULL;
	arrEVEN = NULL;
	if (cur) {
		arrODD = cur;
		cur = cur->next;
	}

	if (cur) {
		arrEVEN = cur;
		cur = cur->next;
	}
	Node* cur1 = arrODD;
	Node* cur2 = arrEVEN;
	int i = 3;
	while (cur)
	{
		if (i % 2 != 0)
		{
			cur1->next = cur;
			cur1 = cur1->next;
		}
		else {
			cur2->next = cur;
			cur2 = cur2->next;
		}
		i++;
		cur = cur->next;

	}
	if (cur1)
		cur1->next = NULL;
	if (cur2)
		cur2->next = NULL;



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
