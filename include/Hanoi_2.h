#pragma once

#include <iostream>
#include <string>
#include <memory>

class Hanoi
{

private:
    int N;   //number of blocks
    std::string from; //position of start
    std::string to; //position of end
    std::string by; // remain position

public:
    Hanoi(int N_new, const std::string& fromInput, const std::string& toInput, const std::string& byInput);
    
    virtual ~Hanoi()=default;
};