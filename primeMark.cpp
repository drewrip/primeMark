#include <iostream>
#include <cstdlib>
#include <thread>
#include <time.h>
#include <fstream>

void prime(double limit){
	std::ofstream results;
	results.open("results.txt");
	for(int i = 1; i < limit; i++){
		bool foundPrime = true;
		for(int n = 2; n < i; n++){
			if(i % n == 0){
				foundPrime = false;
				break;
			}
		}
		if(foundPrime){
			results << i << std::endl;
		}
	}
}

int main(int argc, char ** argv){
	double target = double(atoi(argv[1]));
	double startTime = time(NULL);
	prime(target);
	double endTime = time(NULL);
	double duration = endTime - startTime;
	std::cout << "done in " << duration << "s" << std::endl;
	return 0;
}
