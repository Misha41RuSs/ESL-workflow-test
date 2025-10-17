#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    double x, y, z;
} Vector3d;

Vector3d sum(Vector3d*, Vector3d*);
Vector3d sub(Vector3d*, Vector3d*);
Vector3d cross(Vector3d*, Vector3d*);
double dot(Vector3d*, Vector3d*);

#endif