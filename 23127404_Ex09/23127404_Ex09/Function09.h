#pragma once
#include<fstream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr1, Node*& arr2);
void printToFile(std::ofstream& fout, Node* arr);
void joint2List(Node*& arr1, Node* arr2);
void deallocateList(Node*& arr);
