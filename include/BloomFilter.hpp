#ifndef BLOOM_FILTER_H
#define BLOOM_FILTER_H

#include <string>
#include <vector>

class BloomFilter
{
	std::vector<bool> filter;
	int size;	

	public:
		static const int DEFAULT_SIZE = 1000;	

		/* constructors */
		BloomFilter();
		BloomFilter(int size);

		/* helper hash functions */
		int hash1(std::string s);
		int hash2(std::string s);
		int hash3(std::string s);

		/* add an element to the filter */
		void add(std::string s);
		
		/* query for an element */
		bool query(std::string s);
};

#endif
