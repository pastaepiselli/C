#include <stdio.h>
int main(){
    // attenzione lo spazio i byte di questi dati puo cabiare dal tipo di pc utilizzato e dal tipo di compilatore!!

    short int piccolino = 23;
    printf("Short int bytes occupati: %zu, numero: %hd\n", sizeof(piccolino), piccolino); // 2 bytes

    unsigned int myUInt = 13;
    printf("Unsigned int bytes occupati: %zu, numero: %u\n", sizeof(myUInt), myUInt); // 2 o 4 bytes
    
    long int myLInt = 1231212123123;  
    printf("Long int bytes occupati: %zu, numero: %ld\n", sizeof(myLInt), myLInt); // 4 o 8 bytes

    long long int lunghissimo = 234238423482304829;
    printf("Long long int bytes occupati: %zu, numero: %lld\n", sizeof(lunghissimo), lunghissimo); // 8 bytes

    unsigned long int positivoLungo = 2378;
    printf("Unsigned long int bytes occupati: %zu, numero: %lu\n", sizeof(positivoLungo), positivoLungo); // 4 o 8 bytes

    unsigned long long int ilPiuLungo = 1371293123712837123;
    printf("Unsigned long long int bytes occupati: %zu, numero: %llu\n", sizeof(ilPiuLungo), ilPiuLungo); // 4 o 8 bytes
    
    long double veramenteLungo = 1331231231;
    printf("Long double bytes occupati: %zu, numero: %Lf\n", sizeof(veramenteLungo), veramenteLungo); // 4 o 8 bytes

    return 0;
}
