#include <stdio.h>

int main() {
    int cat, sub;
    printf("Category (1=Greeting, 2=Query, 3=Complaint, 4=Feedback): ");
    scanf("%d", &cat);

    if (cat < 1 || cat > 4) {
        printf("Invalid selection\n");
        return 0;
    }

    if (cat == 1) {
        printf("Sub-type (1=Morning, 2=Evening): ");
        scanf("%d", &sub);
        if (sub == 1)      
        printf("Bot: Good morning! How can I help you today?\n");
        else if (sub == 2) 
        printf("Bot: Good evening! How can I help you?\n");
        else               
        printf("Invalid selection\n");
    } else if (cat == 2) {
        printf("Sub-type (1=Product, 2=Billing, 3=Technical): ");
        scanf("%d", &sub);
        if (sub == 1)      
        printf("Bot: Here is the information about our products.\n");
        else if (sub == 2) 
        printf("Bot: Connecting you to the billing department.\n");
        else if (sub == 3) 
        printf("Bot: Our technical team will assist you shortly.\n");
        else               
        printf("Invalid selection\n");
    } else if (cat == 3) {
        printf("Sub-type (1=Delivery, 2=Quality): ");
        scanf("%d", &sub);
        if (sub == 1) {
            int delayed;
            printf("Is the order delayed? (1/0): ");
            scanf("%d", &delayed);
            if (delayed == 1)
                printf("Bot: We sincerely apologize for the delay. We are expediting your order.\n");
            else
                printf("Bot: Sorry for the delivery issue. Please share your order details so we can look into it.\n");
        } else if (sub == 2) {
            printf("Bot: We apologize for the quality issue. We will arrange a replacement or refund.\n");
        } else {
            printf("Invalid selection\n");
        }
    } else {
        printf("Sub-type (1=Positive, 2=Negative): ");
        scanf("%d", &sub);
        if (sub == 1)      
        printf("Bot: Thank you for your kind feedback!\n");
        else if (sub == 2) 
        printf("Bot: Thank you for telling us. We will work to improve.\n");
        else               
        printf("Invalid selection\n");
    }
    return 0;
}