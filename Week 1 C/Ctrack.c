#include <stdio.h>

// Function to calculate calories based on weight and activity level
float calculateCalories(float weight, int activityLevel) {
    float calories = 0.0;

    switch (activityLevel) {
        case 1:
            // Sedentary (little to no exercise)
            calories = weight * 13;
            break;
        case 2:
            // Lightly active (light exercise/sports 1-3 days a week)
            calories = weight * 15;
            break;
        case 3:
            // Moderately active (moderate exercise/sports 3-5 days a week)
            calories = weight * 18;
            break;
        case 4:
            // Very active (hard exercise/sports 6-7 days a week)
            calories = weight * 20;
            break;
        case 5:
            // Super active (very hard exercise/physical job or twice-a-day training)
            calories = weight * 23;
            break;
        default:
            printf("Invalid activity level! Please enter a value between 1 and 5.\n");
            return 0.0;
    }

    return calories;
}

int main() {
    float weight;
    int activityLevel;

    // Input weight and activity level
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Select your activity level (1-5):\n");
    printf("1. Sedentary\n");
    printf("2. Lightly active\n");
    printf("3. Moderately active\n");
    printf("4. Very active\n");
    printf("5. Super active\n");
    scanf("%d", &activityLevel);

    // Calculate and print the calories
    float calories = calculateCalories(weight, activityLevel);
    if (calories > 0.0) {
        printf("Based on your weight and activity level, you need approximately %.2f calories per day.\n", calories);
    }

    return 0;
}
