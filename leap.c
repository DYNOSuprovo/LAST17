#include<stdio.h>
int main(){
int n;
printf("enter an array size:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter a non leap year:%d",i);
scanf("%d",&arr[i]);
printf("non leap year is:",arr[i]);
if(n%4==0){
printf("the next leap year is:%d",n);

}
}

