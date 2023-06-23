
#include <iostream>

class Car {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void gas() = 0;
    virtual void brake() = 0;
};

class useCar : public Car {
public:
    void start() override {}
    void stop() override {}
    void gas() override {}
    void brake() override {}
};

class useToyota : public useCar {
    void start() override {}
    void stop() override {}
    void gas() override {}
    void brake() override {}
     void Cruis() 
     {
        std::cout << "Speed Control" << std::endl;
     }
     void cooling_system()
     {
         std::cout << "You can cool your car" << std::endl;
     }
     void made_by()
     {
         std::cout << "Made by Japan" << std::endl;
     }

};



int main()
{
    useCar use;
    useToyota Toyota;
    
    use.start();
    use.gas();
    use.brake();
    use.stop();
     
}


