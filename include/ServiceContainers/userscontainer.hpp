#ifndef USERSCONTAINER_HPP
#define USERSCONTAINER_HPP
#include <ServiceInterface.h>
#include <entities/User.hpp>

class UsersContainer : ServiceInterface::IUser
{
private:
    std::map<std::string, std::shared_ptr<User>> user_pool;
    std::shared_ptr<User> signed_user;

public:
    UsersContainer();
    bool Delete(std::string cpf);
    bool SignUp(std::string cpf, std::string pwd);
    std::shared_ptr<User> Search(std::string cpf);
    bool SignIn(std::string cpf, std::string pwd);
    std::string LoggedUser();
};

#endif // USERSCONTAINER_HPP
