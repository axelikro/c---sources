/* 
 * File:   stringClass.h
 * Author: braila
 *
 * Created on April 17, 2011, 4:36 AM
 */

#ifndef STRINGCLASS_H
#define	STRINGCLASS_H

#include <string>

class stringClass {
public:
    stringClass();
    stringClass(const std::string&);
    stringClass(const stringClass& orig);
    virtual ~stringClass();
    stringClass& operator = (const std::string&);
    stringClass& operator = (const stringClass&);
    int compare(const std::string&);
    int set(const std::string&);
    const std::string& value();

private:
    std::string object;

};

#endif	/* STRINGCLASS_H */

