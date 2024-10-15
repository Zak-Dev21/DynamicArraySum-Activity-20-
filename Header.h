#ifndef Header_h
#define Header_h

#include <iostream>
using namespace std;


void DynmaicArraySum() {
    int capacity = 5;
    int entries = 0;
    int* numbers = new int[capacity];

    while (true) {

        cout << "Enter numbers: ";
        cin >> numbers[entries];


        if (cin.fail()) break;

        if (entries >= capacity) {

            capacity *= 2;
            int* temp = new int[capacity];

            for (int i = 0; i < entries; i++) {
                temp[i] += numbers[i]; // copying data from numbers array to new temp array
            }

            delete[] numbers; //de allocating memory of numbers
            numbers = temp; // point to new array we created
        }

        entries++;
    }

    int sum = 0;

    for (int i = 0; i < entries; i++) {
        sum += numbers[i];
    }

    cout << "Sum of numbers given is: " << sum << endl;

    delete[] numbers; // free up allocated memory
    numbers = nullptr;

}

#endif // !Header.h

