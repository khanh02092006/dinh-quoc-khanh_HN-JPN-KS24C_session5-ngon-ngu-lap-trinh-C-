#include<stdio.h>
int main() {
    int chon;
    float num1, num2;

    
    while (1) {
       
        printf("Nhap vào so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap vào so thu hai: ");
        scanf("%f", &num2);

       
        printf("\nCALCULATOR\n");
        printf("1. T?ng 2 s?\n");
        printf("2. Hi?u 2 s?\n");
        printf("3. Tích 2 s?\n");
        printf("4. Thuong 2 s?\n");
        printf("5. Thoát\n");
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
                printf("Tích cua %.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Không  chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoát chuong trình.\n");
                return 0; 
            default:
                printf("Lua chon không hop l?. Vui lòng choi lai.\n");
        }

        printf("\n"); 
    }

    return 0; 
}
