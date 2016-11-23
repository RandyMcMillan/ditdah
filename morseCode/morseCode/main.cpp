#include <map>
#include <iostream>
#include <string>
using namespace std;
//http://stackoverflow.com/questions/8404260/stl-mapchar-char-destructor
int main()
{
    typedef map<string,string> Strings;
    Strings strings;
    strings.insert(make_pair("foo","bar"));
    
    string ss = "foo";
    Strings::iterator it = strings.find(ss);
    if( it == strings.end() )
        cout << "Not Found~!";
    else
        cout << "Found";
    
    
    
    typedef map<string,string> DitDah;
    DitDah dit;
    dit.insert(make_pair("_","T"));
    
    
    
    
    
    
    
}
