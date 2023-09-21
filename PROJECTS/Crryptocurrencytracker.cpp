#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Structure to store cryptocurrency information
struct CryptoInfo {
    string name;
    double price;
    double quantity;
};

// Function to calculate the total portfolio value
double calculatePortfolioValue(const unordered_map<string, CryptoInfo>& portfolio) {
    double totalValue = 0.0;
    for (const auto& entry : portfolio) {
        totalValue += entry.second.price * entry.second.quantity;
    }
    return totalValue;
}

int main() {
    // Create a hash map to store cryptocurrency information
    unordered_map<string, CryptoInfo> portfolio;

    // Add cryptocurrencies to the portfolio
    portfolio["BTC"] = {"Bitcoin", 45000.0, 0.5};
    portfolio["ETH"] = {"Ethereum", 3000.0, 2.0};
    portfolio["XRP"] = {"Ripple", 1.0, 1000.0};

    // Calculate and display the total portfolio value
    double totalValue = calculatePortfolioValue(portfolio);
    cout << "Total Portfolio Value: $" << totalValue << endl;

    return 0;
}
