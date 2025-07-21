#include <stdio.h>
#include <stdbool.h>

int main() {

    int choice = 0;
    float weight = 0.0f;
    float kilos = 0.0f;
    float pounds = 0.0f;

    printf("Welcome to the Weight Converter!\n");

    printf("Choose an option:\n");
    printf("1. Convert from pounds to kilos\n");
    printf("2. Convert from kilos to pounds\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Convert pounds to kilos

        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);

            kilos = pounds / 2.20462f;

        printf("%.2f pounds is equal to %.2f kilos.\n", pounds, kilos);

    } else if(choice == 2) {
        // Convert kilos to pounds

        printf("Enter weight in kilos: ");
        scanf("%f", &kilos);

            pounds = kilos * 2.20462f;

        printf("%.2f kilos is equal to %.2f pounds.\n", kilos, pounds);

    } else {
        // Invalid choice

        printf("Invalid choice. Please run the program again and select either 1 or 2.\n");
        return 1;
    }

    return 0;
}