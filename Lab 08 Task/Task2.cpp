# include<stdio.h>

int main(){
	int matrix[3][3]={{12,34,56},{72,4,6},{90,67,12}};
	int max = 0;
	int row,col;
	for(int i =0; i<3;i++){
		for(int j = 0;j<3;j++){
			if (matrix[i][j] > max){
				max = matrix[i][j];
				row = i+1;
				col = j+1;
			}
		}
	}
	printf("the highest element %d is in row %d and column %d",max,row,col);
	return 0;
}