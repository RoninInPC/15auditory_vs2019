#include <iostream>
#include<random>
#ifndef H_MATRIX
#define H_MATRIX
class matrix {
public:
	int** Arr;
	int NumStr;
	int NumCol;
	void ScanM(){
		std::cin >> NumStr >> NumCol;
		Arr = new int*[NumStr];
		for (int i = 0; i < NumStr; i++) {
			Arr[i] = new int[NumCol];
			for (int j = 0; j < NumCol; j++) {
				std::cin >> Arr[i][j];
			}
		}
	}
	void PrintM() {
		for (int i = 0; i < NumStr; i++) {
			for (int j = 0; j < NumCol; j++) {
				std::cout << Arr[i][j] << " ";
			}
			std::cout << "\n";
		}
	}
	void operator*=(matrix Two) {
		matrix Ans;
		if (NumCol != Two.NumStr) {
			Ans.NumCol = 0;
			Ans.NumStr = 0;
			Ans.Arr = NULL;
		}
		else
		{
			Ans.NumStr = NumStr;
			Ans.NumCol = Two.NumCol;
			Ans.Arr = new int* [Ans.NumStr];
			for (int i = 0; i < Ans.NumStr; i++) {
				Ans.Arr[i] = new int[Ans.NumCol];
				for (int j = 0; j < Ans.NumCol; j++) {
					Ans.Arr[i][j] = 0;
				}
			}
			for (int i = 0; i < NumStr; i++) {
				for (int j = 0; j < Two.NumCol; j++) {
					for (int k = 0; k < Two.NumStr; k++) {
						Ans.Arr[i][j] += Arr[i][k] * Two.Arr[k][j];
					}
				}
			}
			Arr = Ans.Arr;
			NumStr = Ans.NumStr;
			NumCol = Ans.NumCol;
		}
	}
};
matrix operator*(matrix One, matrix Two);
#endif