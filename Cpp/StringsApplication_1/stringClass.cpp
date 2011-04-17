/* 
 * File:   stringClass.cpp
 * Author: braila
 * 
 * Created on April 17, 2011, 4:36 AM
 */

#include "stringClass.h"


stringClass::stringClass() {
    object = '\0';
}

stringClass::stringClass(const std::string& orig){
    object = orig;
}

stringClass::stringClass(const stringClass& orig) {
    this->object = orig.object;
}

stringClass::~stringClass() {
}

int stringClass::compare(const std::string& orig){
    return object.compare(orig) == 0 ? 0 : 1;
}

int stringClass::set(const std::string& value){
    object = value;
    return 0;
}

const std::string& stringClass::value(){
    return object;
}

stringClass& stringClass::operator = (const std::string& rhs){
    this->object = rhs;
       return *this;
}

stringClass& stringClass::operator = (const stringClass& rhs){
    if (this == &rhs)
        return *this;
    else
    {
        this->object = rhs.object;
        return *this;
    }
}


