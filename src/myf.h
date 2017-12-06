#ifndef _MYF_H
#define _MYF_H

#include <cairo.h>
#include <gtk/gtk.h>

#include <cv.h>
#include <highgui.h>

#include <string.h>

#define MAXFFBUFFER 1000
typedef struct {
  int count;
  double x[MAXFFBUFFER];
  double y[MAXFFBUFFER];
} free_form;

#ifdef _MAIN_C_
	GtkBuilder *builderG;
        IplImage *dst_imageG , *src_imageG;
        CvCapture *captureG;
	double xoffG = 50;
	double yoffG = 100;
	double fontSizeFactorG = 1;
        free_form ffG={0};   //init count to zero. Do not affect x and y.
#else
	extern GtkBuilder *builderG;
        extern IplImage *dst_imageG , *src_imageG;
        extern CvCapture *captureG;
	extern double xoffG;
	extern double yoffG;
	extern double fontSizeFactorG;
        extern free_form ffG;
#endif

#include "prototypes.h"

#endif /* _MYF_H */
