#include <stdio.h>

int main() {
    int stream, interest;
    printf("Stream (1=Science, 2=Commerce, 3=Arts): ");
    scanf("%d", &stream);

    if (stream == 1) {
        printf("Interest (1=Biology, 2=Physics, 3=Chemistry): ");
        scanf("%d", &interest);
        if (interest == 1) {
            int med;
            printf("Interested in medicine? (1/0): ");
            scanf("%d", &med);
            if (med == 1)      
            printf("Recommended course: MBBS\n");
            else if (med == 0) 
            printf("Recommended course: Biotechnology\n");
            else               
            printf("Invalid choice\n");
        } else if (interest == 2) {
            printf("Recommended course: BS Physics\n");
        } else if (interest == 3) {
            printf("Recommended course: BS Chemistry\n");
        } else {
            printf("Invalid choice\n");
        }
    } else if (stream == 2) {
        printf("Interest (1=Accounting, 2=Marketing): ");
        scanf("%d", &interest);
        if (interest == 1)      
        printf("Recommended course: BBA Accounting / ACCA\n");
        else if (interest == 2) 
        printf("Recommended course: BBA Marketing\n");
        else                    
        printf("Invalid choice\n");
    } else if (stream == 3) {
        printf("Interest (1=Literature, 2=History, 3=Psychology): ");
        scanf("%d", &interest);
        if (interest == 1)      
        printf("Recommended course: BA English Literature\n");
        else if (interest == 2) 
        printf("Recommended course: BA History\n");
        else if (interest == 3) 
        printf("Recommended course: BS Psychology\n");
        else                    
        printf("Invalid choice\n");
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}