#include <stdio.h>

// Hàm tính di?n tích tam giác
float tinhDienTich(float a, float h) {
    return 0.5 * a * h; // Công th?c tính di?n tích tam giác
}

int main() {
    float a, h, S;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &a); 
    printf("Nhap do dai chieu cao cua tam giac: ");
    scanf("%f", &h);

    // G?i hàm tính di?n tích
    S = tinhDienTich(a, h); 

    printf("Dien tich tam giac la: %.2f\n", S); 
    return 0; 
}

