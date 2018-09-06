#include <string>
#include <sstream>

class A
{
public:
    A(): _v(42) {};
    A(int v): _v(v) {};
    virtual ~A () {};
    
    std::string getMe();

private:
    int _v;
};