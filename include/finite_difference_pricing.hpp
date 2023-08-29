#ifndef FINITE_DIFFERENCE_PRICING_HPP
#define FINITE_DIFFERENCE_PRICING_HPP

#include "options_pricing.hpp"

class FiniteDifferencePricing : public PricingStrategy {
public:
    double calculateOptionPrice(double spotPrice, double strikePrice, double volatility, double riskFreeRate, double maturity);
};

#endif //FINITE_DIFFERENCE_PRICING_HPP