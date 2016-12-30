#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H
#include "Client.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class MessageBox {
public:
    
    sf::Font font1;   
    std::string wiadomosc;
    std::string toBePushed;
   
    
    MessageBox();
    
    MessageBox(const MessageBox& orig);
    virtual ~MessageBox();
    
    void run(Client * client,sf::Socket::Status * status, std::string name, std::string * potrzebne);
    
    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(PacketType type, const std::string & msg);
    sf::Socket::Status receive(std::string & msg);
private:
    

};

#endif 

