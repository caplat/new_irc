#include "Client.hpp"

Client::Client(){}

Client::~Client(){}

int Client::getFd()const{

    return fd_;
}

void Client::setFd(int fd){

    fd_ = fd;
}

std::string Client::getBuffer()const{

    return buffer_;
}

void Client::setBuffer(std::string str){

    buffer_ = str;
}