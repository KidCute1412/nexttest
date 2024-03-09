#include "Function05.h"
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


void insertInSortedList(Node*& arr)
{
	int n;
	std::cout << "Input n: ";
	std::cin >> n;
	Node* cur = arr;
	Node* NodeX = new Node;
	NodeX->data = n;
	Node* pre = NULL;
	while (cur)
	{
		if (n <= cur->data && !pre)
		{
			NodeX->next = arr;
			arr = NodeX;
			return;
		}
		else if (pre && pre->data < n && cur->data >= n)
		{
			NodeX->next = cur;
			pre->next = NodeX;
			return;
		}
		else if (cur->next == NULL && cur->data <= n)
		{
			NodeX->next = cur->next;
			cur->next = NodeX;
			return;
		}
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
