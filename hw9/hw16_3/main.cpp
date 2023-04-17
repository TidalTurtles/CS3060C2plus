/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 10 april 23
 *
 * 16.3: Min/Max Template
 *
 *      create 2 funcs that ake 2 args (any type)
 *      1) returns min
 *
 *      2) returns max
 *
 *      test with various types
 *
 */

#include <iostream>

using namespace std;

template <class T>
T minimum(T val1, T val2)
{
    //return lower val
    if (val1 < val2){
        return val1;
    } else {
        return val2;
    }

}

template <class T>
T maximum(T val1, T val2)
{
    //Tuple version
    // return (val1 > val2) ? val1 : val2;

    //return bigger val
    if (val1 > val2){
        return val1;
    } else {
        return val2;
    }

}

int main() {

    //test with int
    int x = 3;
    int y = 4;

    //test with double
    double q = 4.3;
    double w = 3.4;

    //test with char
    char v = 'r';
    char b = 'R';

    // test min
    cout << minimum(x, y) <<endl; //want 3
    cout << minimum(q, w) <<endl; //want 3.4
    cout << minimum(v, b) <<endl <<endl; //not sure but testing anyway

    //test max
    cout << maximum(x, y) <<endl; //want 4
    cout << maximum(q, w) <<endl; //want 4.3
    cout << maximum(v, b) <<endl; //not sure but testing anyway

    return 0;

}
