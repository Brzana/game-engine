#pragma once


#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	ENGINE_CORE_WARN("Initialized Logger");
	ENGINE_INFO("Initialized Logger");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}


#else
#error "ENGINE only supports Windows"
#endif