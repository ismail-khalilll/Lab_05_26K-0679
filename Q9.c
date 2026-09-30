#include <stdio.h>

int main() {
    int p;
    printf("Enter permissions: ");
    scanf("%d", &p);

    printf("Detected bits:");
    if (p & 1)  printf(" READ");
    if (p & 2)  printf(" WRITE");
    if (p & 4)  printf(" EXECUTE");
    if (p & 8)  printf(" DELETE");
    if (p & 16) printf(" ADMIN");
    if (!(p & 31)) printf(" NONE");
    printf("\n");

    if (p & 16)
        printf("Full access: admin\n");
    else if ((p & 8) && (p & 2))
        printf("Access: delete and write\n");
    else if ((p & 4) && !(p & 2))
        printf("Access: execute only\n");
    else if ((p & 1) && !(p & 2) && !(p & 4))
        printf("Access: read-only\n");
    else if ((p & 31) == 0)
        printf("Access denied\n");
    else
        printf("Access: custom permissions\n");
    return 0;
}