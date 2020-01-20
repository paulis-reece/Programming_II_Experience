#include <iostream> 	// for cin and cout
#include "CounterType.h"
using namespace std;


CounterType::CounterType(){
    count = 5;
}

CounterType::CounterType(int number){
count = 10;
}
void CounterType::setCount(int newCount) {
	if (newCount < 0) {
		count = 0;
	} else {
		count = newCount;
	}
}

void CounterType::decrease() {
	if (--count < 0) {
		count = 0;
	}
}

void CounterType::printCount() const {
	cout << count;
}



