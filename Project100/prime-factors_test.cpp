#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	
	EXPECT_EQ(expected, prime_factor.of(1));
}
