/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QuadraticEquation.h
 * Author: Manuel
 *
 * Created on 13 de agosto de 2019, 16:31
 */

#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H
#include <iostream>
class QuadraticEquation {
public:
    QuadraticEquation();
    QuadraticEquation(double a, double b, double c);
    QuadraticEquation(const QuadraticEquation& orig);
    double getDiscrim();
    void calculateSol();
    std::string getSols();
    std::string showEq();
    virtual ~QuadraticEquation();
private:
    double a=0;
    double b=0;
    double c=0;
    double sols[2];

};

#endif /* QUADRATICEQUATION_H */

