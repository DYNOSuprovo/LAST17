#include <stdio.h>
int main(){
	int a[5][2]={{0,0},{1,2},{2,4},{3,6},{5,9}};
	int i,j;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
