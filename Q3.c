#include <stdio.h>

int main() {
    int age, oxygen, hr;
    printf("Age: ");
    scanf("%d", &age);
    printf("Oxygen level (SpO2 %%): ");
    scanf("%d", &oxygen);
    printf("Heart rate (bpm): ");
    scanf("%d", &hr);

    if (oxygen < 90)
        printf("Critical: immediate attention\n");
    else if (hr > 130 || hr < 40)
        printf("Critical: cardiac alert\n");
    else if (age >= 65 && oxygen < 95)
        printf("High priority\n");
    else if (age <= 5 && hr > 110)
        printf("High priority\n");
    else if (oxygen < 97)
        printf("Medium priority\n");
    else
        printf("Low priority\n");
    return 0;
}