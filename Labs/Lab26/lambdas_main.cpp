//
//lambdas_main.cpp
//Harrison Moore
//CS201
//April 15, 2020
//

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.h"

int main()
{
	#include <cstdlib>
	#include <iostream>
	#include <utility>
	#include <vector>
	#include <string>
	#include <sstream>
	#include <iomanip>

	std::string printVectorPairs(
		std::vector<std::pair<std::size_t, std::string>>::iterator iter1,
		std::vector<std::pair<std::size_t, std::string>>::iterator iter2) {

		std::ostringstream output;
		int count = 1;
		while (iter1 != iter2)
		{
			output << std::setw(5) << std::left << count << "{ " << iter1->first
				<< ", " << iter1->second << " }" << std::endl;
			++iter1;
			++count;
		}
		return output.str();
}