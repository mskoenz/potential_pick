/** ****************************************************************************
 * \file
 * \brief      
 * \author
 * Year      | Name
 * --------: | :------------
 * 2016      | Mario S. Koenz
 * \copyright  todo
 ******************************************************************************/

#include <iostream>
#include <potential_pick.hpp>
#include <fsc/ArgParser.hpp>

int main(int argc, char * argv[]) {
    fsc::ArgParser ap(argc, argv);
    
    if(ap.is_set("v")) {
        std::cout << "1.1" << std::endl;
        return 0;
    }
        
    if(ap.is_set("p") or ap.is_set("param"))
        show_param();
    else
        std::cout << "no information to show" << std::endl;
    
    return 0;
}
