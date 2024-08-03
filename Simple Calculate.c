#include <stdio.h>
 
int main() {
 
    int ID, Units;
    float UnitValue, TotalValue;
    
    scanf("%d\n%d\n%f", &ID, &Units, &UnitValue);
    
    TotalValue = Units * UnitValue;
    
    scanf("%d\n%d\n%f", &ID, &Units, &UnitValue);
    
    TotalValue = TotalValue + Units * UnitValue;
    
    printf("VALOR A PAGAR: R$ %.2f\n", TotalValue);
 
    return 0;
}
