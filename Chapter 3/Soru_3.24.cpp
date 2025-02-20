#include <iostream>
using namespace std;

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawSquare(int side) {
    drawRectangle(side, side);
}



int main() {
    int choice;
    cout << "Choose a shape to draw:\n";
    cout << "1. Rectangle\n";
    cout << "2. Triangle\n";
    cout << "3. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int width, height;
            cout << "Enter width and height: ";
            cin >> width >> height;
            drawRectangle(width, height);
            break;
        }
        case 2: {
            int height;
            cout << "Enter height: ";
            cin >> height;
            drawTriangle(height);
            break;
        }
        case 3: {
            int side;
            cout << "Enter side length: ";
            cin >> side;
            drawSquare(side);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}