//WAP to input two numbers and print all prime numbers in range

#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i,j;
	printf("Enter the range ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("%d \n",j);
	}
}
