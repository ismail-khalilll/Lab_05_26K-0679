#include <stdio.h>

int main() {
    int type, member;
    float hours, fee = 0;
    printf("Vehicle type (1=bike, 2=car, 3=truck): ");
    scanf("%d", &type);
    printf("Hours parked: ");
    scanf("%f", &hours);
    printf("Member (1=yes, 0=no): ");
    scanf("%d", &member);

    if (type < 1 || type > 3) {
        printf("Invalid vehicle\n");
    } else if (hours <= 0) {
        printf("Invalid duration\n");
    } else {
        if (type == 1) {
            fee = 20 * hours;
        } else if (type == 2) {
            if (hours <= 2) 
            fee = 50;
            else            
            fee = 50 + 30 * (hours - 2);
        } else {
            if (hours <= 3) 
            fee = 100;
            else            
            fee = 100 + 50 * (hours - 3);
        }
        if (member == 1 && fee > 200)
            fee = fee * 0.85f;
        printf("Final parking fee: %.2f\n", fee);
    }
    return 0;
}