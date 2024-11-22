/*#include <stdio.h>
#include <math.h>

typedef struct Point { // Declaration and definition of struct Point
    double x;
    double y;

    double (*calculate_distance)(struct Point *); // Function pointer to calculate distance
} Point;

// Distance calculation function
double _calculate_distance(Point *p) {
    return sqrt(p->x * p->x + p->y * p->y);
}

// Constructor to initialize the point and assign the function pointer
void init_point(Point *p, double x, double y) {
    p->x = x;
    p->y = y;
    p->calculate_distance = _calculate_distance; // Assign function pointer
}

int main() {
    Point p;

    init_point(&p, 3, 4); // Initialize point with coordinates (3, 4)
    printf("Addr of point p %p",p);
    printf("Value of point p %p",*p);
    printf("x: %lf\n", p.x);
    printf("y: %lf\n", p.y);
    printf("Distance from origin: %lf\n", p.calculate_distance(&p)); // Call distance function

    return 0;
}*/
#include <stdio.h>
#include <math.h>

typedef struct Point {
    double x;
    double y;
    double (*calculate_distance)(struct Point *);
} Point;

// Distance calculation function
double _calculate_distance(Point *p) {
    return sqrt(p->x * p->x + p->y * p->y);
}

// Constructor to initialize the point and assign the function pointer
void init_point(Point *p, double x, double y) {
    p->x = x;
    p->y = y;
    p->calculate_distance = _calculate_distance;
}

int main() {
    Point p;

    init_point(&p, 3, 4); // Initialize point with coordinates (3, 4)
    
    // Printing the address of point p
    printf("Address of point p: %p\n", (void*)&p);
    
    // Printing the values of point p
    printf("Value of point p - x: %lf, y: %lf\n", p.x, p.y);
    
    printf("Distance from origin: %lf\n", p.calculate_distance(&p)); // Call distance function

    return 0;
}

