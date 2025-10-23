# include<stdio.h>

int main(){
	char plan[5][5];
	int empty=0,full=0,seated =0;
	for(int i = 0; i<5; i++){
		for(int j =0; j < 5;j++){
			if(i%2 == 0){
				if(j%2 == 0){
					plan[i][j] = 'x';
					full += 1;
				
				}
				else {
					plan[i][j] ='o';
					empty += 1;
				
				}
			}
			else{
				if(j%2 == 0){
					plan[i][j] = 'o';
					empty += 1;
				
				}
				else {
					plan[i][j] ='x';
					full += 1;
		
				}
				
			}
		}
	}
	printf("Classroom seating Chart: \n");
	printf("=======================\n");
	printf("(x = Student, o = Empty)\n");
	printf("\n");
	for(int i =0; i<5;i++){
		printf("Row %d ",i+1);
		for(int j = 0;j<5;j++){
			printf("%c ",plan[i][j]);
		}
		printf("\n");
	}
	printf("Summary:\n");
	printf("Students Seated: %d\n",full);
	printf("Empty desk: %d\n",empty);
	printf("Total Desks: %d\n", full+empty);
	return 0;
}