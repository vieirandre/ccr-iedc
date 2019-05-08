/*
 * To write a program that does conversions between different units.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { false, true } bool;

void weight_conversions(char weightChoice) {
    float value, result;
    char *inputUnit = malloc(4), *outputUnit = malloc(4);

    switch (weightChoice) {
        case 1:
            strcpy(inputUnit, "lb");
            strcpy(outputUnit, "kg");
            break;
        case 2:
            strcpy(inputUnit, "kg");
            strcpy(outputUnit, "lb");
            break;
        case 3:
            strcpy(inputUnit, "oz");
            strcpy(outputUnit, "g");
            break;
        case 4:
            strcpy(inputUnit, "g");
            strcpy(outputUnit, "oz");
            break;
        default:
            break;
    }

    printf("Insert %s: ", inputUnit);
    scanf("%f", &value); getchar();

    switch (weightChoice) {
        case 1:
            result = value / 2.2046;
            break;
        case 2:
            result = value * 2.2046;
            break;
        case 3:
            result = value / 0.035274;
            break;
        case 4:
            result = value * 0.035274;
            break;
        default:
            break;
    }

    printf("Result: %.2f %s\n", result, outputUnit);
    getchar();

    free(inputUnit);
    free(outputUnit);
}

void weight_menu(void) {
    char weightChoice;
    bool shouldGoBack;

    do {
        printf("1. lb -> kg\n2. kg -> lb\n");
        printf("3. oz -> g\n4. g -> oz\n");
        printf("5. Go back\n");
        scanf("%d", &weightChoice);

        switch (weightChoice) {
            case 1:
            case 2:
            case 3:
            case 4:
                weight_conversions(weightChoice);
                break;
            case 5:
                shouldGoBack = true;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (shouldGoBack == false);
}

void volume_conversions(char volumeChoice) {
    float value, result;
    char *inputUnit = malloc(4), *outputUnit = malloc(4);

    switch (volumeChoice) {
        case 1:
            strcpy(inputUnit, "gal");
            strcpy(outputUnit, "l");
            break;
        case 2:
            strcpy(inputUnit, "l");
            strcpy(outputUnit, "gal");
            break;
        case 3:
            strcpy(inputUnit, "oz");
            strcpy(outputUnit, "ml");
            break;
        case 4:
            strcpy(inputUnit, "ml");
            strcpy(outputUnit, "oz");
            break;
        default:
            break;
    }

    printf("Insert %s: ", inputUnit);
    scanf("%f", &value); getchar();

    switch (volumeChoice) {
        case 1:
            result = value / 0.26417;
            break;
        case 2:
            result = value * 0.26417;
            break;
        case 3:
            result = value / 0.033814;
            break;
        case 4:
            result = value * 0.033814;
            break;
        default:
            break;
    }

    printf("Result: %.2f %s\n", result, outputUnit);
    getchar();

    free(inputUnit);
    free(outputUnit);
}

void volume_menu(void) {
    char volumeChoice;
    bool shouldGoBack;

    do {
        printf("1. gal -> l\n2. l -> gal\n");
        printf("3. oz -> ml\n4. ml -> oz\n");
        printf("5. Go back\n");
        scanf("%d", &volumeChoice);

        switch (volumeChoice) {
            case 1:
            case 2:
            case 3:
            case 4:
                volume_conversions(volumeChoice);
                break;
            case 5:
                shouldGoBack = true;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (shouldGoBack == false);
}

void length_conversions(char lengthChoice) {
    float value, result;
    char *inputUnit = malloc(4), *outputUnit = malloc(4);

    switch (lengthChoice) {
        case 1:
            strcpy(inputUnit, "mi");
            strcpy(outputUnit, "km");
            break;
        case 2:
            strcpy(inputUnit, "km");
            strcpy(outputUnit, "mi");
            break;
        case 3:
            strcpy(inputUnit, "yd");
            strcpy(outputUnit, "m");
            break;
        case 4:
            strcpy(inputUnit, "m");
            strcpy(outputUnit, "yd");
            break;
        default:
            break;
    }

    printf("Insert %s: ", inputUnit);
    scanf("%f", &value); getchar();

    switch (lengthChoice) {
        case 1:
            result = value / 0.62137;
            break;
        case 2:
            result = value * 0.62137;
            break;
        case 3:
            result = value / 1.0936;
            break;
        case 4:
            result = value * 1.0936;
            break;
        default:
            break;
    }

    printf("Result: %.2f %s\n", result, outputUnit);
    getchar();

    free(inputUnit);
    free(outputUnit);
}

void length_menu(void) {
    char lengthChoice;
    bool shouldGoBack;

    do {
        printf("1. mi -> km\n2. km -> mi\n");
        printf("3. yd -> m\n4. m -> yd\n");
        printf("5. Go back\n");
        scanf("%d", &lengthChoice);

        switch (lengthChoice) {
            case 1:
            case 2:
            case 3:
            case 4:
                length_conversions(lengthChoice);
                break;
            case 5:
                shouldGoBack = true;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (shouldGoBack == false);
}

int main(void) {
    char menuChoice;

    do {
        printf("1. Weight\n2. Volume\n3. Length\n4. Exit\n");
        scanf("%d", &menuChoice); getchar();

        switch (menuChoice) {
            case 1:
                weight_menu();
                break;
            case 2:
                volume_menu();
                break;
            case 3:
                length_menu();
                break;
            case 4:
                exit(0);
                break;            
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (1 == 1);
    
    getchar();
    return 0;
}