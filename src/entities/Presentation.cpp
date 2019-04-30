Presentation::Presentation(int amount, std::string code, float price, int room,
                           std::string date, std::string startTime) {
    avail       = Availability(amount);
    this->code  = PresentationCode(code);
    this->price = Price(price);
    this->room  = Room(room);
}