#include "Function06.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr1 = new Node;
	Node* arr2 = new Node;
	readFromFile(fin, arr1);
	listofSum(arr1, arr2);
	printToFile(fout, arr2);
	deallocateList(arr1);
	deallocateList(arr2);
	return 0;
}