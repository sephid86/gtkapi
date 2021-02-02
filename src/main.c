#include <gtk/gtk.h>

void EntryActivate();

void main() {
  //GTK 초기화
  gtk_init(NULL,NULL);

  //윈도우 설정
  GtkWidget *Window1 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_default_size(GTK_WINDOW(Window1), 320, 240);
  gtk_window_set_title(GTK_WINDOW(Window1), "Hello, World!");
  g_signal_connect(Window1, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  //컨테이너
  GtkWidget *Layout1 = gtk_box_new(GTK_ORIENTATION_VERTICAL,0);
  gtk_container_add(GTK_CONTAINER(Window1), Layout1);

  //Entry
  GtkWidget *Entry1 = gtk_entry_new();
  gtk_container_add(GTK_CONTAINER(Layout1), Entry1);
  g_signal_connect(Entry1, "activate", G_CALLBACK(EntryActivate), Entry1);

  //Button
  GtkWidget *Button1 = gtk_button_new_with_label("입력");
  gtk_container_add(GTK_CONTAINER(Layout1), Button1);
  g_signal_connect(Button1, "clicked", G_CALLBACK(EntryActivate), Entry1);

  //윈도우 실행
  gtk_widget_show_all(Window1);
  gtk_main();

}

void EntryActivate(GtkWidget *Widget, GtkEntry *Entry) {
  g_print(gtk_entry_get_text(Entry));
}
