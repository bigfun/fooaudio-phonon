#include "fooaudioapp.hpp"
#include "fooaudioengine.hpp"
#include "foomainwindow.hpp"

int main (int argc, char * argv [])
{
	Q_INIT_RESOURCE (resource);

	FooaudioApp fooApp (argc, argv);

	FooAudioEngine fooAudioEngine;

	FooMainWindow fooWindow (&fooAudioEngine);

	fooWindow.show ();

	return fooApp.exec ();
} // int main (int, char **);