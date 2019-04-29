#include <cctype>
#include <domains/State.hpp>

State::State(std::string state) { setState(state); }
void State::setState(std::string state) {
    std::regex regex_state("^[A-Z]{2}");
    std::smatch match;
    if (std::regex_match(state, match, regex_state)) {
        if ((state.compare("AC") == 0) || (state.compare("MG") == 0) ||
            (state.compare("AL") == 0) || (state.compare("PA") == 0) ||
            (state.compare("AP") == 0) || (state.compare("PB") == 0) ||
            (state.compare("AM") == 0) || (state.compare("PR") == 0) ||
            (state.compare("BA") == 0) || (state.compare("PE") == 0) ||
            (state.compare("CE") == 0) || (state.compare("PI") == 0) ||
            (state.compare("DF") == 0) || (state.compare("RJ") == 0) ||
            (state.compare("ES") == 0) || (state.compare("RN") == 0) ||
            (state.compare("GO") == 0) || (state.compare("RS") == 0) ||
            (state.compare("MA") == 0) || (state.compare("RO") == 0) ||
            (state.compare("MT") == 0) || (state.compare("RR") == 0) ||
            (state.compare("MS") == 0) || (state.compare("SC") == 0) ||
            (state.compare("SP") == 0) || (state.compare("SE") == 0) ||
            (state.compare("TO"))) {
            this->state = state;
        } else
            this->state = state;
    } else {
        throw std::invalid_argument("State must be of type XXX");
    }
}
