#include<stdio.h>
int main (){
	int n;
	int sum;
	printf(" nhap so nguyen n \n");
	scanf("%d",&n);
	if(n<=0){
		printf (" nhap sô nguyen khong hop le ");
		}
		for(int i =1;i<=n;i++){
			sum += i;
			}
			printf (" tong la %d\n",sum);
			 return 0;
			 }
