#include<stdio.h>
int main (){
	float a,b,ucln;
	printf (" nhap so thu 1 :");
	scanf("%f",&a);
	printf(" nhap so thu 2 : ");
	scanf ("%f",&b);
	if ( a==0 || b==0 ){
		printf(" uoc trung lon nhat là %.2f\n",a+b);
		} else {
		while (a!=b){
			if (a>b){
				a=a-b;
			}else {
			b=b-a;
			}
		ucln=a;
		
		}
		printf (" uoc chung lon nhat la %.2f\n",ucln);
		}
		return 0;
		}
		
				
