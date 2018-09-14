#include <iostream>
#include "toobject1.h"
using std::cin;
using std::cout;
using std::endl;
using toobject1::commodity;
void main()
{
	
	commodity com_test;
	com_test.Init(50, 1000, "umbrella");
	if (com_test.Buy(360))
		cout << "done." << endl;

	system("PAUSE");
}
