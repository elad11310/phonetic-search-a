//
// Created by elad on 21/03/2020.
//
#include <string>
#include <vector>
#ifndef MATALA1_PHONETICFINDER_H
#define MATALA1_PHONETICFINDER_H

namespace phonetic{
    std::string find(std::string text, std::string word);
    std::vector<std::string> split(std::string text);
    std::string containsMistaken(char ch);
    bool contains(std::string str,char ch);

};


#endif //MATALA1_PHONETICFINDER_H

