#include <Pinchasi.h>

class Sandbox : public Pinchasi::Application 
{
public:
	Sandbox()
	{
	
	}

	~Sandbox() 
	{

	}

};

Pinchasi::Application* Pinchasi::CreateApplication() 
{
	return new Sandbox();
}