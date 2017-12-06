#include <cairo.h>
#include <gtk/gtk.h>
#include <string.h>

#define MAXFFBUFFER 1000
typedef struct {
  int count;
  double x[MAXFFBUFFER];
  double y[MAXFFBUFFER];
} free_form;

#ifdef _MAIN_C_
	GtkBuilder *builderG;
	double xoffG = 50;
	double yoffG = 100;
	double fontSizeFactorG = 1;
        free_form ffG={0};   //init count to zero. Do not affect x and y.
#else
	extern GtkBuilder *builderG;
	extern double xoffG;
	extern double yoffG;
	extern double fontSizeFactorG;
        extern free_form ffG;
#endif

#include "prototypes.h"
