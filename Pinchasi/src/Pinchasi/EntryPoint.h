#pragma once


#ifdef PI_PLATFORM_WINDOWS
	
extern Pinchasi::Application* Pinchasi::CreateApplication();

int main(int argc, char** argv) {

	auto app = Pinchasi::CreateApplication();
	app->Run();
	delete app;

}

#endif