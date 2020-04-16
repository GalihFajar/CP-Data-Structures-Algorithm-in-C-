#include <iostream>
using namespace std;

int main(){
    int a = 0; // Integer
    int *p; // Pointer to integer

    p = &a; // P now contains the address of a
    // The process above is very important : you first have to point the address of a
    a = 10;
    cout << *p << endl; // P accessing a's content

    //DEREFERENCING
    *p = 30; // Changing the content of a
    cout << a << endl; // Yields 30 instead of 10

    //Pointer to pointer
    int **q; // Pointer to point a pointer
    q = &p; // Pointing the address of p, which p is pointing the address of a
    printf("%d\n", **q);
    **q = 40;
    printf("%d", a);

    return 0;
}