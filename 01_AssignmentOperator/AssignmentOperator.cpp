//
// Created by xieyang on 19-1-20.
//
#include "coding_interview.h"

class String{
public:
    String(char * pData = nullptr);
    String(const String & str);
    String & operator=(const String & str);
    ~String();
    char * pData_;
};

String::String(char *pData) {
    if(pData == nullptr){
        pData_ = new char[1];
        pData_[0] = '\0';
    }else{
        pData_ = new char[strlen(pData) + 1];
        strcpy(pData_,pData);
    }
}


String::String(const String & str){
    pData_ = new char[strlen(str.pData_) + 1];
    strcpy(pData_, str.pData_);
}

String & String::operator=(const String & str){
    if(this == &str) return *this;
    delete [] pData_;
    pData_ = new char[strlen(str.pData_) + 1];
    strcpy(pData_, str.pData_);
    return *this;
}


String::~String(){
    delete [] pData_;
}

int main(){
    char * text = "123";
    String str1(text), str2, str3;
    str3 = (str2 = str1);
    cout << str1.pData_ << "\t" << str2.pData_ << "\t" << str3.pData_;
    return 0;
}