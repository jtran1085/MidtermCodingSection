#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//------ POINT ----------------------------------------------------------------
typedef struct point point;
struct point { double x, y; };

//------ SQUARE -----------------------------------------------------------------
typedef struct square square;

struct square { point ul; size_t side; };

square* square_init(double ulx, double uly, double side){
  square* s = malloc(sizeof(square));

  s->ul.x = ulx;
  s->ul.y = uly;
  s->side = side;

  return s;
} // TODO
void square_delete(square* sq){
  free(sq);
} // TODO

void square_move(square* sq, double x, double y){
  sq->ul.x=x;
  sq->ul.y=y;
} // TODO

void square_expandby(square* sq, double expandby){
  sq->ul.x*= expandby;
  sq->ul.y*= expandby;
  sq->side = sqrt((double)sq->ul.x * sq->ul.x + (double)sq->ul.y * sq->ul.y);
} // TODO

double square_area(square* sq){
  return sq->side * sq->side;
} // TODO

double square_perimeter(square* sq){
  return 4*sq->side;
} // TODO

// print location, side, area and perimeter
void square_print(const char* msg, square* sq){
  printf("%sx: %.1f, y: %.1f, side: %.1f, area: %.1f, perimeter: %.1f\n", msg, sq->ul.x, sq->ul.y, (double)sq->side, square_area(sq), square_perimeter(sq));
} // TODO

void test_square(double ulx, double uly, double side) {
 square* sq = square_init(ulx, uly, side);
 square_print("sq is: ", sq);
 square_move(sq, 2, 2);
 square_print("sq is now: ", sq);
 square_expandby(sq, 10);
 square_print("sq has expanded to: ", sq);
 square_delete(sq);
 printf("\n\n");
}

void tests_square() {
 test_square(0, 0, 10);
 test_square(1, 1, 5);
 // add other tests if you wish // TODO (optional)
}

int main(int argc, const char* argv[]) {
 tests_square();
 return 0;
}
