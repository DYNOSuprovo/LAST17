#include <stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n];
	int i,j,k,s[m][n];
	for(int i=0;i<m;i++)
	{
	
		for(int j=0;j<n;j++)
		{		
			printf("Element of %d a,b",i+1);
			//printf("%d ",a[i][j]);
			scanf("%d%d",&a[i][j],&b[i][j]);
			s[i][j]=a[i][j]+b[i][j];
		}}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
	}
	printf("\n");
}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
	}
	printf("\n");
}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			s[i][j]=0;
			for(k=0;k<n;k++)
				s[i][j]+=a[i][k]*b[k][j];
}}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",s[i][j]);
		
	}
	printf("\n");

}}
