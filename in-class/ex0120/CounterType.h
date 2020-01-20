#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class CounterType {
	public:
		void setCount(int newCount);
		void increase() { ++count; }
		void decrease();
		int getCount() const { return count; }
		void printCount() const;
        CounterType();
        CounterType(int number);
	private:
		int count;
};

#endif
