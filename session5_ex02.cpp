#include<stdio.h>


int main() {
    int sobian = 42; 
    int so;
    printf("nhap so bi an %d de ket thuc chuong trinh", sobian);

    // Vòng l?p yêu c?u ngu?i dùng nh?p s?
    do {
        printf("Nh?p s?: ");
        scanf("%d", &so); 
    } while (so != sobian); 
   
    printf("B?n dã nh?p dúng s? %d. Chuong trình k?t thúc.\n", sobian);

    return 0;
}
	
