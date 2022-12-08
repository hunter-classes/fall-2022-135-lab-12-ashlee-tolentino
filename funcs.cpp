/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab12

This program works with vectors.
*/

#include <iostream>
#include <vector>
#include "funcs.h"

/**
   Task A: This function returns a vector of n integers that range from 0 to n-1.
*/
std::vector<int> makeVector(int n) {
  std::vector<int> v;
  for(int i = 0; i < n; i++) {
    v.push_back(i);
  }
  return v;
}
