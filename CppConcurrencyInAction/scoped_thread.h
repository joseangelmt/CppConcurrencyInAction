#pragma once

#include <iostream>
#include <thread>

/// <summary>
/// Implementa mediante el idioma RAII
/// </summary>
class scoped_thread
{
	std::thread t;
public:
	explicit scoped_thread(std::thread t)
		: t(std::move(t))
	{
		if (!this->t.joinable())
			throw std::logic_error("No thread");
	}

	scoped_thread(scoped_thread const&) = delete;
	scoped_thread& operator=(scoped_thread const&) = delete;

	~scoped_thread()
	{
		t.join();
	}
};

