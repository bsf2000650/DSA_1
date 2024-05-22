#include <iostream>
#include <string>
using namespace std;

// Function to convert an integer to its binary representation
string intToBinary(int num) {
    // Determine the number of bits for an integer
    int bits = sizeof(num) * 8;

    // Resultant binary string
    string binaryRepresentation;

    // Traverse each bit position
    for (int i = bits - 1; i >= 0; i--) {
        // Check if the i-th bit is set
        binaryRepresentation += (num & (1 << i)) ? '1' : '0';
    }

    return binaryRepresentation;
}

int main() {
    int num;
    cout << "Enter a positive or negative decimal number: ";
    cin >> num;

    // Convert the number to binary
    string binary = intToBinary(num);

    // Output the result
    cout << "Binary representation: " << binary << endl;

    return 0;
}
