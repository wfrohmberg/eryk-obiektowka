#include <iostream>
#include <algorithm.h>
#include <vector_sorting_problem_instance.h>
#include <string>

#include <car.h>
#include <car_catalog.h>
#include <iostream>
#include <engine_type.h>
#include <car_exception.h>
#include <car_catalog_exception.h>

int main() {
    CarCatalog catalog;
    for (int i = 0; i < 6; ++i) {
        try {
            std::string regNum;
            int power;
            double weight;
            char engType;
            std::cin >> regNum >> power >> weight >> engType;
            Car car(regNum, power, weight, (EngineType)engType);
            catalog.addCar(car);
        } catch (const CarCatalogException& e) {
            std::cout << "Error adding car to catalog: " << e.getMessage() << std::endl;
        } catch (const CarException& e) {
            std::cout << "Error creating car: " << e.getMessage() << std::endl;
        } 
    }
    catalog.showCarRegistrationNumbersAndPowers();

    return 0;
}