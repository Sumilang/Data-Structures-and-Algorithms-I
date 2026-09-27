#include <iostream>
#include "myfunctions.h"
using namespace std;

int main() {
   int inputNum1;
	int inputNum2;
	int average;

   cin >> inputNum1;
	cin >> inputNum2;

   average = AverageValue(inputNum1, inputNum2);
	Print(inputNum1, inputNum2, average);

   return 0;
}