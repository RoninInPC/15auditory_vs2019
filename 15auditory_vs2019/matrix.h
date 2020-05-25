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
};
matrix operator*(matrix One, matrix Two);
#endif