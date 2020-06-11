#include <vector>
#include <cstdlib>
#include <iostream>


std::vector <int> josephus(std::vector <int> items, int k);

int main() {

	josephus({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 1);

	system("PAUSE");
	return 0;
}

/*
Returns a josephus permutation, the function computes one by cutting out an int from a vector
argument every k steps and places that number inside the josephus permutation  
*/
std::vector <int> josephus(std::vector <int> items, int k) {
	std::vector <int> permutation;
	int counter = 0;
	
	

	while (items.size() != 0) {
		int i = 0;
		while (i <= k) {
			i++;
			counter++;
			if (counter >= items.size()) {
				counter = 0;
			}
		}

		std::cout << permutation.at(counter) << std::endl;

		permutation.push_back(items.at(counter));
		


	}
	

	return permutation;
}