#include "threadsafe_queue.h"
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <map>
//#include <string>
//#include <shared_mutex>
//#include <condition_variable>
//#include <queue>
//#include <memory>


//class data_chunk {};
//
//threadsafe_queue<data_chunk> data_queue;
//
//void data_preparation_thread()
//{
//	while (more_data_to_prepare())
//	{
//		data_chunk const data = prepare_data();
//		data_queue.push(data);
//	}
//}
//
//void data_processing_thread()
//{
//	while (true)
//	{
//		data_chunk data;
//		data_queue.wait_and_pop(data);
//		process(data);
//		if (is_last_chunk(data))
//			break;
//	}
//}

class jander {};


int main()
{
	threadsafe_queue<jander> cola;
	cola.push(jander());
	auto valor = cola.wait_and_pop();
}
