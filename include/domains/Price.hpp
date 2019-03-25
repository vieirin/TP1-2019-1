#ifndef _Price_H_
#define _Price_H_

class Price
{
  private:
    float value;

  public:
    Price(float value);
    void setPrice(float value);
    float getPrice();
};

#endif