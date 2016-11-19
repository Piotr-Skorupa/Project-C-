#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Client.h"


int runClient(void){
        sf::IpAddress a2("127.0.0.1");
        std::string name;
	std::cout<<"What's your name: ";
	std::getline(std::cin, name);
	std::cout<<"\n";
	Client client(name);

	unsigned short port=8080;
	sf::Socket::Status status;
	status=client.connect(a2, port);
	
	if(status!=sf::Socket::Done)
	{
		std::cout<<"Sorry we couldn't connect\n";
		return -1;
	}
	client.send(INITIAL_NAME_DATA, name);
}
 

int main()
{
  //  runClient();
    
     // making window :
    sf::RenderWindow window(sf::VideoMode(400, 800), "Paplanina v1.0");
    
    // adding images :
    sf::Texture background; //background
    background.loadFromFile("resources/back.png");
    sf::Texture but2; // client button
    but2.loadFromFile("resources/client.png");
    
    
    // creating sprites: 
    
    sf::Sprite spriteb; 
    spriteb.setTexture(background);
    spriteb.setPosition(0, 0);
    sf::Sprite buton2;
    buton2.setTexture(but2);
    buton2.setPosition(115, 200);
    
    
    
    // program main loop:
    
    while (window.isOpen())
    {
        
        
        sf::Event event;
        while (window.pollEvent(event))
        {   
            sf::Mouse::setPosition(sf::Vector2i(400, 800), window);
            
            if (event.type == sf::Event::Closed)
                window.close();
            
            sf::Vector2i position = sf::Mouse::getPosition();
            std::cout<<position.x<<std::endl;
            
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && position.x>=buton2.getPosition().x)
            {std::cout<<"Wcisnieto lewy klawisz"<<std::endl;
                //runClient();
            }
        }
        
        window.clear();
        window.draw(spriteb);
        window.draw(buton2);
        window.display();
        
    }
    return 0;
}

