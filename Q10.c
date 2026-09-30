#include <stdio.h>

int main() {
    float accuracy, confidence;
    int dataset, role, flags;
    printf("Accuracy (0-100): ");
    scanf("%f", &accuracy);
    printf("Confidence (0-100): ");
    scanf("%f", &confidence);
    printf("Dataset size: ");
    scanf("%d", &dataset);
    printf("User role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);
    printf("Status flags (1=TRAINED, 2=VALIDATED, 4=APPROVED, 8=DEPRECATED): ");
    scanf("%d", &flags);

    float ratio = dataset / 1000.0f;
    if (ratio > 10) ratio = 10;

    float score = (accuracy * 0.5f) + (confidence * 0.3f) + (ratio * 2);
    printf("Model score: %.2f\n", score);

    if (flags & 8)
        printf("Rejected: model deprecated\n");
    else if (!(flags & 1))
        printf("Rejected: not trained\n");
    else if (!(flags & 2))
        printf("Rejected: not validated\n");
    else if (!(flags & 4))
        printf("Pending: awaiting approval\n");
    else if (accuracy < 70 || confidence < 60)
        printf("Rejected: performance too low\n");
    else if (dataset < 5000)
        printf("Rejected: dataset too small\n");
    else if (role == 1)
        printf("Denied: interns cannot deploy\n");
    else if (role == 2 && score < 80)
        printf("Denied: engineer needs higher score\n");
    else
        printf("Approved for deployment\n");

    printf("\nsizeof(accuracy)   = %zu bytes\n", sizeof(accuracy));
    printf("sizeof(confidence) = %zu bytes\n", sizeof(confidence));
    printf("sizeof(dataset)    = %zu bytes\n", sizeof(dataset));
    printf("sizeof(role)       = %zu bytes\n", sizeof(role));
    printf("sizeof(flags)      = %zu bytes\n", sizeof(flags));
    printf("sizeof(score)      = %zu bytes\n", sizeof(score));

    float avg = (accuracy + confidence) / 2;
    if (score > avg)
        printf("Model score is ABOVE the average of accuracy and confidence (%.2f)\n", avg);
    else
        printf("Model score is NOT above the average of accuracy and confidence (%.2f)\n", avg);
    return 0;
}