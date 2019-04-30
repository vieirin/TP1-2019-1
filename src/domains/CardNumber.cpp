#include <cctype>
#include <domains/CardNumber.hpp>
#include <iostream>

CardNumber::CardNumber(std::string number) { setCardNumber(number); }
void CardNumber::setCardNumber(std::string number) {
    std::regex code_regex("[0-9]{16}");
    std::smatch match;
    int sumTotal = 0;
    if (std::regex_match(number, match, code_regex)) {
        // verificaçao do numero de cartao de credito
        // uso do 1 for para encontrar as posiçoes pares da sequencia do cartao
        for (int contador = 0; contador <= 7; contador++) {
            int multiplex      = contador * 2;
            int operando       = std::stoi(number.substr(multiplex, 1));
            int resultadofase1 = operando * 2;
            if (resultadofase1 >= 10) {
                int sum = 0;
                int num = resultadofase1;
                while (num != 0) {
                    sum = sum + num % 10;
                    num = num / 10;
                }
                sumTotal += sum;
            } else {
                sumTotal += resultadofase1;
            }
        }

        for (int contador = 0; contador <= 7; contador++) {
            int operando = 0;

            int multiplex = (contador * 2) + 1;
            operando      = std::stoi(number.substr(multiplex, 1));
            sumTotal += operando;
        }

        if (sumTotal % 10 == 0) {
            this->number = number;
        } else {
            throw std::invalid_argument("Invalid Number");
        }

    } else {
        throw std::invalid_argument("Invalid format");
    }
}
