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

/**
   Task B: This function takes in a vector of integers and then returns a vector with only the positive integers in the same order.
*/
std::vector<int> goodVibes(const std::vector<int> v) {
  std::vector<int> result;
  for(int i = 0; i < v.size(); i++) {
    if(v[i] >= 0) {
      result.push_back(v[i]);
    }
  }
  
  return result;
}
