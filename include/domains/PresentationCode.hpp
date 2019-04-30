#ifndef _PRESENTATION_CODE_H
#define _PRESENTATION_CODE_H

#include <regex>
#include <string>

/** PresentationCode defines a domain class that composes a Presentation, if
 * code is invalid or bad formatted then it throws a invalid_argument exception
 * */
class PresentationCode {
  private:
    std::string code;

  public:
    PresentationCode(std::string code);
    void setPresentationCode(std::string code);
};

#endif