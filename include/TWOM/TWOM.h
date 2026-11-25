#ifndef TWOM_MAIN_INCLUDE_H
#define TWOM_MAIN_INCLUDE_H

#ifdef __cplusplus
extern "C"{
#endif

typedef struct
{
    double x;
    double y;
} TWOM_Vector2d;

typedef struct
{
    float x;
    float y;
} TWOM_Vector2f;

typedef struct
{
    int x;
    int y;
} TWOM_Vector2i;

typedef struct
{
    double x;
    double y;
    double z;
} TWOM_Vector3d;

typedef struct
{
    float x;
    float y;
    float z;
} TWOM_Vector3f;

typedef struct
{
    int x;
    int y;
    int z;
} TWOM_Vector3i;

typedef struct
{
    double x;
    double y;
    double z;
    double w;
} TWOM_Vector4d;

typedef struct
{
    float x;
    float y;
    float z;
    float w;
} TWOM_Vector4f;

typedef struct
{
    int x;
    int y;
    int z;
    int w;
} TWOM_Vector4i;

typedef TWOM_Vector4d TWOM_Quaterniond;
typedef TWOM_Vector4f TWOM_Quaternionf;
typedef TWOM_Vector4i TWOM_Quaternioni;

#ifdef __cplusplus
}
#endif

#endif