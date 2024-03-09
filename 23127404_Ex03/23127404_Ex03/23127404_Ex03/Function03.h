#pragma once
#include<fstream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr);
void printToFile(std::ofstream& fout, Node* arr);
void reverseList(Node*& arr);
void deallocate(Node*& arr);