#include <stdio.h>
int main(){
	int a[3][2],b[3][2];
	int i,j,s[3][2];
	for(int i=0;i<3;i++)
	{
	
		for(int j=0;j<2;j++)
		{	
			
			printf("Element of %d a,b",i+1);
			//printf("%d ",a[i][j]);
			scanf("%d%d",&a[i][j],&b[i][j]);
			s[i][j]=a[i][j]+b[i][j];
		}}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",s[i][j]);
		
	}
	printf("\n");

}}
