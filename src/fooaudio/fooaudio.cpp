#include "fooaudioapp.hpp"
#include "fooaudioengine.hpp"
#include "foomainwindow.hpp"

int main (int argc, char * argv [])
{
	Q_INIT_RESOURCE (resource);

	FooaudioApp fooApp (argc, argv);

	fooApp.setApplicationName("fooaudio");
	fooApp.setQuitOnLastWindowClosed(true);

	FooMainWindow *fooMainWindow;

	FooAudioEngine *fooAudioEngine = new FooAudioEngine(fooMainWindow, &fooApp);

	fooMainWindow = new FooMainWindow(fooAudioEngine);

	fooMainWindow->show();

	return fooApp.exec ();
} // int main (int, char **);
