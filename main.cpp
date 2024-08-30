#include "header.h"
auto main() -> int{
User user("nest", "qwerty1234");
Message message("player", "play");
user.readFile(user);
message.readFile(message);
user.writeInFile(user);
message.writeInFile(message);
}
