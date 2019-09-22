#include <iostream>
#include <string>
using namespace std;

int main()
{
    /**A string is composed of numbers, characters, or symbols. String literals are placed in double quotation marks; some examples are "Hello", "My name is David", and similar.

Characters are single letters or symbols, and must be enclosed between single quotes, like 'a', 'b', etc.
    **/
    string a = "I am learning C++.\n";
    cout << "Hey, I am Seeker and " << a;
    int b[5] = {1, 5, 12, 14, 72};
    cout << "okay, indeed arrays are cool, here you go:" << b[0] << "\nand yes, the code I used was << b[0];\n not just 1.. 1 was stored as the first element in the array \n so it was declared as the element 0 (array elements start from 0 \n not 1).";
}