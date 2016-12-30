#ifndef CHATBOX_H
#define CHATBOX_H

#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "MessageBox.h"
#include "Client.h"
#include <iostream>

class ChatBox {
public:
    
    unsigned short port;
    sf::IpAddress adres;
    Client client;
    sf::Socket::Status status;
    MessageBox mbox;
    std::string potrzebne;
    
    ChatBox();
    ChatBox(const ChatBox& orig);
    virtual ~ChatBox();
    
    void run();
    
    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(PacketType type, const std::string & msg);
    sf::Socket::Status receive(std::string & msg);
private:

};

#endif /* CHATBOX_H */

