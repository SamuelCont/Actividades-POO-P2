#include <iostream>
using namespace std;

void displayArray(int intArray[], int nSize);

int main(int nNumberofArgs, char* pszArgs[]) {
    int upper = 0;
    int n = 0;
    int lower = 0;

    // Output the values of the three variables before...
    cout << "The initial values are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n = " << n << endl;
    cout << "lower = " << lower << endl;

    // Store a double into the space allocated for an int (unsafe!)
    cout << "\nStoring 13.0 into the location &n (unsafe cast)" << endl;
    double* pD = reinterpret_cast<double*>(&n);
    *pD = 13.0;

    // Display the results
    cout << "\nThe final results are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n = " << n << endl;
    cout << "lower = " << lower << endl;

    // Pointer examples
    int intVar;
    int* pintVar = &intVar;
    *pintVar = 10;

    double doubleVar;
    double* pdoubleVar = &doubleVar;
    *pdoubleVar = 10.0;

    int n1;
    pintVar = &n1;
    *pintVar = 100;

    double dVar = 10.0;
    int iVar = static_cast<int>(dVar);

    double* pdVar = &dVar;
    int* piVar = reinterpret_cast<int*>(pdVar); // Not safe, for demonstration

    // Demonstrate displayArray function
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    displayArray(numbers, size);

    return 0;
}

// Display array using normal indexing
void displayArray(int intArray[], int nSize) {
    cout << "\nThe values of the array are:\n";
    for (int n = 0; n < nSize; n++) {
        cout << n << ": " << intArray[n] << "\n";
    }
    cout << endl;

    // Display array using pointers
    cout << "The values of the array using pointers:\n";
    int* pArray = intArray;
    for (int n = 0; n < nSize; n++, pArray++) {
        cout << n << ": " << *pArray << "\n";
    }
    cout << endl;
}
