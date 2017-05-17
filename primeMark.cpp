#include <iostream>
#include <cstdlib>
#include <thread>
#include <time.h>

int main(int argc, char ** argv){
	double target = double(atoi(argv[1]));
	double startTime = time(NULL);
	for(int i = 2; i < target; i++){
		bool foundPrime = true;
		for(int n = 2; n < i; n++){
			if(i % n == 0){
				foundPrime = false;
				break;
			}
		}
		if(foundPrime){
			std::cout << i << std::endl;
		}
	}
	double endTime = time(NULL);
	double duration = endTime - startTime;
	std::cout << "done in " << duration << "s" << std::endl;
	return 0;
}