#include <map>
#include <iostream>
#include <string>
using namespace std;
//http://stackoverflow.com/questions/8404260/stl-mapchar-char-destructor

int main (
  int         argc,
  const char  *argv[]
  ) {
    
    typedef map<string,string> DitDah;
    DitDah ditdah;
//T t -
    ditdah.insert(make_pair("-","T"));
    ditdah.insert(make_pair("T","-"));
    ditdah.insert(make_pair("t","-"));
//M m --
    ditdah.insert(make_pair("--","M"));
    ditdah.insert(make_pair("M","--"));
    ditdah.insert(make_pair("m","--"));
//O o ---
    ditdah.insert(make_pair("---","O"));
    ditdah.insert(make_pair("O","---"));
    ditdah.insert(make_pair("o","---"));
//Ch ch ----
    ditdah.insert(make_pair("----","Ch"));
    ditdah.insert(make_pair("Ch","----"));
    ditdah.insert(make_pair("ch","----"));
//0 -----
    ditdah.insert(make_pair("-----","0"));
    ditdah.insert(make_pair("0","-----"));
//N n -.
    ditdah.insert(make_pair("-.","N"));
    ditdah.insert(make_pair("N","-."));
    ditdah.insert(make_pair("n","-."));
//D d -..
    ditdah.insert(make_pair("-..","D"));
    ditdah.insert(make_pair("D","-.."));
    ditdah.insert(make_pair("d","-.."));
//B b -...
    ditdah.insert(make_pair("-...","B"));
    ditdah.insert(make_pair("B","-..."));
    ditdah.insert(make_pair("b","-..."));
//6 -....
    ditdah.insert(make_pair("-....","6"));
    ditdah.insert(make_pair("6","-...."));
//K -.-
    ditdah.insert(make_pair("-.-","K"));
    ditdah.insert(make_pair("K","-.-"));
    ditdah.insert(make_pair("k","-.-"));
    
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

    
    
    

//        string ss2 = "....";//argv[argc];
//        string ss2 = (string)argv[argc];
    std::string word = argv[1];

//        DitDah::iterator it2 = ditdah.find(ss2);
        DitDah::iterator it2 = ditdah.find(word);
        
        if( it2 == ditdah.end() )
            cout << " "<<endl;
        else
            cout << it2->second<<endl;
        
        
        
}
