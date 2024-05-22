#pragma once
#include "Server.hpp"

class Client{

    private :

        int fd_;
        std::string buffer_;

    public :

        Client();
        ~Client();

        int getFd()const;
        void setFd(int fd);

        std::string getBuffer()const;
        void setBuffer(std::string str);

};