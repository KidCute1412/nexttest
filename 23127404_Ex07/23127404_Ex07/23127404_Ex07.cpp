#include "Function07.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr = new Node;
	Node* arr1;
	Node* arr2;
	readFromFile(fin, arr);
	seperateList(arr, arr1, arr2);
	printToFile(fout, arr1, arr2);
	deallocateList(arr);
	return 0;
}