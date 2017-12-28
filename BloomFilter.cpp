#include "BloomFilter.h"
#include <cmath>
#include <iostream>
using namespace std;

BloomFilter::BloomFilter() {
	this->size = BloomFilter::DEFAULT_SIZE;
	this->filter.reserve(this->size);
}

BloomFilter::BloomFilter(int size) {
	this->size = size;
	this->filter.reserve(this->size);
}

int BloomFilter::hash1(string s) {
	// weighted sum of the  modulo filter size
	int i, sum = 0, weight=1;
	for(i=0; i<s.size(); i++) {
		sum = (int)((sum + weight*(long long)(s[i]))%this->size);
		weight = (2*weight)%this->size;
	}
	return sum;
}

int BloomFilter::hash2(string s) {
	// sum of squares of ASCII values over the string characters modulo filter size
	int i, sum = 0;
	for(i=0;i<s.size();i++) {
		sum = (int)((sum + (long long)pow((long long)(s[i]), 2))%this->size);
	}
	return sum;

}

int BloomFilter::hash3(string s) {
	// sum of cubes of ASCII values over the string characters modulo filter size
	int i, sum = 0;
	for(i=0; i<s.size();i++) {
		sum = (int)((sum + (long long)pow((long long)(s[i]), 3))%this->size);
	}
	return sum;
}

void BloomFilter::add(string s) {
	// fill up the filter with hash values of strings
	this->filter[hash1(s)] = true;
	this->filter[hash2(s)] = true;
	this->filter[hash3(s)] = true;
}

bool BloomFilter::query(string s) {
	return this->filter[hash1(s)] && this->filter[hash2(s)] && this->filter[hash3(s)];
}
