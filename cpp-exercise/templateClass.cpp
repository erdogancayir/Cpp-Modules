#include "iostream"

using namespace std;

template < class Type>
class Number{
    private:
        Type data;
    public:
        Number(Type value = 0){
            data = value;
        }
        Type getData(){
            return (data);
        }
        Type operator+(const Number &obj);
};

template <class Type>
Type Number<Type>::operator+(const Number &obj)
{
    return (this->data + obj.data);
}

int main()
{
    Number<int> numberInt(5);
    Number<float> numberFloat(5.5f);
    Number<double> numberDouble(7.5);

    cout << "Integer: " << numberInt.getData() << endl;
    cout << "Float: " << numberFloat.getData() << endl;
    cout << "Double: " << numberDouble.getData() << endl;

    Number<int> numberInt2(6);
    Number<float> numberFloat2(5.5f);
    Number<double> numberDouble2(3.5);

    cout << "Result Int: " << numberInt + numberInt2 << endl;
    cout << "Result Float: " << numberFloat + numberFloat2 << endl;
    cout << "Result Double: " << numberDouble2 + numberDouble << endl;
} 