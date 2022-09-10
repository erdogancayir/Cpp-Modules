#include "iostream"

typedef struct sData
{
	int X;
	int Y;
}Data;

uintptr_t	serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t res){			//reinterpret_cast<>
	return (reinterpret_cast<Data *>(res)); // Her türlü gösterici türünü  her türlü  gösterici türüne çevirebilir Aslında basit olarak\
												//göstericinin diğer göstericiye binary olarak kopyalanmasıdır.
}

int main()
{
	Data data = {0, 1};

	Data *ptr = deserialize(serialize(&data));

	std::cout << ptr << " | " << &data << std::endl;
	std::cout << (ptr == &data ? "The same pointer" : "pointers are differ") << std::endl;

	std::cout << "x: " << ptr->X << std::endl;
	std::cout << "y: " << ptr->Y << std::endl;
}