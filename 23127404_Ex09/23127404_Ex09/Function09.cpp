#include "Function09.h"
#include<fstream>
#include<iostream>
void readFromFile(std::ifstream& fin, Node*& arr1, Node*& arr2)
{

	fin.open("input.txt");
	if (!fin.is_open())
	{
		std::cout << "File is not existed !";
		return;
	}
	Node* cur = arr1;
	int x;
	fin >> x;
	if (!x)
		cur = NULL;
	else {
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
	}
	
	Node* cur2 = arr2;

	fin >> x;
	if (!x) {
		cur2 = NULL;
		return;
	}
	do {
		cur2->data = x;
		fin >> x;
		if (x)
		{
			cur2->next = new Node;
			cur2 = cur2->next;
		}
	} while (x);
	cur2->next = NULL;
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

void joint2List(Node*& arr1, Node* arr2)
{
	if (!arr1)
		arr1 = arr2;
	Node* cur = arr1;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = arr2;
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
