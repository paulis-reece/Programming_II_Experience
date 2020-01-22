#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class CounterType {
	public:
		CounterType();
		CounterType(int count);
		void setCount(int count);
		void increase() { ++count; }
		void decrease();
		int getCount() const { return count; }
		void printCount() const;
        void countSet(){sharedCount++;};
     int static shareCount();
	private:
        int identifier;
		int count;
        int static sharedCount;
};

#endif
