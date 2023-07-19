#include <stdio.h>

int main() {
    int choice;
    float length, width, height, area, volume ;
    printf("1. Calculate Area\n");
    printf("2. Calculate Volume\n");
    // printf("Enter your choice");
    // scanf("%f", &area);1
    
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice); 

    if (choice == 1) {
          printf("please select rectangle Square triangle");
          printf("3. Calculate rectangle\n");
          printf("4. Calculate Square\n");
          scanf("%d", &choice);
        if(choice==3){
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter width of the rectangle: ");
        scanf("%f", &width);

        area = length * width;
        printf("Area of the rectangle: %f\n", area);
        }
        else if(choice==4){
             printf("Enter the side length of the square: ");
             scanf("%f", &length);
             area = length * length;
             printf("Area of the square: %.2f\n", area);
        }

        
    } else if (choice == 2) {
         printf("please select rectangle Square triangle");
         printf("3. Calculate rectangle\n");
         scanf("%d", &choice);
         if(choice==5){
            printf("Enter the length of the rectangular prism:2 ");
    scanf("%f", &length);

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    volume = length * width * height;

    printf("Volume of the rectangular prism: %.2f\n", volume);

         }
        printf("Enter side length of the cube: ");
        scanf("%f", &length);

        volume = length * length * length;
        printf("Volume of the cube: %.2f\n", volume);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
