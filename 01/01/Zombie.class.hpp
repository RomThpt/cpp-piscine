/* ************************************************************************************* */
/*                                                                                       */
/*    File Name  : Zombie.class.hpp                  ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║ */
/*    Created    : 2025/05/30 08:03:34               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*    Updated    : 2025/05/30 08:03:34               ███████╗███████║██║███████╗╚████╔╝  */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                       */
/* ************************************************************************************* */
# ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
#include <string>

class Zombie{

    public: 
        Zombie(void);
        Zombie( const std::string &name);
        ~Zombie(void);
        std::string getName(void) const;
        std::string setName(std::string name);
        void announce( void ) const;

    private:
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif