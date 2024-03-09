#pragma once
#include<fstream>
#include<iostream>
struct Node {
	int data;
	Node* next;
};
void readFromFile(std::ifstream& fin, Node*& arr);
int listToNumber(Node* arr);
void deallocateList(Node*& arr);
