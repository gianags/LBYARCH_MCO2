#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

extern float imgCvtGrayInttoFloat(int a);

int main() {
	int rows = 10;
	int cols = 10;

	int pix[10][10] = {{84, 64, 89, 114, 140, 110, 154, 189, 129, 45},
						{83, 161, 69, 102, 233, 94, 221, 224, 64, 231},
						{243, 83, 28, 208, 194, 25, 153, 217, 255, 20},
						{88, 24 ,238, 227, 62, 164, 80, 212, 51, 182},
						{104, 74, 64, 69, 180, 243, 97, 157, 6, 135},
						{108, 29, 138, 226, 9, 35, 79, 138, 203, 59},
						{159, 20, 41, 64, 170, 237, 100, 69, 62, 167},
						{73, 242, 75, 165, 209, 231, 75, 188, 181, 84},
						{179, 154, 178, 233, 87, 226, 69, 128, 119, 88},
						{97, 35, 126, 77, 9, 162, 54, 88, 152, 12}};
						
	//scanf("%d", &rows);
	//scanf("%d", &cols);
	//int pix[rows][cols];
	
	/**for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int temp = 0;
			scanf("%d", &temp);
			pix[i][j] = temp;
		}
	}**/
	
	//c convert
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			float temp = (float) pix[i][j] / 255;
			printf("%.2f ", temp);
		}
		printf("\n");
	}
	
	int intTemp = 0;
	float floatTemp = 0;
	
	//x64 convert
	/**for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			intTemp = pix[i][j];
			floatTemp = imgCvtGrayInttoFloat(intTemp);
			printf("%.2f ", floatTemp);
		}
		printf("\n");
	}**/

	return 0;
}