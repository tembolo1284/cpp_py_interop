import options_pricing

# Create strategy instances
monte_carlo_strategy = options_pricing.MonteCarloPricing()
finite_difference_strategy = options_pricing.FiniteDifferencePricing()

# Example usage
spot_price = 100.0
strike_price = 100.0
volatility = 0.2
risk_free_rate = 0.05
maturity = 1.0

monte_carlo_price = monte_carlo_strategy.calculate_option_price(
    spot_price, strike_price, volatility, risk_free_rate, maturity)

finite_difference_price = finite_difference_strategy.calculate_option_price(
    spot_price, strike_price, volatility, risk_free_rate, maturity)

print("Monte Carlo Option Price:", monte_carlo_price)
print("Finite Difference Option Price:", finite_difference_price)
