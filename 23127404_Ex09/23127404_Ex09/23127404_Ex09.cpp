#include "Function09.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr1 = new Node;
	Node* arr2 = new Node;
	readFromFile(fin, arr1, arr2);
	joint2List(arr1, arr2);
	printToFile(fout, arr1);
	deallocateList(arr1);
	return 0;
}