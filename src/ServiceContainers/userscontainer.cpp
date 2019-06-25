#include <ServiceContainers/userscontainer.hpp>

UsersContainer::UsersContainer() {
    signed_user = nullptr;
}

bool UsersContainer::Delete(std::string cpf) {
    try {
        auto it = user_pool.find(cpf);
        user_pool.erase(it);
    } catch (std::exception& e) {
        std::cerr << e.what();
        return false;
    }
    return true;
}

bool UsersContainer::SignUp(std::string cpfNumber, std::string pwd, std::shared_ptr<CreditCard> credit_card) {
    try {
        auto user = std::make_shared<User>(cpfNumber, pwd, credit_card);
        user_pool[cpfNumber] = user;
    } catch (std::exception &e) {
        std::cerr << e.what();
        return false;
    }
    return true;
}

bool UsersContainer::SignIn(std::string cpf, std::string pwd) {
   auto it = user_pool.find(cpf);
   if (it == user_pool.end())
       return false;
   auto user = it->second;
   if (user->checkPassword(pwd)) {
       signed_user = user;
       return true;
   }
   return false;
}

std::shared_ptr<User> UsersContainer::Search(std::string cpf) {
    auto it = user_pool.find(cpf);
    if (it == user_pool.end())
        return nullptr;
    auto user = it->second;
    return user;
}

std::string UsersContainer::LoggedUser() {
    if (signed_user != nullptr) {
        return signed_user->getCPFNumber();
    }
    return "";
}
