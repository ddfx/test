#include <iostream>
#include "source_two.cpp"
using namespace std;

int main()
{
	list* one = new list();
	list* first = one;
	cout<<one->data->get_b()<<"\n";
	for (int i = 0; i < 5; i++){
		one->next = new list;
		one->data->set_a(i);
		one = one->next;
	}
	one = first;
	for (int i = 0; i < 5; i++){
		cout << i<<" "<<one->data->get_a() << "\n";
		one = one->next;
	}
	int g;
	cin >> g;
	return 0;
}

