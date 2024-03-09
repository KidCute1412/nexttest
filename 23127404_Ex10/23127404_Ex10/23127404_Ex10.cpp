#include "Function10.h"

int main()
{
	std::ifstream fin;
	std::ofstream fout;
	Node* arr = new Node;
	readFromFile(fin, arr);
	fout.open("output.txt");
	fout << listToNumber(arr);
	fout.close();
	deallocateList(arr);
	return 0;
}