/* 
 * File:   main.cpp
 * Author: braila
 *
 * Created on April 17, 2011, 4:32 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "stringClass.h"

typedef stringClass sstring;
using namespace std;

/*
 * As you can see, this is a class that wrappes aroung std::string. However,
 * it doesn't keep all the functionality string offers, as it doesn't extend it.
 *
 * Extending it wouldn't be anything of use to us.
 * Serghey, please see what can be done
 * to use printf("%s", y.value()), instead of cout;
 * 
 * Also, check see if you can convert stringClass's member
 * object of type std::string into a pointer.
 *
 * Also, please add member functions find_last_of, find_first_of, rfind and lfind.
 *
 * Example:
 *
 * rfind returns the position where it finds the first char that resembles the one searched for
 *
 * int position = someString.rfind("s");
 *
 * that is what we need for our class
 *
 *
 *
 */
int main(int argc, char** argv) {

    sstring x("pisat"), y, z;
    x = "lala";
    y = x;
    cout<<x.value()<<"\n"<<y.value()<<z.value();

    if (y.compare("lala")==0)
        cout<<'\n'<<"yes";

    return 0;
}

