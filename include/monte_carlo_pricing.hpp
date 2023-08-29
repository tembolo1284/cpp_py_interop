#ifndef MONTE_CARLO_PRICING_HPP
#define MONTE_CARLO_PRICING_H

#include "options_pricing.hpp"

class MonteCarloPricing : public PricingStrategy {
public:
    double calculateOptionPrice(double spotPrice, double strikePrice, double volatility, double riskFreeRate, double maturity);
};

#endif // MONTE_CARLO_PRICING_HPP
