#include<stdio.h>
int main() {
    int chon;
    float num1, num2;

    
    while (1) {
       
        printf("Nhap v�o so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap v�o so thu hai: ");
        scanf("%f", &num2);

       
        printf("\nCALCULATOR\n");
        printf("1. T?ng 2 s?\n");
        printf("2. Hi?u 2 s?\n");
        printf("3. T�ch 2 s?\n");
        printf("4. Thuong 2 s?\n");
        printf("5. Tho�t\n");
        printf("Lua chon cua m: ");
        scanf("%d", &chon);

        
        switch (chon) {
            case 1:
                printf("Tong cua %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("T�ch cua %.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Kh�ng  chia cho 0.\n");
                }
                break;
            case 5:
                printf("Tho�t chuong tr�nh.\n");
                return 0; 
            default:
                printf("Lua chon kh�ng hop l?. Vui l�ng choi lai.\n");
        }

        printf("\n"); 
    }

    return 0; 
}
