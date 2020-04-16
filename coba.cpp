#include <bits/stdc++.h>
using namespace std;


class Circle{
    private:
    int size;
    string color;


    public:
    Circle(int size, string color){

        this->size = size;
        this->color = color;
    }

    void printCircle(){
        printf("The size is %d. The color is %s \n", this->size, this->color);
    }
};

int main(){

    Circle A = Circle(10, "Blue");
    A.printCircle();

    char[] mystr = "Coba ngeprint string";
    printf("%s", mystr);
}