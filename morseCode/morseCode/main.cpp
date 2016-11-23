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
    DitDah ditdah;
//
    ditdah.insert(make_pair("-","T"));
    ditdah.insert(make_pair("--","M"));
    ditdah.insert(make_pair("---","O"));
    ditdah.insert(make_pair("----","?"));
    ditdah.insert(make_pair("-----","0"));
//
    ditdah.insert(make_pair("-.","N"));
    ditdah.insert(make_pair("-..","D"));
    ditdah.insert(make_pair("-...","B"));
    ditdah.insert(make_pair("-....","6"));
//
    ditdah.insert(make_pair("-.-","K"));
    ditdah.insert(make_pair("-.--","Y"));
    ditdah.insert(make_pair("-.-.","C"));
//
    ditdah.insert(make_pair("-..","D"));
    ditdah.insert(make_pair("-..-","X"));
//
    ditdah.insert(make_pair("-...","B"));
    ditdah.insert(make_pair("-....","6"));
//
    
    ditdah.insert(make_pair(".","E"));
    ditdah.insert(make_pair("..","I"));
    ditdah.insert(make_pair("...","S"));
    ditdah.insert(make_pair("....","H"));
    ditdah.insert(make_pair(".....","5"));
//
    ditdah.insert(make_pair(".-","A"));
    ditdah.insert(make_pair(".--","W"));
    ditdah.insert(make_pair(".---","J"));
    ditdah.insert(make_pair(".----","1"));
//
    ditdah.insert(make_pair("..","I"));
    ditdah.insert(make_pair("..-","U"));
    ditdah.insert(make_pair("..--","-"));
    ditdah.insert(make_pair("..---","2"));
//
    ditdah.insert(make_pair("-..","D"));
    ditdah.insert(make_pair("-..-","X"));
//
    ditdah.insert(make_pair("..-.","F"));
    ditdah.insert(make_pair("...","S"));
    ditdah.insert(make_pair("...-","V"));
    ditdah.insert(make_pair("...--","3"));
//
    ditdah.insert(make_pair("....","H"));
    ditdah.insert(make_pair("....-","4"));
    ditdah.insert(make_pair(".....","5"));
    
}