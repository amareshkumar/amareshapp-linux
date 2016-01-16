#ifndef IFELID_H
#define IFELID_H

#include "my_project_app.h"
#include "MyLogger.hpp"

//extern Mylogger* mylog; 
//abstract class
class IFelid {
public:
    IFelid():m_type(nullptr){}
    IFelid(const char* type):m_type(type){}
    virtual void meow() = 0;
    virtual ~IFelid(){}
    virtual const char* get_type() = 0;
private:
    const char* m_type; 
};

#endif //IFELID_H
