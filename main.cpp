#include "Server.hpp"

int main(int argc, char **argv)
{
    if(argc != 3){

        std::cout << "please retry with /ircserv <port> <password>" << std::endl;
        return(0);
    }
    Server serv(std::atoi(argv[1]), argv[2]);
    std::cout << "---Server---" << std::endl;
    try
    {
        serv.initializeServer();
    }
    catch(const std::exception& e)
    {
        serv.closeFd();
        std::cerr << e.what() << std::endl;
    }
    std::cout << "The server closed" << std::endl;
}