#include <iostream>

class Rectangle {
private:
    // Private data members: only accessible within this class
    float width;
    float height;

public:
    // a. Sets the width and height
    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }

    // b. Returns the area of the rectangle
    // The 'const' keyword ensures this method doesn't modify width or height
    float getArea() const {
        return width * height;
    }

    // c. Returns the perimeter of the rectangle
    float getPerimeter() const {
        return 2.0f * (width + height);
    }
};

// --- Example Usage ---
int main() {
    // 1. Create a Rectangle object
    Rectangle myRect;

    // 2. Set its dimensions (e.g., width = 5.5, height = 3.2)
    myRect.setDimensions(5.5f, 3.2f);

    // 3. Display the area and perimeter
    std::cout << "Rectangle Dimensions: 5.5 x 3.2\n";
    std::cout << "-------------------------------\n";
    std::cout << "Area:      " << myRect.getArea() << "\n";
    std::cout << "Perimeter: " << myRect.getPerimeter() << "\n";

    return 0;
}