#pragma once
#include "iostream"
#include "random"
#include "cmath"

using namespace std;

void gen(int** mas, int k, int m);
void counter(int** mas, int k, int m, int* maxes);
void sorter(int** mas, int* maxes, int m);
void outer(int** mas, int k, int m, string name);