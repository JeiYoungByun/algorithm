class CoffeeMachine{
    int coffee, water, sugar = 0;

public:
    CoffeeMachine(int a, int b, int c) : coffee(a), water(b), sugar(c) {}
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show();
    void fill();
};