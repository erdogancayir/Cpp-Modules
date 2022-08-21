#include "zombie.hpp"

zombie *zombieHorde(int N, std::string name)
{
	zombie *res;

	res = new zombie[N];
	for (int i = 0; i < N; i++){
		res[i].set_name(name);
		res[i].announce();
	}
	return (res);
}