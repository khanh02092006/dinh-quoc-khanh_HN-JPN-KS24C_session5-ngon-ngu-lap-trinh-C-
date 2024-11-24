#include<stdio.h>
int main (){
	int a;
	printf (" nhap so nguyen tu 1 den 10 ");
	scanf("%d",&a);
	if (a<1 || a>10 ){
		printf(" vui long lap lai nha");
		return 1;
	}
     printf("Bang cuu chuong cua %d:\n", a);
	
	for(int i=1 ;i<= 10;i++){
		printf(" %d x %d = %d\n",a,i, a*i);
		}
		return 0;
		}
