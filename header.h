#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
namespace fs=std::filesystem;
class User {
	std::string _name;
	std::string _login;
	std::string _pass;
	public:
	void readFile(User&);
	void writeInFile(User&);
	User(std::string login, std::string pass):_login(login), _pass(pass) {}
};
class Message {
	std::string _text;
	std::string _sender;
	std::string _receiver;
	public:
	void readFile(Message&);
	void writeInFile(Message&);
	Message(std::string sender, std::string receiver):_sender(sender), _receiver(receiver) {}

};
