#include "Function08.h"

int main()
{
	Node* arr1 = new Node;
	Node* arr2 = new Node;
	std::ifstream fin;
	std::ofstream fout;
	readFromFile(fin, arr1, arr2);
	merge2List(arr1, arr2);
	printToFile(fout, arr1);
	deallocateList(arr1);
	return 0;
}