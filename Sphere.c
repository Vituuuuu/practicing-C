#include <stdio.h>
 
int main() {
 
    double R;
    const double PI = 3.14159;
    
    scanf("%lf", &R);
    
    R = R * R * R;
    printf("VOLUME = %.3lf\n", (4.0/3) * PI * R);
 
    return 0;
}
