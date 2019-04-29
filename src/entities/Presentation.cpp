Presentation::Presentation(int amount, std::string code, float price,
                           int room) {
    avail       = Availability(amount);
    this->code  = PresentationCode(code);
    this->price = Price(price);
    this->room  = Room(room);
}