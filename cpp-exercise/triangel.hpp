#ifndef TRIANGEL_H
# define TRIANGEL_H

#include "string"
#include "iostream"

using namespace std;

class triangel
{
	public:
		triangel(float a, float b, float c);
		~triangel();
		triangel(const triangel &oth);
		bool is_triangel(float a, float b, float c);
	private:
		float sideA, sideB, sideC;
};

triangel::~triangel(){
	cout << "triangel destroyed" << endl;
}

triangel::triangel(const triangel &oth)
{
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "triangel copied to targer." << endl;
}

triangel::triangel(float a, float b, float c)
{
	while (!is_triangel(a, b, c)){
		cout << "please enter the sides(a, b, c)" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
	cout << "triangel created" << endl;
}

bool triangel::is_triangel(float a, float b, float c)
{
	if (!(abs(a - b) < c && c < a + b &&
		abs(a - c) < b && b < a + c &&
		abs(b - c) < a && a < b + c))
		return (false);
	return (true);
}

#endif