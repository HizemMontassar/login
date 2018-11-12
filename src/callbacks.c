#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "login.h"


void on_button1_clicked (GtkWidget *object_graphique, gpointer user_data)
{
	char login[30];char password[30]; int role;int x;

	GtkWidget *input1=lookup_widget(object_graphique,"entry1");
	GtkWidget *input2=lookup_widget(object_graphique,"entry2");
	GtkWidget *output=lookup_widget(object_graphique,"label4");
	GtkWidget *window2;
	GtkWidget *window3;
	GtkWidget *window4;

	

	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

	x=verifier(login,password);
	
	if(x ==-1)
	{
	gtk_label_set_text(GTK_LABEL(output),"login/Password incorrect");
	
	}
	else 
	{
		switch(x)
		{
		case 1 : {	window2 = create_window2();
				gtk_widget_show(window2);}break;
		case 2 : { 	window3 = create_window3();
				gtk_widget_show(window3);}break;
		case 3 : {	window4 = create_window4();
				gtk_widget_show(window4);}break;
		default : printf("nothing\n");
		}

	}

	
}


void on_button2_clicked (GtkWidget *object_graphique, gpointer user_data)
{
gtk_main_quit();
}
