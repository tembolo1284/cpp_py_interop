#ifndef OPTIONS_PRICING_HPP
#define OPTIONS_PRICING_HPP

#include <iostream>
#include <cmath>
#include <vector>

// Abstract strategy class
class PricingStrategy {
public:
    virtual double calculateOptionPrice(double spotPrice, double strikePrice, double volatility, double riskFreeRate, double maturity) = 0;
};

#endif //OPTIONS_PRICING_HPP