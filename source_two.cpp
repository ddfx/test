#include "source.h"
struct list{
	sample* data;
	list* next;

	list(){
		data = new sample();
	}
};