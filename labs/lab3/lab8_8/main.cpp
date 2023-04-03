/*
 *
 * search funcs
 * lab 3
 * 8.8
 *
 */


#include<iostream>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

using namespace std;

//global const
const int ARRAY_SIZE = 20;
const int no_TO_FIND = 521;

//fcn prototypes
int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);
char whosQuicker(int binVal, int linVal);



int main()
{
    int comparisons; //to hold comparisons
    int binaryResult, linearResult = 0;
    int quick = -1;
    //intitialize array
    int tests[ARRAY_SIZE] = { 101,142,147,189,199,207,222,234,289,296,310,319,388,394,417,429,447,521,536,600 };

    //display value searched for
    cout << "The number being searched for is " << no_TO_FIND << endl;

    //display result of Linear
    cout << "The linear search took this many clock cycles to complete the search " ;

    linearResult = (linearSearchBench(tests, ARRAY_SIZE, no_TO_FIND));
    cout << linearResult << endl;

    //display result for Binary
    cout << "The binary search took this many clock cycles to complete the search ";
    binaryResult = (binarySearchBench(tests, ARRAY_SIZE, no_TO_FIND));
    cout << binaryResult << endl;

    //the difference between the searches was this amount

    quick = (whosQuicker(binaryResult, linearResult));
    if (quick == 1)
    {
        comparisons = linearResult - binaryResult;
        cout << "The binary search method was the fastest with " << comparisons << " less cycles\n";
    }
    else if (quick == 2)
    {
        comparisons = binaryResult - linearResult;
        cout << "The linear search method was the fastest with " << comparisons << " less cycles\n";
    }
    else
        cout << "Both search methods took the same amount of time \n";
    return 0;


}

int linearSearchBench(int tests[], int array_size, int want)
{
    int linearReturn = 0; // number of cycles necessary

    for (int i = 0; i < array_size; i++) //he did with a while while(!found &&index<size)
    {
        if (tests[i] == want)
        {
            i = array_size;
        }
        else
        {
            linearReturn++;
        }
    }

    return linearReturn;

}
int binarySearchBench(int tests[], int array_size, int val)
{
    int binaryReturn = 0;
    //find midpoint last=size-1 first is = 0
    int first = 0;
    int last = array_size - 1;
    int middle = 0;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (tests[middle] == val)
        {
            found = true;
        }

        else
        {
            binaryReturn++;
            if (tests[middle] < val) //since sorted
            {
                first = middle + 1;
            }
            else if (tests[middle] > val)
            {
                last = middle - 1;
            }
        }
    }

    //is val at midpoint if not increment counter
    //is val in lower last = middle -1 if not is in upper if so assign first=middle+1

    return binaryReturn;
}

char whosQuicker(int binVal, int linVal)
{
    int fastest = 0; //return val would be 1 if binVal is fastest,  2 if linVal is fastest, 0 if they happen at the same rate

    if (binVal < linVal)
        fastest = 1;
    else if (linVal < binVal)
        fastest = 2;
    else
        fastest = 0;

    return fastest;
}
