#include <ServiceContainers/presentationscontainer.hpp>


PresentationsContainer::PresentationsContainer() {

}

bool PresentationsContainer::CreatePresentation(int amount, std::string code, float price, int room, std::string date, std::string time) {
    try {
        std::shared_ptr<Presentation> presentation = std::make_shared<Presentation>(amount, code, price, room, date, time);
        this->presentation_pool[code] = presentation;
    } catch (std::exception &e) {
        std::cerr << e.what();
        return false;
    }
    return true;
}

std::shared_ptr<Presentation> PresentationsContainer::GetPresentation(std::string code) {
    auto it = presentation_pool.find(code);
    if (it == presentation_pool.end()) return nullptr;
    return presentation_pool.at(code);
}

PresentationsContainer::~PresentationsContainer() {
}
