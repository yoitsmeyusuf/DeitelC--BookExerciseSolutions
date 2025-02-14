#include <iostream>
using namespace std;

void printDay(int day) {
    switch (day) {
        case 1: cout << "First"; break;
        case 2: cout << "Second"; break;
        case 3: cout << "Third"; break;
        case 4: cout << "Fourth"; break;
        case 5: cout << "Fifth"; break;
        case 6: cout << "Sixth"; break;
        case 7: cout << "Seventh"; break;
        case 8: cout << "Eighth"; break;
        case 9: cout << "Ninth"; break;
        case 10: cout << "Tenth"; break;
        case 11: cout << "Eleventh"; break;
        case 12: cout << "Twelfth"; break;
    }
}

void printVerse(int day) {
    switch (day) {
        case 12: cout << "Twelve Drummers Drumming\n";
        case 11: cout << "Eleven Pipers Piping\n";
        case 10: cout << "Ten Lords a Leaping\n";
        case 9: cout << "Nine Ladies Dancing\n";
        case 8: cout << "Eight Maids a Milking\n";
        case 7: cout << "Seven Swans a Swimming\n";
        case 6: cout << "Six Geese a Laying\n";
        case 5: cout << "Five Golden Rings\n";
        case 4: cout << "Four Calling Birds\n";
        case 3: cout << "Three French Hens\n";
        case 2: cout << "Two Turtle Doves\n";
        case 1: cout << "A Partridge in a Pear Tree\n"; break;
    }
}

int main() {
    for (int day = 1; day <= 12; ++day) {
        cout << "On the ";
        printDay(day);
        cout << " day of Christmas my true love sent to me:\n";
        printVerse(day);
        cout << endl;
    }
    
    return 0;
}