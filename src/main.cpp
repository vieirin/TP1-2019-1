#include <iostream>
#include <domains/EventCode.hpp>
#include <string>

int main(int argc, char const *argv[])
{
    std::string code("233");
    EventCode event(code);
    std::cout << "hello world!" << code << std::endl;
    return 0;
}
