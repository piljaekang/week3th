#ifndef __ARRAY__
#define __ARRAY__
templete <class T>
class Array {
	protected:
			  T* data;
		      int len;
	public:
			  Array();
		      Array(int size);
		      ~Array();
		      int length();
		      T& operator[](int i);
		      T operator[](int i) const;
		      void print();
};

#endif
