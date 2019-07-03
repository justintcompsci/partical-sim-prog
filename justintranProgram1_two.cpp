#include <iostream>
#include <ctime>

using namespace std;


int main() {

	int particles = 1000,
		direction,
		oldDirection,
		collision,
		forward;
	double escape = 0;

	srand(time(NULL));

	while (particles != 0) { // the intial of the simulation
		oldDirection = 0;
		collision = 0;
		forward = 0;

		while (collision < 10 && (forward >= 0 && forward < 6)) {//forward 6 positions without exceeding 10 collisions

			direction = rand() % 4 + 1; //the random gen from 1-4, directions are assigned by the constants in order to go forward one 
										// or backward one
			if (oldDirection != direction) {//comparing old direction to new direction
				collision++;
				oldDirection = direction;
			}
			if (direction == 1) {// the partical moves forward
				forward++;
			}
			if (direction == 2) {// the partical moves backward
				forward--;
			} 
			
			// right and left direction does not affect the direction of the exit position.

		}
		if (forward >= 6 && collision < 10) {
			++escape;
		}
		particles--;// partical disappears
	}

	cout << (escape / 1000 * (100)) << " % of the partical have escaped"<<endl;

	return 0;

}