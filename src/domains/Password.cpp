#include <domains/Password.hpp>

Password::Password(std::string passwd) {
    // reference
    // https://www.thepolyglotdeveloper.com/2015/05/use-regex-to-test-password-strength-in-javascript/
    auto expression =
        std::regex("^(?=.*\\d)(?=.*[a-z])(?=.*[A-Z])(?!.*(.).*\1).{6}$");
    if (!std::regex_match(passwd, expression))
        throw std::invalid_argument(
            "Password must contain at least a Capital "
            "letter, a lower letter and a number, and no repeated digits");
    password = passwd;
}

std::string Password::getPassword() { return password; }