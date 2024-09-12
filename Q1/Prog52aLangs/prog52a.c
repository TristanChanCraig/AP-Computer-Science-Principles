#include <stdio.h>

int main()
{
    int width, length, area, perim;
    printf("Enter Length: ");
    scanf("%d", &length);
    
    printf("Enter Width: ");
    scanf("%d", &width);
    
    area = length * width;
    perim = length * 2 + width * 2;

    printf("\nThe area is %d\n", area);
    printf("The perimeter is %d", perim);
}
/*
Enter Length: 143
Enter Width: 82

The area is 11726
The perimeter is 450
*/