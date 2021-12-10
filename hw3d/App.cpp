#include "App.h"

App::App()
	:wnd(800, 300, "Box")
{

}

int App::Go()
{

	MSG		msg;

	// Start main loop
	while (1)
	{
		// Did we recieve a message, or are we idling ?
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				return msg.wParam;
			}
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{
			// Advance Game Frame.
			DoFrame();

		} // End If messages waiting

	} // Until quit message is receieved

	return 0;



}

void App::DoFrame()
{


	const float c = sin(timer.Peek()) / 2.0f + 0.5f;
	wnd.Gfx().ClearBuffer(c, c, 1.0f);
	wnd.Gfx().EndFrame();
}