/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QuadraticEquation.cpp
 * Author: Manuel
 * 
 * Created on 13 de agosto de 2019, 16:31
 */

#include "QuadraticEquation.h"
#include <cmath>
#include <stdexcept>
#include <sstream>
QuadraticEquation::QuadraticEquation() {
    for (int i = 0; i < 2; i++) {
        sols[i]=0;
    }

}

QuadraticEquation::QuadraticEquation(const QuadraticEquation& orig) {
}

QuadraticEquation::~QuadraticEquation() {
}

QuadraticEquation::QuadraticEquation(double a, double b, double c): a(a),
b(b), c(c){
      for (int i = 0; i < 2; i++) {
        sols[i]=0;
    }
}

double QuadraticEquation::getDiscrim() {
    return pow(b,2)-4*a*c;
}

void QuadraticEquation::calculateSol() {
    if(getDiscrim() == 0) sols[0]=-b/2*a; 
    else if(getDiscrim() > 0){
        sols[0] = (-b+sqrt(getDiscrim()))/2*a;
        sols[1] = (-b-sqrt(getDiscrim()))/2*a;
    }
    
    
    
                
}

std::string QuadraticEquation::showEq() {
    std::stringstream eq;
    eq << a << "x^2";
    if(b>0) eq << " + " << b << "x";
    else eq << " " << b << "x";
    if(c>0) eq  << " + " << c;
    else eq << " " <<  c;
    
    return eq.str();
}

std::string QuadraticEquation::getSols() {
    calculateSol();
    std::stringstream sol;
    if(getDiscrim() < 0) throw std::domain_error("This equation DOES NOT HAVE solution in reals.");
    if(getDiscrim() == 0) sol << "1 Solution. " << "x=" << sols[0];
    else{
        sol << "2 Solutions. " << "x=" << sols[0] << " and " <<  "x=" <<  sols[1];
    }
    return sol.str();
}






