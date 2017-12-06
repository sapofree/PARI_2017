/*File generated automatically in sapofree-Lenovo-ideapad-110-15IBR by sapofree on Qua Dez  6 11:05:22 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* myf.c */
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
CvCapture *pari_StartImageAcquisition ();
/* callbacks.c */
void InterceptCTRL_C (int a);
void on_drawingarea1_draw (GtkWidget * widget, cairo_t * cr, gpointer user_data);
void on_drawingarea1_motion_notify_event (GtkWidget * widget, GdkEventMotion * event, gpointer user_data);
void on_drawingarea1_scroll_event (GtkWidget * widget, GdkEventScroll * event, gpointer user_data);
void on_mouse_button_on (GtkWidget * widget, GdkEventButton * event, gpointer user_data);
gboolean p_ForceRefreshDA (gpointer user_data);
void p_InitTimer ();
void p_RedrawFreeForm (cairo_t * cr);
void p_RedrawText (cairo_t * cr);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
gboolean pari_UpdateImageAreas (gpointer data);
void pari_delete_event (GtkWidget * window, GdkEvent * event, gpointer data);
/* main.c */
int main (int argc, char *argv[]);
#ifdef __cplusplus
}
#endif
