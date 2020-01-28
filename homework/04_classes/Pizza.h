/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 *
 * File Name:       pizza.h
 * Name:            reklre
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

class Pizza {
public:
  Pizza();
  ~Pizza(){};

  // TODO Add the accessor and mutator functions for each class variable.
  int getSize();
  int getType();
  int getToppings();
  void setSize(int size);
  void setToppings(int topping);
  void setType(int type);

  //==================================
  // computePrice
  // Returns:
  //   Price of a pizza using the formula:
  //     Small = $10 + $2 per topping
  //     Medium = $14 + $2 per topping
  //     Large = $17 + $2 per topping
  //==================================
  double computePrice();

  void outputDescription();

private:
  int size, type, toppings;
};
