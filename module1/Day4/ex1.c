#include<stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    double length = boxPtr->length;
    double width = boxPtr->width;
    double height = boxPtr->height;

    double topBottomArea = 2 * length * width;
    double side1Area = 2 * length * height;
    double side2Area = 2 * width * height;

    return topBottomArea + side1Area + side2Area;
}

int main() {
    struct Box myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 2.0;

    struct Box* boxPtr = &myBox;

    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}

