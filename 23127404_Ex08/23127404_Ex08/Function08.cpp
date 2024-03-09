#include "Function08.h"
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
	if (!x) {
		arr1 = NULL;
	}
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
		arr2 = NULL;
		return;
	}
	else {
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
	}


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




void merge2List(Node*& arr1, Node* arr2)
{

	if (!arr1) {
		arr1 = arr2;
		return;
	}
	Node* cur1 = arr1;
	Node* cur2 = arr2; 
	while (cur1->next && cur2)
	{
		Node* tmp = cur1->next;
		cur1->next = cur2;
		cur2 = tmp;
		cur1 = cur1->next;
	}
	if (cur1->next == NULL)
	{
		cur1->next = cur2;
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
