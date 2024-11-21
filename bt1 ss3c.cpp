#include <stdio.h>

int main() {
    char ten[50]; // Khai báo tên ngu?i dùng

    // Nh?p tên
    printf("Nguoi yeu ban ten la gi? ");
    fgets(ten, sizeof(ten), stdin); // Nh?p tên t? bàn phím

    // In l?i chào
    printf("Xin chao %s", ten);

    return 0; 
}
