#include <domains/CPF.hpp>
#include <iostream>

CPF::CPF(std::string cpf) { setCPF(cpf); }

void CPF::setCPF(std::string cpf) {
    auto cpfexpr = std::regex("[0-9]{3}.[0-9]{3}.[0-9]{3}-[0-9]{2}");
    if (!std::regex_match(cpf, cpfexpr)) {
        throw std::invalid_argument("CPF must match XXX.XXX.XXX-XX pattern");
    }

    // This removes both '.' from cpf
    auto cpfNoDots = cpf;
    cpfNoDots.erase(std::remove(cpfNoDots.begin(), cpfNoDots.end(), '.'),
                    cpfNoDots.end());

    if (!isFirstDigitValid(cpfNoDots))
        throw std::invalid_argument("CPF didn't pass first digit validation");
    if (!isSecondDigitValid(cpfNoDots))
        throw std::invalid_argument("CPF didn't pass second digit validation");

    this->cpf = cpf;
}

// Ref: https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/
bool CPF::isFirstDigitValid(std::string cpf) {
    if (cpf.find('.') != std::string::npos)
        throw std::invalid_argument(
            "Dots are not allowed in this function, please remove it");

    auto separator = cpf.find('-');
    if (separator == std::string::npos)
        throw std::invalid_argument(
            "Verification digits must be separated by '-' from numbers");

    auto numericSlice           = cpf.substr(0, separator);
    auto firstVerificationDigit = cpf[separator + 1] - '0';

    int multiplier = 10;
    int sum        = 0;
    for (auto digit : numericSlice) {
        auto intDigit = std::atoi(&digit);
        sum += intDigit * multiplier;
        multiplier--;
    }
    return (sum * 10) % 11 == firstVerificationDigit;
}

// Ref: https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/
bool CPF::isSecondDigitValid(std::string cpf) {
    if (cpf.find('.') != std::string::npos)
        throw std::invalid_argument(
            "Dots are not allowed in this function, please remove it");

    auto separator = cpf.find('-');
    if (separator == std::string::npos)
        throw std::invalid_argument(
            "Verification digits must be separated by '-' from numbers");

    // Once '-' position is found we can remove it
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    auto numericSlice = cpf.substr(0, separator);
    numericSlice += cpf[separator];
    auto secondVerificationDigit = cpf[separator + 1] - '0';

    int multiplier = 11;
    int sum        = 0;
    cpf.pop_back();
    for (auto digit : cpf) {
        auto intDigit = std::atoi(&digit);
        sum += intDigit * multiplier;
        multiplier--;
    }
    return (sum * 10) % 11 == secondVerificationDigit;
}