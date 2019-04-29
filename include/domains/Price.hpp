#ifndef _Price_H_
#define _Price_H_

/*Price is a domain class that the range that a event could cost - between 0 and
 * 1000 - */
class Price {
  private:
    float value;

  public:
    Price(float value);
    void setPrice(float value);
    float getPrice();
};

#endif