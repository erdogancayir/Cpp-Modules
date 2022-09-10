#ifndef ARR_HPP
# define ARR_HPP

#include "iostream"
#include "string"

using namespace std;

class arr{
	int *data, size, capacity;
	int findindex(int number, int b = 0);
public:
	arr(int user_capacity = 5);
	~arr();
	arr(const arr &oth);
	int get_size() const{ // const olma sebebi inputtan bağımsız olmasi
		return (size);
	}
	int get_capacity() const{
		return (capacity);
	}
	void	additem(int number);
	void	printitems();
	void	removeindex(int index);
	void	removeitem(int number);
	void	find_element(int number, int b = 0);
};

arr::arr(int user_capacity){
	capacity = user_capacity;
	data = new int[capacity];
	size = 0;
	cout << "Arr created capacity->" << capacity << endl;
}

arr::~arr(){
	delete[] data;
	cout << "Array destroyed" << endl;
}

arr::arr(const arr &copyarr){
	capacity = copyarr.capacity;
	size = copyarr.size;
	data = new int[capacity];
	for (int i = 0; i < size; i++){
		data[i] = copyarr.data[i];
	}
	cout << "Array copied" << endl; 	
}

void	arr::additem(int number){
	if (size == capacity){						// capacity ilk basta 5 kere eleman kelnenince size 5 olacak.
		int *temp_data = new int[capacity * 2];
		for (int i = 0; i < size; i++)
			temp_data[i] = data[i];
		delete[] data;
		data = temp_data;
		capacity *= 2;
	}
	data[size] = number;
	size++;
}

void	arr::printitems(){
	for (int i = 0;i < size; i++)
		cout << data[i] << "-";
	cout << "\n" << "capacity: " << capacity << "size: " << size << endl;
}

void	arr::removeindex(int index){
	if (index < 0 || index >= size){
		cout << "Error no item index" << index << endl;
		return ;
	}
	int removeitem = data[index];
	for (int i = index; i < size; i++){
		data[i] = data[i + 1];
	}
	size -= 1;
	cout << "item deledted: " << removeitem << endl;
}

void arr::removeitem(int number){
	int counter = 0;
	for (int i = 0; i <= size; i++){
		if (data[i] == number){
			for (int j = i; j < size; j++){
				data[j] = data[j + 1];
			}
			counter += 1;
			i -= 1; 
		}
	}
	cout << counter << "deleted item" << endl;
	size -= counter;
}
#endif