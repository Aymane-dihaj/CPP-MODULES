#ifndef ICE_HPP
# define ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice(const Ice& other);
        Ice&    operator=(const Ice& other);
        Ice     *clone() const;
        std::string const& getType() const;
        void    use(ICharacter & target);
};

#endif