/*******************************************************************************
*                                                                              *
*  Created by Randy McMillan                                                   *
*  Copyright ? 2016 RandyMcMillan.net. All rights reserved.                    *
*                                                                              *
*******************************************************************************/

#include <map>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// http://stackoverflow.com/questions/8404260/stl-mapchar-char-destructor

int main (
    int         argc,
    const char  *argv[]
    ) {
    //
    typedef map<string, string> DitDah;
    DitDah  ditdah;
    // T t -
    ditdah.insert( make_pair("-", "T") );
    ditdah.insert( make_pair("T", "-") );
    ditdah.insert( make_pair("t", "-") );
    // M m --
    ditdah.insert( make_pair("--", "M") );
    ditdah.insert( make_pair("M", "--") );
    ditdah.insert( make_pair("m", "--") );
    // O o ---
    ditdah.insert( make_pair("---", "O") );
    ditdah.insert( make_pair("O", "---") );
    ditdah.insert( make_pair("o", "---") );
    // Ch ch ----
    ditdah.insert( make_pair("----", "Ch") );
    ditdah.insert( make_pair("Ch", "----") );
    ditdah.insert( make_pair("ch", "----") );
    // 0 -----
    ditdah.insert( make_pair("-----", "0") );
    ditdah.insert( make_pair("0", "-----") );
    //
    ditdah.insert( make_pair("----.", "9") );
    ditdah.insert( make_pair("9", "----.") );
    //
    ditdah.insert( make_pair("---..", "8") );
    ditdah.insert( make_pair("8", "---..") );
    //
    ditdah.insert( make_pair("---.", ".") );
    ditdah.insert( make_pair(".", "---.") );
    //
    ditdah.insert( make_pair("--.-", "Q") );
    ditdah.insert( make_pair("--.-", "q") );
    ditdah.insert( make_pair("Q", "--.-") );
    //
    ditdah.insert( make_pair("--...", "7") );
    ditdah.insert( make_pair("7", "--...") );
    //
    ditdah.insert( make_pair("--..", "Z") );
    ditdah.insert( make_pair("--..", "z") );
    ditdah.insert( make_pair("Z", "--..") );
    // G g --.
    ditdah.insert( make_pair("--.", "G") );
    ditdah.insert( make_pair("--.", "G") );
    ditdah.insert( make_pair("g", "--.") );
    // N n -.
    ditdah.insert( make_pair("-.", "N") );
    ditdah.insert( make_pair("N", "-.") );
    ditdah.insert( make_pair("n", "-.") );
    // D d -..
    ditdah.insert( make_pair("-..", "D") );
    ditdah.insert( make_pair("D", "-..") );
    ditdah.insert( make_pair("d", "-..") );
    // B b -...
    ditdah.insert( make_pair("-...", "B") );
    ditdah.insert( make_pair("B", "-...") );
    ditdah.insert( make_pair("b", "-...") );
    // 6 -....
    ditdah.insert( make_pair("-....", "6") );
    ditdah.insert( make_pair("6", "-....") );
    // K -.-
    ditdah.insert( make_pair("-.-", "K") );
    ditdah.insert( make_pair("K", "-.-") );
    ditdah.insert( make_pair("k", "-.-") );
    // Y y -.--
    ditdah.insert( make_pair("-.--", "Y") );
    ditdah.insert( make_pair("Y", "-.--") );
    ditdah.insert( make_pair("y", "-.--") );
    // C c -.-.
    ditdah.insert( make_pair("-.-.", "C") );
    ditdah.insert( make_pair("C", "-.-.") );
    ditdah.insert( make_pair("c", "-.-.") );
    // D d -..
    ditdah.insert( make_pair("-..", "D") );
    ditdah.insert( make_pair("D", "-..") );
    ditdah.insert( make_pair("d", "-..") );
    // X x -..-
    ditdah.insert( make_pair("-..-", "X") );
    ditdah.insert( make_pair("X", "-..-") );
    ditdah.insert( make_pair("x", "-..-") );
    //
    ditdah.insert( make_pair("-...", "B") );
    ditdah.insert( make_pair("B", "-...") );
    ditdah.insert( make_pair("b", "-...") );

    ditdah.insert( make_pair("-....", "6") );
    ditdah.insert( make_pair("6", "-....") );
    //
    ditdah.insert( make_pair(".", "E") );
    ditdah.insert( make_pair("E", ".") );
    ditdah.insert( make_pair("e", ".") );

    ditdah.insert( make_pair("..", "I") );
    ditdah.insert( make_pair("I", "..") );
    ditdah.insert( make_pair("i", "..") );

    ditdah.insert( make_pair("...", "S") );
    ditdah.insert( make_pair("S", "...") );
    ditdah.insert( make_pair("s", "...") );

    ditdah.insert( make_pair("....", "H") );
    ditdah.insert( make_pair("H", "....") );
    ditdah.insert( make_pair("h", "....") );

    ditdah.insert( make_pair(".....", "5") );
    ditdah.insert( make_pair("5", ".....") );
    //
    ditdah.insert( make_pair(".-", "A") );
    ditdah.insert( make_pair("A", ".-") );
    ditdah.insert( make_pair("a", ".-") );

    ditdah.insert( make_pair(".--", "W") );
    ditdah.insert( make_pair("W", ".--") );
    ditdah.insert( make_pair("w", ".--") );

    ditdah.insert( make_pair(".---", "J") );
    ditdah.insert( make_pair("J", ".---") );
    ditdah.insert( make_pair("j", ".---") );

    ditdah.insert( make_pair(".----", "1") );
    ditdah.insert( make_pair("1", ".----") );
    //
    ditdah.insert( make_pair("..", "I") );
    ditdah.insert( make_pair("I", "..") );
    ditdah.insert( make_pair("i", "..") );

    ditdah.insert( make_pair("..-", "U") );
    ditdah.insert( make_pair("U", "..-") );
    ditdah.insert( make_pair("u", "..-") );

    ditdah.insert( make_pair("..--", "-") );
    ditdah.insert( make_pair("-", "..--") );

    ditdah.insert( make_pair("..---", "2") );
    ditdah.insert( make_pair("2", "..---") );
    //
    ditdah.insert( make_pair("-..", "D") );
    ditdah.insert( make_pair("D", "-..") );

    ditdah.insert( make_pair("-..-", "X") );
    ditdah.insert( make_pair("X", "-..-") );
    ditdah.insert( make_pair("x", "-..-") );
    //
    ditdah.insert( make_pair("..-.", "F") );
    ditdah.insert( make_pair("F", "..-") );
    ditdah.insert( make_pair("f", "..-") );

    ditdah.insert( make_pair("...", "S") );
    ditdah.insert( make_pair("S", "...") );
    ditdah.insert( make_pair("s", "...") );

    ditdah.insert( make_pair("...-", "V") );
    ditdah.insert( make_pair("V", "...-") );
    ditdah.insert( make_pair("v", "...-") );

    ditdah.insert( make_pair("...--", "3") );
    ditdah.insert( make_pair("3", "...--") );
    //
    ditdah.insert( make_pair("....", "H") );
    ditdah.insert( make_pair("H", "....") );
    ditdah.insert( make_pair("h", "....") );

    ditdah.insert( make_pair("....-", "4") );
    ditdah.insert( make_pair("4", "....-") );

    ditdah.insert( make_pair(".....", "5") );
    ditdah.insert( make_pair("5", ".....") );

    char  str[256];
    std :: cout << "Enter the name of an existing text file: ";
    std :: cin.get (str, 256);// get c-string
    std :: ifstream  is(str);    // open file

    char  c;

    while ( is.get(c) ) {// loop getting single characters
            std :: cout << c;
            string  s(1, c);
            DitDah :: iterator  it2 = ditdah.find(s);

            if( it2 == ditdah.end () )
                cout << " " << endl;
            else
                cout << it2->second << endl;
            }

    is.close ();// close file
    }// main

/*******************************************************************************
*                                                                              *
*******************************************************************************/
