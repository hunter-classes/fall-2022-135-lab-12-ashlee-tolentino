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

/**
   Task C: This function appends elements of the second vector into the first and then empties the second vector.
*/
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  for(int i = 0; i < vegeta.size(); i++) {
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

/**
   Task D: This function returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments. If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0.
*/
std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2) {
  std::vector<int> result;
  std::vector<int> bigger;
  if(v1.empty() == true && v2.empty() == true) {
    return result;
  }
  else if(v1.empty() == true) {
    result = v2;
    return result;
  }
  else if(v2.empty() == true) {
    result = v1;
    return result;
  }
  else if(v2.size() > v1.size()) {
    bigger = v2;
  }
  else {
    bigger = v1;
  }

  for(int i = 0; i < bigger.size(); i++) {
    result.push_back(v1[i] + v2[i]);
  }
  
  return result;
}
