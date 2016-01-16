/* 
 * File:   Tiger.hpp
 * Author: akumar
 *
 * Created on 8 August, 2015, 8:45 PM
 */

#ifndef TIGER_HPP
#define	TIGER_HPP

#include "IFelid.h"
#include "my_project_app.h"

class Tiger : public IFelid {
private: 
        const int no_of_tigers_alive;
        const char* m_hab_area;
        const char* m_tiger_name; 
        const char* m_type;
public:
        Tiger();
        Tiger(const char* tigername);
        Tiger (const char* name, const char* type);
        virtual ~Tiger();
        virtual const char* habitant_area();
        virtual void meow();
        const char* get_name();
        const char* get_type(); 
        const int get_no_of_tigers();
};

#endif	/* TIGER_HPP */