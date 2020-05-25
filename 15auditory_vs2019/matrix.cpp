#include"matrix.h"
matrix MultiplicationM(matrix One, matrix Two) {
	matrix Ans;
	if (One.NumCol != Two.NumStr) {
		Ans.NumCol = 0;
		Ans.NumStr = 0;
		Ans.Arr = NULL;
		return Ans;
	}
	Ans.NumStr = One.NumStr;
	Ans.NumCol = Two.NumCol;
	Ans.Arr = new int* [Ans.NumStr];
	for (int i = 0; i < Ans.NumStr; i++) {
		Ans.Arr[i] = new int[Ans.NumCol];
		for (int j = 0; j < Ans.NumCol; j++) {
			Ans.Arr[i][j] = 0;
		}
	}
	for (int i = 0; i < One.NumStr; i++) {
		for (int j = 0; j < Two.NumCol; j++) {
			for (int k = 0; k < Two.NumStr; k++) {
				Ans.Arr[i][j] += One.Arr[i][k] * Two.Arr[k][j];
			}
		}
	}
	return Ans;
}