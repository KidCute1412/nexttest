#pragma once
#include<fstream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr);
void printToFile(std::ofstream& fout, Node* arr);
void insertInSortedList(Node*& arr);
void deallocateList(Node*& arr);

