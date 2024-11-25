#include<stdio.h>
int main (){
	int chon;
	float num1,num2,num3;
	while (1){
		
		printf("\nmenu\n");
		printf (" 1. nhap 3 so\n ");
		printf(" 2.tong 3 so\n ");
		printf (" 3. trung binh cong 3 so\n");
		printf("4. so nho nhat\n");
		printf(" 5.so lon nhat\n");
		printf(" 6 .thoat\n");
		printf(" lua chon cua ban la\n");
		scanf("%d",&chon);
		
		switch (chon){
			case 1 :
				printf(" nhap so thu 1\n");
				scanf("%f",&num1);
				printf(" nhap so thu 2\n");
				scanf(" %f",&num2);
				printf ("nhap so thu 3\n");
				scanf(" %f",&num3);
				printf (" 3 so vua nhap là : %f ,%f ,%f\n",num1,num2,num3);
				break;
				case 2:
					printf (" tong 3 so là %f\n",(num1+num2+num3));
					break;
					case 3:
						printf (" trung binh cong cua 3 so là %f", (num1+num2+num3)/3);
						break;
						case 4:
							{
								float min = num1;
								if(num2<min) min=num2;
								if(num3<min) min=num3;
								printf(" so nho nhat là %f\n",min);
								}
								break;
								case 5:
									{
										float max=num1;
										if(num2>max) max=num2;
										if(num3>max) max=num3;
										printf(" so lon nhat là %f",max);
										}
										break;
										case 6:
											printf(" thoat chuong trinh\n");
											default :
												printf (" lua chon khong hop le\n");
												
												
												}
												}
												
												printf("\n ");
												return 0;
												}
												
				
