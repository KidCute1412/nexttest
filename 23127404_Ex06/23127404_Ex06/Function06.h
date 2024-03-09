#pragma once
#include<fstream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr);
void printToFile(std::ofstream& fout, Node* arr);
void listofSum(Node* arr1, Node*& arr2);
void deallocateList(Node*& arr);

