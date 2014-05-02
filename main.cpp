#include <string>
#include <iostream>
#include <sstream>
#include "toyfs.hpp"

#define PRMPT "sh> "

int test_fs(const std::string filename) {
    ToyFS(filename, 100000, 1024);
    return 0;
}

void repl(const std::string filename) {
    using namespace std;
    
    ToyFS(filename, 100000, 1024);

    string cmd;
    vector<string> args;
    string token;
    
    cout << PRMPT;
    while(getline(cin, cmd)) {
        args.clear();
        istringstream iss(cmd);
        while (iss >> token) { args.push_back(token); }
        if(args.size() == 0) {
            cout << PRMPT;
            continue;
        }

        if(args[0] == "mkfs") {
        } else if(args[0] == "open") {
        } else if(args[0] == "read") {
        } else if(args[0] == "write") {
        } else if(args[0] == "seek") {
        } else if(args[0] == "close") {
        } else if(args[0] == "mkdir") {
        } else if(args[0] == "rmdir") {
        } else if(args[0] == "cd") {
        } else if(args[0] == "link") {
        } else if(args[0] == "unlink") {
        } else if(args[0] == "stat") {
        } else if(args[0] == "ls") {
        } else if(args[0] == "cat") {
        } else if(args[0] == "cp") {
        } else if(args[0] == "tree") {
        } else if(args[0] == "import") {
        } else if(args[0] == "export") {
        } else {
            std::cout << "unknown command: " << args[0] << std::endl;
        }
        cout << PRMPT;
    }

}

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cerr << "usage: " << argv[0] << " filename" << std::endl;
        return 1;
    }

#ifdef DEBUG
    test_fs(std::string(argv[1]));
#else
    repl(std::string(argv[1]));
#endif
    return 0;
}

