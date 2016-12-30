#include "Client.h"
#include <stdio.h>
#include "PacketType.h"
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>

Client::Client() {
}

Client::Client(const Client& orig) {
}

Client::~Client() {
}

void Client::connect(){
    printf("connecting\n");
}

sf::Socket::Status Client::connect(const sf::IpAddress & IP, unsigned short port)
{
	//connect to server
	sf::Socket::Status stat= me.connect(IP, port);
	me.setBlocking(false);
	return stat;
}

sf::Socket::Status Client::send (PacketType type, const std::string & msg)
{
	sf::Packet packet;
	packet<<type<<msg;
	return me.send(packet);
}

sf::Socket::Status Client::receive(std::string & msg)
{
	sf::Packet packet;
	sf::Socket::Status status=me.receive(packet);
	PacketType type;
	packet>>type;
	if(status==sf::Socket::Done)
	{
		std::cout<<msg<<"\n";
		packet>>msg;
	}
	return status;
}

