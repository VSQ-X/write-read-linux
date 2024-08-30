#include "header.h"
void User::writeInFile(User& user){
	std::fstream file("status", std::ios::out);
	file << "Name: " <<user._name<<"\n";
	file << "Login: " <<user._login<<"\n";
	file << "Password: " <<user._pass<<"\n";
	file.close();
}
void Message::writeInFile(Message& message){
        std::fstream file("message", std::ios::out);
        file << "Text: " <<message._text<<"\n";
        file << "Sender: " <<message._sender<<"\n";
        file << "Receiver: " <<message._receiver<<"\n";
        file.close();
}
void User::readFile(User& user){
	std::fstream file("status", std::ios::in);
	auto prms=fs::perms::group_all | fs::perms::others_all;
	fs::permissions("status",prms, fs::perm_options::remove);
	file >> user._name >> user._login >> user._pass;
	user._name+="SSS";
	file.close();
}
void Message::readFile(Message& message){
        std::fstream file("message", std::ios::in);
        auto prms=fs::perms::group_all | fs::perms::others_all;
        fs::permissions("message",prms, fs::perm_options::remove);
        file >> message._text >> message._sender >> message._receiver;
	message._text+="Hello!";
        file.close();
}

