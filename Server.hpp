#pragma once
#include <iostream>
#include <vector>
#include <poll.h>
#include <cstdlib> // atoi
#include <netinet/in.h> // struct sockaddr_in
#include <stdexcept>
#include <cstring> // std::strerror
#include <fcntl.h>
#include <unistd.h> // close()
#include "Client.hpp"

class Client;

class Server{

    private :

        int port_;
        std::string password_;
        int server_fd_;
        std::vector <Client> clients_;
        std::vector <struct pollfd> fds_;

        public :

        Server(int port, std::string password);
        ~Server();

        void initializeServer();
        void createSocket();
        void acceptClient();
        void receiveData(int fd);
        void clearClients(int fd);
        void closeFd();
        Client* getClient(int fd);
        std::vector<std::string> separate_cmds(int fd);
};