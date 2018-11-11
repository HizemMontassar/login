#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "login.h"


void on_button1_clicked (GtkWidget *objet_graphique, gpointer user_data)
{
	char login[30];char password[30]; int role;int x;

	GtkWidget *input1=lookup_widget(objet_graphique,"entry1");
	GtkWidget *input2=lookup_widget(objet_graphique,"entry2");
	GtkWidget *output=lookup_widget(objet_graphique,"label4");

	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input2)));

	x=verifier(login,password);
	
	if(x==-1)
	{
	gtk_label_set_text(GTK_LABEL(output),"login/Password incorrect");
	}
	else 
	{
	printf("Bienvenue \n");
	}

	
}

