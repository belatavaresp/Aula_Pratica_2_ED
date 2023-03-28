#include "fatorial.h"
#include "fibonacci.h"

using namespace std;

int main(){
    int fat;
    int fib;

    cout << "FATORIAL DE: ";
    cin >> fat;
    cout << endl << "RECURSIVO: " << Factorial_recursive(fat);
    cout << endl << "ITERATIVO: " << Factorial_iterative(fat);

    cout << "\n\n";

    cout << "FIBONACCI DE: ";
    cin >> fib;
    cout << endl << "RECURSIVO: " << Fibonacci_recursive(fib);
    cout << endl << "ITERATIVO: " << Fibonacci_iterative(fib) << endl;
}