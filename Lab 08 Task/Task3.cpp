# include<stdio.h>

int main(){
	int matrix[3][3],matrix2[3][3],addmatrix[3][3];
	printf("Enter Numbers for Matrix 1.\n");
	for(int i =0; i<3;i++){
		for(int j = 0;j<3;j++){
			printf("Enter number: ");
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Enter Numbers for Matrix 2.\n");
	for(int i =0; i<3;i++){
		for(int j = 0;j<3;j++){
			printf("Enter number: ");
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(int i =0; i<3;i++){
		for(int j = 0;j<3;j++){
			addmatrix[i][j] = matrix[i][j] + matrix2[i][j];
		}
	}
	for(int i =0; i<3;i++){
		for(int j = 0;j<3;j++){
			printf("%3d ",addmatrix[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}