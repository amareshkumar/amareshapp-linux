#include "Tiger.hpp"

extern MyLogger* mylog;

Tiger::~Tiger(){		
    mylog->log_msg ("A Tiger died!!\n");	
}

Tiger::Tiger():no_of_tigers_alive(1000), m_hab_area("South AFrica"), m_tiger_name("My Tiger"), m_type (nullptr){
    mylog->log_msg ("A Tiger is just born!\n");
}

Tiger::Tiger(const char* tigername):no_of_tigers_alive(1000), m_hab_area("South AFrica"), m_tiger_name(tigername), m_type(nullptr){
    mylog->log_msg ("A Tiger is just born!\n");
}

Tiger::Tiger(const char* name, const char* type):IFelid(type), no_of_tigers_alive(1000), m_hab_area("South AFrica"), m_tiger_name(name){
    mylog->log_msg("A special Tiger is born!\n");
}

const char* Tiger::habitant_area(){
    return m_hab_area;
}

void Tiger::meow() { 
    mylog->log_msg ("Tiger's MREOWWW!\n"); 
}

const char* Tiger::get_name(){
    return m_tiger_name;
}

const char* Tiger::get_type(){
    return m_type;
}

const int Tiger::get_no_of_tigers(){return no_of_tigers_alive;}