#include "stdio.h"
#ifndef INPUTCONVERSION_H
#define INPUTCONVERSION_H

int strToInt(char * str, int size);
void intToStr(char * str, int size, int n);
double strToDouble(char * str, int size);
int collectInt();
void collectStr(char * str, int max);
double collectDouble();

#endif