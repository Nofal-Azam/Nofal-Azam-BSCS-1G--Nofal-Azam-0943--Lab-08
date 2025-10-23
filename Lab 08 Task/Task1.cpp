# include<stdio.h>

int main(){
	int rows;
	printf("Enter Number: ");
	scanf("%d",&rows);
	printf("Multiplication Table (1-%d)\n",rows);
	printf("\n");
	for(int i = 1; i<=rows;i++){
		printf("%d:  ",i);
		for(int j = 1; j<=rows;j++){
			printf("%3d ",i*j);	
		}
		printf("\n");
		
	}
	return 0;
}