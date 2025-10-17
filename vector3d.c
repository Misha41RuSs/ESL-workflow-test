#include "vector3d.h"

Vector3d sum(Vector3d* a, Vector3d* b) {
    return (Vector3d){ a->x + b->x,
                       a->y + b->y,
                       a->z + b->z };
}

Vector3d sub(Vector3d* a, Vector3d* b) {
    return (Vector3d){ a->x - b->x,
                       a->y - b->y,
                       a->z - b->z };
}

Vector3d cross(Vector3d* a, Vector3d* b) {
    return (Vector3d){ a->y * b->z - b->y * a->z,
                       a->x * b->z - b->x * a->z,
                       a->x * b->y - b->x * a->y };
}

double dot(Vector3d* a, Vector3d* b) {
    return a->x * b->x + a->y * b->y + a->z * b->z;
}