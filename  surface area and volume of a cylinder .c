/*
Name: Nemuel Murithi 
Reg:CT100/G/26244/25
Description: Calculate the S.A and volume of a cylinder 
Date: 24th September 2025
*/

    
    #include <stdio.h>
#define PI 3.1416  // Define constant for π

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("The Volume of the cylinder is: %.2f\n", volume);
    printf("The Surface Area of the cylinder is: %.2f\n", surfaceArea);

    return 0;
}
    