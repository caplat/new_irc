#pragma once
#include "Server.hpp"

class Client{

    private :

        int fd_;

    public :

        Client();
        ~Client();

        int getFd()const;
        void setFd(int fd);

};