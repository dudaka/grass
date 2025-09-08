#ifndef GRASS_ARRAYSTATS_MINIMAL_H
#define GRASS_ARRAYSTATS_MINIMAL_H

/* Minimal arraystats wrapper for ctypesgen - avoiding system headers */

/* Forward declarations and typedefs needed */
struct _FILE;
typedef struct _FILE FILE;

/* Basic types */
typedef int dbDriver;
typedef struct dbString { char *string; int nalloc; } dbString;

/* GRASS types - simplified for ctypesgen */
struct Cell_head {
    int format;
    int compressed;
    int rows, rows3;
    int cols, cols3;
    int depths;
    double north, south;
    double east, west;
    double top, bottom;
    double ns_res, ns_res3;
    double ew_res, ew_res3;
    double tb_res;
    int proj;
    int zone;
};

/* The main struct from arraystats.h */
struct GASTATS {
    double count;
    double min;
    double max;
    double sum;
    double sumsq;
    double sumabs;
    double mean;
    double meanabs;
    double var;
    double stdev;
};

/* Constants from arraystats.h */
#define CLASS_INTERVAL 1
#define CLASS_STDEV    2
#define CLASS_QUANT    3
#define CLASS_EQUIPROB 4
#define CLASS_DISCONT  5

/* Function declarations from arraystats defs */

/* basic.c */
void AS_eqdrt(double[], double[], int, int, double *, double *, double *);
void AS_basic_stats(const double[], int, struct GASTATS *);

/* class.c */
int AS_option_to_algorithm(const void *);  /* struct Option * simplified */
double AS_class_apply_algorithm(int, const double[], int, int *, double[]);
int AS_class_interval(const double[], int, int, double[]);
int AS_class_quant(const double[], int, int, double[]);
double AS_class_discont(const double[], int, int, double[]);
double AS_class_stdev(const double[], int, int, double[]);
int AS_class_equiprob(const double[], int, int *, double[]);
int AS_class_frequencies(const double[], int, int, double[], int[]);

#endif
