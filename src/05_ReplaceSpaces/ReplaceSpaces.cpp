//
// Created by xieyang on 19-1-21.
//

#include "coding_interview.h"

void ReplaceSpaces(char * str){
    if(str == nullptr) return;
    int nSpace = 0;
    char * last;
    for(last = str; *last != '\0'; ++last) if(*last == ' ') nSpace++;
    char * newLast = last + 2 * nSpace;
    for(;last >= str; --last){
        if(*last != ' ') *newLast-- = *last;
        else{
            *newLast-- = '0';
            *newLast-- = '2';
            *newLast-- = '%';
        }
    }
}

#define ENOUGH_SIZE 512

int main(){
    char str1[ENOUGH_SIZE] = "We are happy.";
    ReplaceSpaces(str1);
    cout << str1 << endl;
    char str2[ENOUGH_SIZE] = " We are happy ";
    ReplaceSpaces(str2);
    cout << str2 << endl;
    char str3[ENOUGH_SIZE] = "WE";
    ReplaceSpaces(str3);
    cout << str3 << endl;
    char str4[ENOUGH_SIZE] = " ";
    ReplaceSpaces(str4);
    cout << str4 << endl;
    char str5[ENOUGH_SIZE] = "We  are  happy";
    ReplaceSpaces(str5);
    cout << str5 << endl;

    char * pChar = nullptr;
    ReplaceSpaces(pChar);
    cout << pChar << endl;
}