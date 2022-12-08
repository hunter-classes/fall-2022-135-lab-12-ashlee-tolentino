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

int main()
{
  // Task A
  std::cout << "Task A\n\n";
  std::vector<int> v1 = makeVector(10);
  for(int i = 0; i < v1.size(); i++) {
    std::cout << v1[i] << std::endl;
  }

  // Task B

  
  return 0;
}
