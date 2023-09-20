#include <iostream>

constexpr double OUNCES_PER_POUND = 16;
constexpr double POUNDS_TO_KILOGRAMS = 0.45359237;
constexpr int GRAMS_PER_KILOGRAM = 1000;

// Read the amount of pounds and ounces from the user into the parameters
void get_pounds_and_ounces(double& pounds, int& ounces)
{

	std::cout << "Please enter the number of pounds: ";
	std::cin >> pounds;
	std::cout << "Please enter the number of ounces: ";
	std::cin >> ounces;
}

void convert_pounds_and_ounces_to_kilograms_and_grams(const double pounds, const int ounces, int& kilograms, double& grams)
{
	auto const totalPounds = pounds + (ounces / OUNCES_PER_POUND);
	auto const totalKilograms = totalPounds * POUNDS_TO_KILOGRAMS;
	kilograms = static_cast<int>(totalKilograms);
	grams = (totalKilograms - kilograms) * GRAMS_PER_KILOGRAM;
}

int main()
{
	double pounds = -1;
	int ounces = -1;
	get_pounds_and_ounces(pounds, ounces);
	std::cout << "Pounds " << pounds << std::endl;
	std::cout << "Ounces " << ounces << std::endl;

	int kilograms = -1;
	double grams = -1.0;
	convert_pounds_and_ounces_to_kilograms_and_grams(pounds, ounces, kilograms, grams);
	std::cout << "Kilograms " << kilograms << std::endl;
	std::cout << "Grams " << grams << std::endl;
	return 0;
}