#include "source.h"

sample::sample(){
	a = 0;
	b = 1.0;
}
sample::~sample(){

}

void sample::set_a(int arg){
	a=arg;
}


int sample::get_a(){
	return a;
}

void sample::set_b(double arg2){
	b = arg2;
}

double sample::get_b(){
	return b;
}