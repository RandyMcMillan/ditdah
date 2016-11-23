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
    dit.insert(make_pair("__","M"));
    dit.insert(make_pair("___","O"));
    dit.insert(make_pair("____","?"));
    dit.insert(make_pair("_____","0"));
//
    dit.insert(make_pair("_.","N"));
    dit.insert(make_pair("_..","D"));
    dit.insert(make_pair("_...","B"));
    dit.insert(make_pair("_....","6"));
//
    dit.insert(make_pair("_._","K"));
    dit.insert(make_pair("_.__","Y"));
    dit.insert(make_pair("_._.","C"));
//
    dit.insert(make_pair("_..","D"));
    dit.insert(make_pair("_.._","X"));
//
    dit.insert(make_pair("_...","B"));
    dit.insert(make_pair("_....","6"));
    
    
    
}
