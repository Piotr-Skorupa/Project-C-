#include "MessageBox.h"
#include "ChatBox.h"
#include "Client.h"
#include "PacketType.h"
#include <stdio.h>
#include <iostream>
#include <SFML/Audio.hpp>
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
    
    buffer.loadFromFile("resources/mess.wav");
    message.setBuffer(buffer);
    
    
    
    rectangle1.setSize(sf::Vector2f(580, 490));
    rectangle1.setFillColor(sf::Color::Cyan);
    rectangle1.setOutlineColor(sf::Color::Black);
    rectangle1.setOutlineThickness(5);
    rectangle1.setPosition(10, 10);

    rectangle2.setSize(sf::Vector2f(580, 50));
    rectangle2.setFillColor(sf::Color::Cyan);
    rectangle2.setOutlineColor(sf::Color::Black);
    rectangle2.setOutlineThickness(5);
    rectangle2.setPosition(10, 525);

    font1.loadFromFile("resources/czcionka.ttf");
    wsk.setFont(font1);
    wsk.setCharacterSize(20);
    wsk.setColor(sf::Color::Red);
    wsk.setString("Wcisnij Enter aby wyslac wiadomosc");
    wsk.setPosition(10, 500);

    wpis.setFont(font1);
    wpis.setCharacterSize(24);
    wpis.setColor(sf::Color::Black);
    wpis.setPosition(10, 530);

    napis1.setFont(font1);
    napis1.setCharacterSize(24);
    napis1.setColor(sf::Color::Red);
    napis1.setPosition(10, 10);

    napis2.setFont(font1);
    napis2.setCharacterSize(24);
    napis2.setColor(sf::Color::Red);
    napis2.setPosition(10, 38);

    napis3.setFont(font1);
    napis3.setCharacterSize(24);
    napis3.setColor(sf::Color::Red);
    napis3.setPosition(10, 66);

    napis4.setFont(font1);
    napis4.setCharacterSize(24);
    napis4.setColor(sf::Color::Red);
    napis4.setPosition(10, 94);

    napis5.setFont(font1);
    napis5.setCharacterSize(24);
    napis5.setColor(sf::Color::Red);
    napis5.setPosition(10, 122);

    napis6.setFont(font1);
    napis6.setCharacterSize(24);
    napis6.setColor(sf::Color::Red);
    napis6.setPosition(10, 150);

    napis7.setFont(font1);
    napis7.setCharacterSize(24);
    napis7.setColor(sf::Color::Red);
    napis7.setPosition(10, 178);

    napis8.setFont(font1);
    napis8.setCharacterSize(24);
    napis8.setColor(sf::Color::Red);
    napis8.setPosition(10, 206);

    napis9.setFont(font1);
    napis9.setCharacterSize(24);
    napis9.setColor(sf::Color::Red);
    napis9.setPosition(10, 234);

    napis10.setFont(font1);
    napis10.setCharacterSize(24);
    napis10.setColor(sf::Color::Red);
    napis10.setPosition(10, 262);

    napis11.setFont(font1);
    napis11.setCharacterSize(24);
    napis11.setColor(sf::Color::Red);
    napis11.setPosition(10, 290);

    napis12.setFont(font1);
    napis12.setCharacterSize(24);
    napis12.setColor(sf::Color::Red);
    napis12.setPosition(10, 318);

    napis13.setFont(font1);
    napis13.setCharacterSize(24);
    napis13.setColor(sf::Color::Red);
    napis13.setPosition(10, 346);

    napis14.setFont(font1);
    napis14.setCharacterSize(24);
    napis14.setColor(sf::Color::Red);
    napis14.setPosition(10, 374);

    napis15.setFont(font1);
    napis15.setCharacterSize(24);
    napis15.setColor(sf::Color::Red);
    napis15.setPosition(10, 402);

    napis16.setFont(font1);
    napis16.setCharacterSize(24);
    napis16.setColor(sf::Color::Red);
    napis16.setPosition(10, 430);

    napis17.setFont(font1);
    napis17.setCharacterSize(24);
    napis17.setColor(sf::Color::Red);
    napis17.setPosition(10, 458);

    while (window2.isOpen()) {
        sf::Event event;
        (*status) = (*client).receive(*potrzebne);

        if ((*potrzebne).size() > 0) {
            if (tresci[0].size() == 0) {
                tresci[0] = (*potrzebne);
                napis1.setString(tresci[0]);
            } else if (tresci[1].size() == 0) {
                tresci[1] = (*potrzebne);
                napis2.setString(tresci[1]);
            } else if (tresci[2].size() == 0) {
                tresci[2] = (*potrzebne);
                napis3.setString(tresci[2]);
            } else if (tresci[3].size() == 0) {
                tresci[3] = (*potrzebne);
                napis4.setString(tresci[3]);
            } else if (tresci[4].size() == 0) {
                tresci[4] = (*potrzebne);
                napis5.setString(tresci[4]);
            } else if (tresci[5].size() == 0) {
                tresci[5] = (*potrzebne);
                napis6.setString(tresci[5]);
            } else if (tresci[6].size() == 0) {
                tresci[6] = (*potrzebne);
                napis7.setString(tresci[6]);
            } else if (tresci[7].size() == 0) {
                tresci[7] = (*potrzebne);
                napis8.setString(tresci[7]);
            } else if (tresci[8].size() == 0) {
                tresci[8] = (*potrzebne);
                napis9.setString(tresci[8]);
            } else if (tresci[9].size() == 0) {
                tresci[9] = (*potrzebne);
                napis10.setString(tresci[9]);
            } else if (tresci[10].size() == 0) {
                tresci[10] = (*potrzebne);
                napis11.setString(tresci[10]);
            } else if (tresci[11].size() == 0) {
                tresci[11] = (*potrzebne);
                napis12.setString(tresci[11]);
            } else if (tresci[12].size() == 0) {
                tresci[12] = (*potrzebne);
                napis13.setString(tresci[12]);
            } else if (tresci[13].size() == 0) {
                tresci[13] = (*potrzebne);
                napis14.setString(tresci[13]);
            } else if (tresci[14].size() == 0) {
                tresci[14] = (*potrzebne);
                napis15.setString(tresci[14]);
            } else if (tresci[15].size() == 0) {
                tresci[15] = (*potrzebne);
                napis16.setString(tresci[15]);
            } else if (tresci[16].size() == 0) {
                tresci[16] = (*potrzebne);
                napis17.setString(tresci[16]);
            } else if (tresci[16].size() != 0) {
                tresci[0] = "";
                tresci[1] = "";
                tresci[2] = "";
                tresci[3] = "";
                tresci[4] = "";
                tresci[5] = "";
                tresci[6] = "";
                tresci[7] = "";
                tresci[8] = "";
                tresci[9] = "";
                tresci[10] = "";
                tresci[11] = "";
                tresci[12] = "";
                tresci[13] = "";
                tresci[14] = "";
                tresci[15] = "";
                tresci[16] = "";

                napis1.setString("");
                napis2.setString("");
                napis3.setString("");
                napis4.setString("");
                napis5.setString("");
                napis6.setString("");
                napis7.setString("");
                napis8.setString("");
                napis9.setString("");
                napis10.setString("");
                napis11.setString("");
                napis12.setString("");
                napis13.setString("");
                napis14.setString("");
                napis15.setString("");
                napis16.setString("");
                napis17.setString("");

                tresci[0] = (*potrzebne);
                napis1.setString(tresci[0]);
            }
            (*potrzebne) = "";
            message.play();
        }
        while (window2.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {

                window2.close();
                tresci[0] = "";
                tresci[1] = "";
                tresci[2] = "";
                tresci[3] = "";
                tresci[4] = "";
                tresci[5] = "";
                tresci[6] = "";
                tresci[7] = "";
                tresci[8] = "";
                tresci[9] = "";
                tresci[10] = "";
                tresci[11] = "";
                tresci[12] = "";
                tresci[13] = "";
                tresci[14] = "";
                tresci[15] = "";
                tresci[16] = "";

                napis1.setString("");
                napis2.setString("");
                napis3.setString("");
                napis4.setString("");
                napis5.setString("");
                napis6.setString("");
                napis7.setString("");
                napis8.setString("");
                napis9.setString("");
                napis10.setString("");
                napis11.setString("");
                napis12.setString("");
                napis13.setString("");
                napis14.setString("");
                napis15.setString("");
                napis16.setString("");
                napis17.setString("");
            }
            if (event.type == sf::Event::TextEntered && wiadomosc.size() <= 45) {
                char code = static_cast<char> (event.text.unicode);

                if (event.text.unicode == 13 && wiadomosc.size() != 0)//enter
                {
                    (*status) = (*client).send(GENERAL_MSG, wiadomosc);
                    (*status) = (*client).receive(*potrzebne);
                    wiadomosc = "";
                    wpis.setString(wiadomosc);
                    
                } else if (code != '\b') {
                    wiadomosc.push_back(code);
                    wpis.setString(wiadomosc);
                } else if (code == '\b') {
                    if (wiadomosc.size() > 0) {
                        wiadomosc.pop_back();
                        wpis.setString(wiadomosc);
                    } else {
                        wpis.setString(wiadomosc);
                    }

                }

            }


            window2.clear();
            window2.draw(rectangle1);
            window2.draw(rectangle2);
            window2.draw(wsk);
            window2.draw(wpis);
            window2.draw(napis1);
            window2.draw(napis2);
            window2.draw(napis3);
            window2.draw(napis4);
            window2.draw(napis5);
            window2.draw(napis6);
            window2.draw(napis7);
            window2.draw(napis8);
            window2.draw(napis9);
            window2.draw(napis10);
            window2.draw(napis11);
            window2.draw(napis12);
            window2.draw(napis13);
            window2.draw(napis14);
            window2.draw(napis15);
            window2.draw(napis16);
            window2.draw(napis17);
            window2.display();
        }

    }
}

