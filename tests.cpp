#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("Make Vector"){
  std::vector<int> v1 = makeVector(10);
  for(int i = 0; i < 10; i++) {
    CHECK((v1[i]) == i);
  }
}

TEST_CASE("Good Vibes"){
  std::vector<int> vect;
  vect.push_back(1);
  vect.push_back(2);
  vect.push_back(-1);
  vect.push_back(3);
  vect.push_back(4);
  vect.push_back(-1);
  vect.push_back(6);
  std::vector<int> v2 = goodVibes(vect);
  CHECK((v2[0] == 1));
  CHECK((v2[1] == 2));
  CHECK((v2[2] == 3));
  CHECK((v2[3] == 4));
  CHECK((v2[4] == 6));
}

TEST_CASE("Gogeta"){
  std::vector<int> v3;
  v3.push_back(1);
  v3.push_back(2);
  v3.push_back(3);
  std::vector<int> v4;
  v4.push_back(4);
  v4.push_back(5);
  gogeta(v3, v4);
  CHECK((v3[0] == 1));
  CHECK((v3[1] == 2));
  CHECK((v3[2] == 3));
  CHECK((v3[3] == 4));
  CHECK((v3[4] == 5));
  CHECK((v4.empty() == true));
}

TEST_CASE("Pairwise Sum"){
  std::vector<int> v5;
  v5.push_back(1);
  v5.push_back(2);
  v5.push_back(3);
  std::vector<int> v6;
  v6.push_back(4);
  v6.push_back(5);
  std::vector<int> result;
  result = sumPairWise(v5, v6);
  CHECK((result[0] == 5));
  CHECK((result[1] == 7));
  CHECK((result[2] == 3));

  std::vector<int> v7;
  std::vector<int> v8;
  std::vector<int> result2;
  result2 = sumPairWise(v7, v8);
  CHECK((result2.empty() == true));
}
