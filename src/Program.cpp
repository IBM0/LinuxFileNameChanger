#include <iostream>
#include "RenameFiles.h"

int main(int argc, char **argv)
{
    std::cout << boldblue << "Change File Names For Linux" << reset << std::endl;
    std::cout << "Format: rename [path] [option]" << std::endl;
    std::cout << "Options: normal(default) & recursive\n"
              << std::endl;

    RenameFiles::ManageRenaming(argc, argv);
    return 0;
}