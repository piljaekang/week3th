#include "Array.h"
class RangeArray : public Array {
protected:
	int low = 0;
	int high = 0;
public:
	RangeArray(int, int);
	~RangeArray();
	int baseValue();
	int endValue();
	int& operator[](int);
	int operator[](int) const;
	RangeArray();
	void print();
};
