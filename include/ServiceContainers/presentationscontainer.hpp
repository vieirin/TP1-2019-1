#ifndef PRESENTATIONSCONTAINER_HPP
#define PRESENTATIONSCONTAINER_HPP

#include <ServiceInterface.h>

class PresentationsContainer : ServiceInterface::IPresentation {
private:
    std::map<std::string, std::shared_ptr<Presentation>> presentation_pool;
public:
    PresentationsContainer();
    bool CreatePresentation(int amount, std::string code, float price, int room,
                            std::string date, std::string time);
    std::shared_ptr<Presentation> GetPresentation(std::string code);
    ~PresentationsContainer();
};

#endif // PRESENTATIONSCONTAINER_HPP
