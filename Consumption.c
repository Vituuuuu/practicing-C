#include <stdio.h>
 
int main() {
 
    int KM;
    float Fuel;
    
    scanf("%d\n%f", &KM, &Fuel);
    
    printf("%.3f km/l\n", KM / Fuel);
 
    return 0;
}