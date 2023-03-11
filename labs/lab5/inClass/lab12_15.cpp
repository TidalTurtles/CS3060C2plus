//
// Created by noah holt on 3/1/23.
//


#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

//func prototypes
int countSentences(string);
int countWords(string);

int main() {

    int sentences;
    int words;
    double average;

    //get num sentences in file
    sentences = countSentences("text.txt");

    //get words in file
    words = countWords("text.txt");

    //calc average
    average = static_cast<double>(words) / sentences;

    //display results
    cout << "The file contains " << words << " words, and " << sentences << " sentences.\n";
    cout << "There is an average of " << setprecision(1) << fixed << average << " words per sentence.\n";

    return 0;

}

int countSentences(string fileName)
{

    const int SIZE = 500;
    char input[SIZE];
    fstream inputFile;
    int numSentences = 0;

    //open file
    inputFile.open(fileName, ios::in);
    if(!inputFile){
        cout << "ERROR: Cannot open file. \n";
        exit(0);
    }

    //read file
    inputFile.getline(input, SIZE); //use \n as delimiter
    while (!inputFile.eof()){

        //step through counting periods for sentences
        for (int i = 0; input[i] != '\0' ; i++) {

            if (input[i] == '.'){
                numSentences++;
            }

        }
        inputFile.getline(input, SIZE); //use \n as delimiter

    }

    //close file
    inputFile.close();

    return numSentences;

}


int countWords(string fileName)
{

    const int SIZE = 500;
    char input[SIZE];
    fstream inputFile;
    int numWords = 0;

    //open file
    inputFile.open(fileName, ios::in);
    if(!inputFile){
        cout << "ERROR: Cannot open file. \n";
        exit(0);
    }

    //read file
    inputFile.getline(input, SIZE); //use \n as delimiter
    while (!inputFile.eof()){

        //step through counting periods for sentences
        int index = 0;
        while (input[index] != '\0'){

            while (isspace(input[index]) && input[index] != '\0'){
                index++;
            }

        }

        //if we aren't at the end of the string, then
        //count this as a word and then skip over it
        if (input[index] != '\0'){
            //This is the beginning of the word so
            //increment the word counter.
            numWords++;

            //skip over this word
            while (!isspace(input[index]) && input[index] != '\0'){
                index++;
            }

        }


        inputFile.getline(input, SIZE); //use \n as delimiter

    }

    //close file
    inputFile.close();

    return numWords;

}
