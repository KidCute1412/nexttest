#pragma once
#include<fstream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr);
void printToFile(std::ofstream& fout, Node* arr1, Node* arr2);
void seperateList(Node*& arr, Node*& arrODD, Node*& arrEVEN);
void deallocateList(Node*& arr);

