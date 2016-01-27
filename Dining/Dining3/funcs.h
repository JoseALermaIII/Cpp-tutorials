#ifndef FUNCS_H
#define FUNCS_H

// INCLUDES
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <limits>

// DEFINES
char last = 'D';
char dining[12];
char AH1[2] = {'A','B'};
char AH2[2] = {'C','E'};
char BH1[3] = {'F','G','H'};
char BH2[3] = {'J','K','L'};

bool flip;

// DECLARATIONS
int HeadsorTails();
void AHfirst();
void BHfirst();
void TwoEarray(char in[], char out[], int index);
void ThreeEarray(char in[], char out[], int index);
void pause();
void PauseAndClear();

// NAMESPACE
using namespace std;

#endif
