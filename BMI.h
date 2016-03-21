#include <string>

using namespace std;

class BMI{
    public:
        void setHeight(double);
        void setMass(double);
        double getBMI();
        string getCategory();

    private:
        double height, mass;
        double BMI;
        string category;
};
 // CLASS BMI_H
