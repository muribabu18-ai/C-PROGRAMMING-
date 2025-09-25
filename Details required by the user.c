/*

  Name: Nemuel Murithi
  Reg No.: CT100/G/26244/25
  Description: User prompt to enter their height,weight and phone number.
 */

#include <stdio.h>

int main() {
    float height;
    float weight;
    long long phoneNumber;

    printf("Enter your height (in cm):");
    scanf("%f", &height);
    printf("Enter your phone number: ");
    scanf("%lld", &phoneNumber);
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    printf("\n--- User Information ---\n");
    printf("Height      : %.2f\n", height);
    printf("Phone Number: %lld\n", phoneNumber);
    printf("Weight      : %.2f\n", weight);

    return 0;
}