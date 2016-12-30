#ifndef CLIENT_H
#define CLIENT_H
#include <SFML/Network.hpp>
#include "PacketType.h"

class Client {
public:
    Client();
    Client(const Client& orig);
    virtual ~Client();
    
    void connect();
    void disonnect();
    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(PacketType type, const std::string & msg);
    sf::Socket::Status receive(std::string & msg);
    
private:
    sf::TcpSocket me;
};

#endif /* CLIENT_H */

