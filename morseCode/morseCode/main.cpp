//
//  main.cpp
//  morseCode
//
//  Created by Randy McMillan on 11/23/16.
//  Copyright © 2016 RandyMcMillan.net. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <iterator>


//http://thispointer.com/stdmap-tutorial-part-1-usage-detail-with-examples/
//http://www.cplusplus.com/reference/map/map/map/
//http://en.cppreference.com/w/cpp/container/map/find

int main(int argc, const char * argv[]) {
    
    std::map<std::string, int> dah;
// Inserting data in std::map
    dah.insert(std::make_pair("earth", 1));
    dah.insert(std::make_pair("moon", 2));
    dah["sun"] = 3;
    // Will replace the value of already added key i.e. earth
    dah["earth"] = 4;
    // Iterate through all elements in std::map
    std::map<std::string, int>::iterator it = dah.begin();
    while(it != dah.end())
    {
        std::cout<<it->first<<" :: "<<it->second<<std::endl;
        it++;
    }
    // Check if insertion is successful or not
    if(dah.insert(std::make_pair("earth", 1)).second == false)
    {
        std::cout<<"Element with key 'earth' not inserted because already existed"<<std::endl;
    }
    // Searching element in std::map by key.
    if(dah.find("sun") != dah.end())
        std::cout<<"word 'sun' found"<<std::endl;
    if(dah.find("mars") == dah.end())
        std::cout<<"word 'mars' not found"<<std::endl;

    
    return 0;
}
