#include <iostream>
/* Intructions
for N = 3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1

Note : Instead of printing new line print a "$" without quotes.
*/

/* Plans
For loop N times
In Each Loop - print the number x(# of line) times, decrement and print again 

*/
void printPat(int n);

int main() {
    int num;
    std::cin >> num;
    printPat(num);
}

void printPat(int n) {  
    for (int i  = n; i > 0; --i) { // # Line Number
        for (int j = n; j > 0; --j) { // Start Number
            for (int k = 0; k < i; k++) {
                std::cout << j << " ";
            }
        }
        std::cout << "$";
    }
}