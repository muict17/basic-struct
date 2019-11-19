#include <stdio.h>

int main(void) {

  struct User{
    int age;
    float height;
    char sex; // m or f
  };

  // struct User toto;
  // toto.sex ='m';
  // toto.height = 150;
  // toto.age = 18;

  // struct User listUsers[2];

  // listUsers[0].sex = 'm';
  // listUsers[0].height = 500;
  // listUsers[0].age = 200;

  // listUsers[1].sex = 'f';
  // listUsers[1].height = 155;
  // listUsers[1].age = 19;
  // int i;
  // for(i = 0; i < 2;i++){
  //   printf("%c, %.2f, %d \n", listUsers[i].sex, listUsers[i].height,listUsers[i].age);
  // }
  
  struct User user;
  scanf("%c %f %d", &user.sex, &user.height, &user.age);

  printf("%c %f %d", user.sex, user.height, user.age);

  return 0;
}
