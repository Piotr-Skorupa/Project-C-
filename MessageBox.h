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
    //zmienne
    sf::Font font1;
    std::string wiadomosc;
    std::string toBePushed;
    std::string tresci[18] = {}; //ilosc zmiennych do przechowywania linijek historii rozmowy
    sf::RectangleShape rectangle1;
    sf::RectangleShape rectangle2;
    sf::Text wsk;
    sf::Text wpis;
    sf::Text napis1;
    sf::Text napis2;
    sf::Text napis3;
    sf::Text napis4;
    sf::Text napis5;
    sf::Text napis6;
    sf::Text napis7;
    sf::Text napis8;
    sf::Text napis9;
    sf::Text napis10;
    sf::Text napis11;
    sf::Text napis12;
    sf::Text napis13;
    sf::Text napis14;
    sf::Text napis15;
    sf::Text napis16;
    sf::Text napis17;
    //funkcje
    MessageBox();
    MessageBox(const MessageBox& orig);
    virtual ~MessageBox();

    void run(Client * client, sf::Socket::Status * status, std::string name, std::string * potrzebne);
  
    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(PacketType type, const std::string & msg);
    sf::Socket::Status receive(std::string & msg);



};

#endif 

