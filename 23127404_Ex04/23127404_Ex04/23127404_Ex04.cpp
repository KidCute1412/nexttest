#include "Function04.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr = new Node;
	readFromFile(fin, arr);
	insertEvenNumber(arr);
	printToFile(fout, arr);
	deallocateList(arr);
	return 0;
}