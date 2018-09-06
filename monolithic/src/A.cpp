#include "A.h"


std::string A::getMe() {
    std::ostringstream sstr;
    sstr << "I have " << _v << " bottles of beer.";
    return sstr.str(); 
}
