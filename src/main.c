#include <gtk/gtk.h>

void main() {
  //GTK 초기화
  gtk_init(NULL,NULL);

  //윈도우 설정
  GtkWidget *Window1 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_default_size(GTK_WINDOW(Window1), 320, 240);
  gtk_window_set_title(GTK_WINDOW(Window1), "Hello, World!");

  g_signal_connect(Window1, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show_all(Window);
  gtk_main();

}

