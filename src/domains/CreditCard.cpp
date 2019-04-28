#include <cctype>
#include <domains/CreditCard.hpp>

CreditCard::CreditCard(std::string number) { setCreditCard(number); }
void CreditCard::setCreditCard(std::string CreditCard) {
    std::regex code_regex("[0-9]{16}");
    std::smatch match;
    int sumTotal;
    if (std::regex_match(number, match, code_regex)) {
        // verificaçao do numero de cartao de credito
        // uso do 1 for para encontrar as posiçoes pares da sequencia do cartao
        for (int contador = 0; contador <= 7; contador++) {
            int multiplex      = contador * 2;
            int operando       = std::stoi(number.substr(multiplex, 1));
            int resultadofase1 = operando * 2;
            if (resultadofase1 >= 10) {
                int sum;
                int num = resultadofase1;
                while (num != 0) {
                    sum = sum + num % 10;
                    num = num / 10;
                }
                sumTotal = sum;
            }

            // std::replace(str.begin()+multiplex,str.begin()+multiplex+1,

            // uso do 2 for para encontrar as posiçoes impares da sequencia do
            // cartao
        }
        for (int contador2 = 0; contador2 <= 7; contador2++) {
            int operando2;

            int multiplex2 = (contador2 * 2) + 1;
            operando2      = std::stoi(number.substr(multiplex2, 1));
            sumTotal       = sumTotal + operando2;
        }
        if (sumTotal % 10 == 0) {
            this->number = number;
        } else {
            throw std::invalid_argument("CreditCard input must contain only "
                                        "letters and only 1 space between");
        }
    }
}
