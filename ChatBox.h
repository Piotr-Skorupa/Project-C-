#ifndef CHATBOX_H
#define CHATBOX_H
#include "MessageBox.h"
#include "Client.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


class ChatBox {
public:
    //zmienne
    unsigned short port;
    sf::IpAddress adres;
    Client client;
    sf::Socket::Status status;
    MessageBox mbox;
    std::string potrzebne;
    std::string schowek;
    std::string name;
    std::string text1;
    std::string text2;
    sf::RectangleShape rectangle;
    sf::Text texto;
    sf::Font font;
    sf::Text login;
    sf::Text wskazowka;
    sf::Text wskazowka2;
    int stan_okna;
    
    //funkcje
    ChatBox();
    ChatBox(const ChatBox& orig);
    ~ChatBox();
    
    void run();
    
    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(PacketType type, const std::string & msg);
    sf::Socket::Status receive(std::string & msg);
private:

};

#endif /* CHATBOX_H */

