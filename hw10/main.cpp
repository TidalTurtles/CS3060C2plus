/*
 * Noah Holt
 * CS 3060 C++
 * Spring 23
 * Due date: 16 april 23
 *
 * 17.6: Word Frequency
 *
 *      Read text file
 *      make a map
 *          key: word
 *          value: count
 *
 *      Either Print
 *      OR
 *      print to file
 *
 */

#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main() {

    //map of words and count
    map<string, int> numWords;

    //open file
    ifstream readIn ("../test1.txt"); //change for testing on different systems.
    string test;
    //read by word and fill out map
    while(readIn >> test){
        if(!numWords.count(test)){
            numWords.insert(make_pair(test, 1));
        } else {
            numWords[test] ++;
        }
    }
    //don't need file anymore
    readIn.close();

    //iterate through the map
    //  print out word and count
    for(map<string, int> :: iterator thru = numWords.begin(); thru != numWords.end(); thru++){
        cout << thru->first << " = " << thru->second << endl;
    }

    return 0;

}
