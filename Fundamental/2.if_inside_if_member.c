#include <stdio.h>

int main() {
// Adults may enter, small children may not

  char member;
  
  int age = 0;
  printf("Enter your age: ");

  if (scanf("%d", &age) !=1)
  {
    printf("Invalid input");
  }

  else if (age >= 18 && age <= 60)
  {
    printf("Your age is sufficient, but do you have a membership? (y/n): ");
    
    if (scanf(" %c", &member) != 1)
    {
      printf("Invalid input");
    }

    else if (member == 'y')
    {
      printf("You are %d years old, and have a membership. Please enter", age);
    }

    else if (member == 'n')
    {
      printf("Please subscribe to a membership first");
    }

    else
    {
      printf("Invalid input");
    }
  }

  else if (age < 0)
  {
    printf("Invalid number");
  }

  else
  {
    printf("You are %d years old, you are not old enough", age);
  }

  return 0;
}
