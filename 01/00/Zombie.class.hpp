# ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

/* ********************************************************************************* */
/*                                                                                   */
/*   File Name  : Zombie.class.hpp               ███████╗███████╗██╗██╗    ██╗   ██╗ */
/*                                               ██╔════╝██╔════╝██║██║    ██║   ██║ */
/*   Author     : RomThpt <r██@edu.devinci.fr>   █████╗  ███████╗██║██║    ██║   ██║ */
/*   Created    : 2025/05/29 16:46:06            ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝ */
/*   Updated    : 2025/05/29 16:46:06            ███████╗███████║██║███████╗╚████╔╝  */
/*                                               ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝   */
/*                                                                                   */
/* ********************************************************************************* */

#include <string>

class Zombie{

    public: 
        Zombie( const std::string &name);
        ~Zombie(void);
        std::string getName(void) const;
        std::string setName(std::string name);
        void announce( void ) const;

    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif