#include <iostream> // cout, endl

using namespace std;

// === TODO 1 ===
// Converts four characters in the buffer into an integer and returns it.
// @param buffer: The buffer to retrieve the integer from
// @param pos: The position in the buffer to get the four characters
// Example: buffer = "123456789"
//      pos = 0 will return integer 1234
//      pos = 3 will return integer 4567
int charToInt(char * buffer, int pos) {
    return 0;
}

// === TODO 2 ===
// Inserts an integer into the buffer at the given position
// The integer will take up four characters
// @param buffer: The buffer to insert the integer in
// @param num: The integer to place inside the buffer
// @param pos: The position in the buffer to insert the integer
// Example: buffer = "123456789"
//      pos = 0, num = 0   will result in buffer = "000056789"
//      pos = 3, num = 102 will result in buffer = "123010289"
//          Note: 102 was converted to 0102
void intToChar(char * buffer, int num, int pos) {

}

// Prints the contents of the buffer in a line
void printbuffer(char * buffer, int size) {
    for (int i = 0; i < size; i++) {
        cout << buffer[i];
        if (i % 4 == 3) {
            cout << " ";
        }
        if (i % 16 == 15) {
            cout << endl;
        }
    }
}

// Driver - DO NOT EDIT
int main() {
    // Init
    char buffer[64];    // cstring

    // Init buffer
    for(int i = 0; i < 64; i++) {
        buffer[i]= '0';
    }
    cout << "Initial buffer is:" << endl;
    printbuffer(buffer, 64); 

    // Placing ints inside buffer
    cout << "\nInserting ints into buffer" << endl;
    intToChar(buffer, 1234, 2);
    intToChar(buffer, 5678, 6);
    intToChar(buffer, 9012, 10);
    intToChar(buffer, 3456, 14);
    intToChar(buffer, 7890, 18);
    intToChar(buffer, 2468, 32);
    intToChar(buffer, 123, 52);
    intToChar(buffer, 12, 56);
    intToChar(buffer, 1, 60);
    cout << "Buffer after inserts:" << endl;
    printbuffer(buffer, 64); 

    // Retrieving ints from buffer
    cout << "\nRetrieving ints from buffer:" << endl;
    cout <<"position  0 is " << charToInt(buffer, 0) << endl;
    cout <<"position  3 is " << charToInt(buffer, 3) << endl;
    cout <<"position  6 is " << charToInt(buffer, 6) << endl;
    cout <<"position  7 is " << charToInt(buffer, 7) << endl;
    cout <<"position 29 is " << charToInt(buffer, 29) << endl;
    cout <<"position 30 is " << charToInt(buffer, 30) << endl;
    cout <<"position 31 is " << charToInt(buffer, 31) << endl;
    cout <<"position 32 is " << charToInt(buffer, 32) << endl;
    cout <<"position 33 is " << charToInt(buffer, 33) << endl;
    cout <<"position 34 is " << charToInt(buffer, 34) << endl;
    cout <<"position 35 is " << charToInt(buffer, 35) << endl;
    cout <<"position 36 is " << charToInt(buffer, 36) << endl;
    cout <<"position 60 is " << charToInt(buffer, 60) << endl;
    
    return 0;
}
