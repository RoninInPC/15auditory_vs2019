#include "timer.h"
#include "matrix.h"
int main() {
	Timer N;
	matrix One;
	One.ScanM();
	matrix Two;
	Two.ScanM();
	matrix Ans = MultiplicationM(One, Two);
	Ans.PrintM();
	return 0;
}