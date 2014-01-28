#include <stdio.h>

float convert_f_to_c(int); 

int main() {
    int fahr; 

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f \n", fahr, convert_f_to_c(fahr));
    
    return 0;
}

float convert_f_to_c(int f) {
    return (5.0/9.0)*(f-32); 
}