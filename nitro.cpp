#include <iostream>
#include <string>
#include <cstdio>
int main(int argc, char* argv[]){
    if (argc == 1) {
        std::cout << "\e[31mFatal error:\e[0m No input!" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        // Check if the argument starts with a "-"
        if (arg[0] == '-') {
            if (arg == "-h" || arg == "--help") {
                std::cout << "This is a simple C++ program that accepts command-line arguments." << std::endl;
            } else if (arg == "-v" || arg == "--version") {
                std::cout << "Program version 1.0.0" << std::endl;
            } else {
                std::cout << "Unknown option: " << arg << std::endl;
            }
        } else {
            try
            {
                FILE* f=fopen(argv[i],"r");
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            
            // Non-flag arguments (e.g., file paths or values)
            //std::cout << "Non-option argument: " << arg << std::endl;
        }
    }

    return 0;
}
