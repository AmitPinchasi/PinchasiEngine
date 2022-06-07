#pragma once

#include "Core.h"


namespace Pinchasi {
	class PINCHASI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

