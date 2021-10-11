#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:

		Cat( void );
		Cat( Cat const &other );
		virtual ~Cat( void );

		Cat&	operator = ( Cat const &other );

		std::string		getType( void ) const;

		virtual void 	makeSound( void ) const;

	private:

		Brain*	CatBrain;

};

#endif
