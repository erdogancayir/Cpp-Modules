#ifndef HARL_HPP
# define HARL_HPP

#include "iostream"

class harl{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain(std::string level);
};

#endif