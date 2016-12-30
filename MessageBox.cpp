#include "MessageBox.h"
#include "ChatBox.h"
#include "Client.h"
#include "PacketType.h"
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

MessageBox::MessageBox() {
}

MessageBox::MessageBox(const MessageBox& orig) {
}

MessageBox::~MessageBox() {
}

void MessageBox::run(Client * client, sf::Socket::Status *status, std::string name, std::string * potrzebne) {

    
    sf::RenderWindow window2(sf::VideoMode(600, 600), name);
    
    sf::RectangleShape rectangle1;
    rectangle1.setSize(sf::Vector2f(580, 490));
    rectangle1.setFillColor(sf::Color::Cyan);
    rectangle1.setOutlineColor(sf::Color::Black);
    rectangle1.setOutlineThickness(5);
    rectangle1.setPosition(10, 10);

    sf::RectangleShape rectangle2;
    rectangle2.setSize(sf::Vector2f(580, 50));
    rectangle2.setFillColor(sf::Color::Cyan);
    rectangle2.setOutlineColor(sf::Color::Black);
    rectangle2.setOutlineThickness(5);
    rectangle2.setPosition(10, 525);

    sf::Text wsk;
    font1.loadFromFile("resources/czcionka.ttf");
    wsk.setFont(font1);
    wsk.setCharacterSize(20);
    wsk.setColor(sf::Color::Red);
    wsk.setString("Wcisnij Enter aby wyslac wiadomosc");
    wsk.setPosition(10, 500);

    sf::Text wpis;
    wpis.setFont(font1);
    wpis.setCharacterSize(24);
    wpis.setColor(sf::Color::Black);
    wpis.setPosition(10,530);
    
    while (window2.isOpen()) {
        sf::Event event;
        
        while (window2.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window2.close();

            if (event.type == sf::Event::TextEntered && wiadomosc.size() <= 45) {
                char code = static_cast<char> (event.text.unicode);

                if (event.text.unicode == 13 && wiadomosc.size() != 0)//enter
                {
                    (*status) = (*client).send(GENERAL_MSG, wiadomosc);
                    (*status)= (*client).receive(*potrzebne);
                    
                   /*
                    if(status==sf::Socket::Error){
                        printf("error");
                    }
                    if(status==sf::Socket::Done){
                        printf("ok");
                    }
                    */                    
                    wiadomosc = "";
                    wpis.setString(wiadomosc);
                } else if (code != '\b') {
                    wiadomosc.push_back(code);
                    wpis.setString(wiadomosc);
                } else if (code == '\b') {
                    if (wiadomosc.size() > 0) {
                        wiadomosc.pop_back();
                        wpis.setString(wiadomosc);
                    }else {
                        wpis.setString(wiadomosc);
                    }

                }
               
            }
            
            (*status)=(*client).receive((*potrzebne));
            
            window2.clear();
            window2.draw(rectangle1);
            window2.draw(rectangle2);
            window2.draw(wsk);
            window2.draw(wpis);
            window2.display();
        }

    }
}

