#include<stdio.h>


int main() {
    int sobian = 42; 
    int so;
    printf("nhap so bi an %d de ket thuc chuong trinh", sobian);

    // V�ng l?p y�u c?u ngu?i d�ng nh?p s?
    do {
        printf("Nh?p s?: ");
        scanf("%d", &so); 
    } while (so != sobian); 
   
    printf("B?n d� nh?p d�ng s? %d. Chuong tr�nh k?t th�c.\n", sobian);

    return 0;
}
	
