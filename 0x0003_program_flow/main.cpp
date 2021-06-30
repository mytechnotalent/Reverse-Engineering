#include <iostream>
#include <vector>

int main()
{
  // if
  int x = 10;
  if (x >= 10)
  {
    std::cout << "is >=" << std::endl;
  }
  else if (x < 10)
  {
    std::cout << "is <" << std::endl;
  }
  else
  {
    std::cout << "not a number" << std::endl;
  }
     
  // switch
  char menu_item = 'a';
  switch(menu_item)
  {
    case 'a': 
      std::cout << "You chose menu a..." << std::endl;
      break;
    case 'b':
      std::cout << "You chose menu b..." << std::endl;
      break;
    default:
      std::cout << "Invalid Selection!" << std::endl;
      break;
  }

  // for
  for (int i=1; i<=10; ++i)
    std::cout << i << std::endl;

  // for (range)
  std::vector<double> scores;
  scores.push_back(100.1);
  scores.push_back(20.5);
  scores.push_back(50.25);
  double average_score = 0;
  double total_scores = 0;
  for (auto score: scores)
    total_scores += score;
  if (scores.size() != 0)
    average_score = total_scores / scores.size();
  std::cout << "Average Score: " << average_score << std::endl;
 
  // while
  int num = 42;
  while (num <= 77)
  {
    std::cout << num << std::endl;
    ++num;
  }

  return 0;
}

