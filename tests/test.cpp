#include "../include/BloomFilter.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s = "ABC";
	BloomFilter b(100);
	b.add(s);
	cout<<b.query(s)<<endl;
	cout<<b.query("BAC")<<"\n";
	cout<<b.query("PL")<<endl;
	b.add("BNS");
	cout<<b.query("BNS")<<endl;
	return 0;
}
