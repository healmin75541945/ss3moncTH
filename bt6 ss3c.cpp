#include <stdio.h>

// H�m t�nh di?n t�ch tam gi�c
float tinhDienTich(float a, float h) {
    return 0.5 * a * h; // C�ng th?c t�nh di?n t�ch tam gi�c
}

int main() {
    float a, h, S;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &a); 
    printf("Nhap do dai chieu cao cua tam giac: ");
    scanf("%f", &h);

    // G?i h�m t�nh di?n t�ch
    S = tinhDienTich(a, h); 

    printf("Dien tich tam giac la: %.2f\n", S); 
    return 0; 
}

