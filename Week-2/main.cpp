#include "Robot.h"

void passByValue(int num) {
    num = 20;  // This change will not affect the original variable
    std::cout << "Inside passByValue: " << num << std::endl;
}

void passByReference(int &num) {
    num = 20;  // This change will affect the original variable
    std::cout << "Inside passByReference: " << num << std::endl;
}


int main() {
    // Create a Robot object
    Robot robot;

    // Display sensor data
    //robot.displaySensorData();

    int num = 5;
    char c = 'a';
    std::string str = "Hello";

    char myCharArray[] = "Array"; //alt way to work with strings

    /* Just to get students familiar with memory */
    std::cout << sizeof(num) << std::endl;
    std::cout << sizeof(c) << std::endl;
    std::cout << sizeof(str) << std::endl;

    std::cout << sizeof(myCharArray) << std::endl; //EXPLAIN WHY THIS IS 6

    /* Pointer Arithmetic */
    char *ptr = myCharArray;

    std::cout << *ptr << std::endl;
    std::cout << *(ptr + 1) << std::endl;

    /* Null terminator rationale: */
    while (*ptr != '\0') {
        std::cout << *ptr << std::endl;
        ptr += 1;
    }

    /* Pass by Value */
    int x = 10;
    std::cout << "Before passByValue: " << x << std::endl;
    passByValue(x);
    std::cout << "After passByValue: " << x << std::endl;

    /* Pass by Reference */
    int y = 10;
    std::cout << "Before passByReference: " << y << std::endl;
    passByReference(y);
    std::cout << "After passByReference: " << y << std::endl;
    


    return 0;
}