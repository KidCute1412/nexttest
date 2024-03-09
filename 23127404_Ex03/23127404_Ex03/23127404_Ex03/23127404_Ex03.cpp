#include "Function03.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr = new Node;
	readFromFile(fin, arr);
	reverseList(arr);
	printToFile(fout, arr);
	deallocate(arr);
	return 0;
}