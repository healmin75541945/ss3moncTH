#include <stdio.h>

int main() {
    char ten[50]; // Khai b�o t�n ngu?i d�ng

    // Nh?p t�n
    printf("Nguoi yeu ban ten la gi? ");
    fgets(ten, sizeof(ten), stdin); // Nh?p t�n t? b�n ph�m

    // In l?i ch�o
    printf("Xin chao %s", ten);

    return 0; 
}
