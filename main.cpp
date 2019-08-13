/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Manuel
 *
 * Created on 13 de agosto de 2019, 16:31
 */

#include <cstdlib>
#include <stdexcept>
#include "QuadraticEquation.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    QuadraticEquation ec1(1,3,2);
    try{
    std::cout << "The equation is: " << ec1.showEq() << endl;
    std::cout << "It's discrimant is: " << ec1.getDiscrim() << endl;
    std::cout << "Solution(s): " << ec1.getSols();
    } catch (std::domain_error &err){
        std::cout << "[!]: " << err.what();
    }
    return 0;
}

