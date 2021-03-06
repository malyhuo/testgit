//=====基于spp微线程的实现测试================  
#include <iostream> 
#include "spp_lambda_task.h"
int GetRpcA(int req, int rsp){  //调用A 服务, 这里模拟普通 RPC调用,  
	//mt_udpsendrec(...) 微线程调用 得到响应结果 或者Rpc调用, 下面简单等待模拟 
	mt_sleep(1000);     
	std::cout << " doFun1 req:" << req << " rsp:" << rsp << std::endl;
	return 0;
}
int GetRpcB(int req, int rsp){ //调用B服务,这里模拟普通 RPC调用 
	//mt_udpsendrec(...)微线程调用  得到响应结果 或者Rpc调用  , 下面简单等待模拟 
	mt_sleep(1200);
	std::cout << " doFun2 req:" << req << " rsp:" << rsp << std::endl;
	return 1;
}
int GetRpcC(int req, int rsp){ //调用C服务,这里模拟普通 RPC调用 
	//mt_udpsendrec(...)微线程调用  得到响应结果 或者Rpc调用  , 下面简单等待模拟 
	mt_sleep(1400);
	std::cout << " doFun3 req:" << req << " rsp:" << rsp << std::endl;
	return 0;
}
int  main()
{
	bool init_ok = mt_init_frame();
	if (!init_ok)
	{
		fprintf(stderr, "init micro thread frame failed.\n");
		return -1;
	}
	mt_sleep(0);
	int req = 1, rsp = 2;

	LamTaskList m_list;
	m_list += [&]() {  GetRpcA(++req, rsp); };  //调用A 服务 
	m_list += [&]() {  GetRpcB(++req, rsp); };  //调用B 服务
	m_list += [&]() {  GetRpcC(++req, rsp); };  //调用C 服务

	m_list.mt_exec_all_task();  //这里并发调用 A/B/C 3个服务 

	std::cout << " end  " << std::endl;
	return 0;
}

//16 new
//416 new


//417
/* test 

test*/
int GetRpcB(int req, int rsp){ 

//419 Friday
	LamTaskList m_list;
	m_list += [&]() {  GetRpcA(++req, rsp); };  //调用A 服务 
	m_list += [&]() {  GetRpcB(++req, rsp); };  //调用B 服务
	m_list += [&]() {  GetRpcC(++req, rsp); };  //调用C 服务

	m_list.mt_exec_all_task();  //这里并发调用 A/B/C 3个服务 
}//422

422 delete
noboolalpha 
422
modify 1 

	
425 modify 1
//调用C 服务1
//调用C 服务2
	LamTaskList m_list;
	m_list += [&]() {  GetRpcA(++req, rsp); };  
	m_list += [&]() {  GetRpcB(++req, rsp); }; 
	m_list += [&]() {  GetRpcC(++req, rsp); }; 

//425
//425
//425
int  main()
{
	bool init_ok = mt_init_frame();
	if (!init_ok)
}