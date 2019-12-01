#include<stdio.h>

void main(){
	void switchArray(int [3][3]);
	int array[3][3];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&array[i][j]);
	switchArray(array);
}

void switchArray(int array[][3]){
    int newArray[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            newArray[j][i] = array[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",newArray[i][j] );
        }
    printf("\n");
    }

}
