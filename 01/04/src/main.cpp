/* ************************************************************************************************ */
/*                                                                                                  */
/*    File Name  : main.cpp                          ███████╗███████╗██╗██╗    ██╗   ██╗            */
/*                                                   ██╔════╝██╔════╝██║██║    ██║   ██║            */
/*    Author     : RomThpt <r██@edu.devinci.fr>      █████╗  ███████╗██║██║    ██║   ██║            */
/*    Created    : 2025/05/30 18:33:07               ██╔══╝  ╚════██║██║██║    ╚██╗ ██╔╝            */
/*    Updated    : 2025/05/30 18:33:07               ███████╗███████║██║███████╗╚████╔╝             */
/*                                                   ╚══════╝╚══════╝╚═╝╚══════╝ ╚═══╝              */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "../includes/main.hpp" 

void checkInput(int argc, char** argv, std::ifstream &inFile, std::ofstream &outFile) {

    std::string inputPath;

    if (argc != 4){
        std::cout << E_USAGE << std::endl;
        exit(EXIT_SUCCESS);
    }
    inputPath = argv[1];
    inFile.open(inputPath.c_str());
    if (!inFile.is_open()) {
        std::cout << E_OPENI  << std::endl;
        exit(EXIT_SUCCESS);
    }
    outFile.open(inputPath.append(".replace").c_str());
    if (!outFile.is_open()){
        std::cout << E_OPENO << std::endl;
        inFile.close();
        exit(EXIT_SUCCESS);
    }
}



std::string fileToString(std::ifstream &inFile){

    std::string str;
    std::string line;

    while (std::getline(inFile, line)){
        str.append(line);
        std::cout<< line<< std::endl;
        str.append("\n");
    };
    std::cout << "File copied successfully.\n";

    inFile.close();
    return str;

}


void replace_str(std::string const str1,std::string const str2, std::string &str3){
    int index=0;

    while(index!=std::string::npos){
        index = str3.find(str1);
        if(index != std::string::npos)
        {
            str3.erase(index, str1.length());
            str3.insert(index, str2);
        }
    }

}


int main(int argc, char** argv) {

    std::string str1;
    std::string str2;
    std::string str3;

    std::ifstream inFile;
    std::ofstream outFile;

    checkInput(argc, argv, inFile, outFile);

    str1= argv[2];
    str2 = argv[3];
    str3 = fileToString(inFile);
    
    replace_str(str1, str2, str3);
    outFile << str3 ;

    inFile.close();
    outFile.close();
    exit(EXIT_SUCCESS);
};