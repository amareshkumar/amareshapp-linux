/* 
 * File:   MyString.cpp
 * Author: amakumar
 *
 * Created on July 27, 2015, 1:58 PM
 */

#include "MyString.hpp"


int MyString::no_of_MyString_Obj = 0;
extern MyLogger* mylog; 


MyString::MyString():m_str(NULL){
    mylog->log_msg("MyString C-tor\n");
    no_of_MyString_Obj++;
}

MyString::MyString(const char* st):m_str(NULL){
    m_str = const_cast <char*> (st); 
    mylog->log_msg("MyString 1-C-tor\n");
    no_of_MyString_Obj++;
}

MyString::~MyString(){
    //delete the memory allocated in copy c-tor
    //delete m_str; 
    mylog->log_msg("MyString D-tor\n");
    no_of_MyString_Obj--;
}

MyString::MyString(const MyString& str){
    m_str = new char [sizeof (str)];
    m_str = str.m_str; 
    mylog->log_msg("MyString copy c-tor called\n");
    no_of_MyString_Obj++;
}

MyString& MyString::operator = (const MyString & str){
    delete [] m_str; 
    
    m_str = str.m_str; 
    return *this; 
}

char* MyString::GetMyString(){
    return m_str; 
}

int MyString::Get_No_of_MyString_Obj() const{
    return no_of_MyString_Obj;
}

void MyString::SetMyString(const char* st) {
    m_str = const_cast<char*>(st); 
}

char* MyString::MyStringReverse (char *str2Reverse){
    int i, j = 0;
    int st_len = strlen(str2Reverse);  // replace with your own function
    
    char* mystr = new char [sizeof(str2Reverse)];
    
    //mystr = str2Reverse; 
    
    mylog->log_msg("Inside MyStringReverse func...");
    //mylog->log_msg("The value of mystr is: ");
    //mylog->log_msg (mystr);
    
    mylog->log_msg("Before the loop for reverting the string\n");
    for (i = 0, j = st_len - 1; i < st_len; i++, j--){
        mystr[i] = str2Reverse[j];
//        cout << "mystr at i = "<<i<<" "<<mystr[i];
//        cout << " ";
//        cout << "str2Reverse at j = "<<j<<" "<<str2Reverse[j];
    }
    mylog->log_msg("After the loop for reverting the string");
    mylog->log_msg(mystr);
    return mystr;
}

//char* MyString::operator+ (const char* str){
//    strcpy (this->m_str, str);
//    return m_str; 
//}

//MyString& operator+ (MyString& str) const {
//    MyString mystr; 
//    
//    mystr.m_str = this->m_str + str.m_str; 
//}

char* MyString::myAppend (char* strToAppend) {
    static int i; 
    int j = 0;
    char* temp = new char [sizeof(this->m_str) + sizeof(strToAppend)]; 
    
    mylog->log_msg(this->m_str);
    mylog->log_msg(" + ");
    mylog->log_msg(strToAppend);
    
    for (i = 0; i < strlen(this->m_str); i++){
        temp[i] = this->m_str[i];
    }
    
    for (j = 0; j < strlen(strToAppend); j++ ){
        temp [i+j] = strToAppend[j];
    }
    mylog->log_msg ("After appending: ");
    mylog->log_msg (temp);
    return temp; 
}