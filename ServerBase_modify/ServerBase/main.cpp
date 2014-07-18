#include <process.h>
#include <iostream>
#include <windows.h>
using namespace std;

#include "DATA.h"
#include "BLL_WaitConn.h"
#include "BLL_DataSR.h"
#include "BLL_Dute.h"
#include "BLL_Init.h"

#define THREAD_NUM 10


HANDLE handle[THREAD_NUM];

int main()
{
#if 1


	int nIndex =1;
	BLL_InitFunc(NULL);
	//handle[0] = (HANDLE)_beginthreadex(NULL, 0, BLL_InitFunc, &1, 0, NULL);

	handle[nIndex] = (HANDLE)_beginthreadex(NULL, 0, main_WaitConn, &nIndex, 0, NULL);
	nIndex++;
	handle[nIndex] = (HANDLE)_beginthreadex(NULL, 0, BLL_DataSRFunc, &nIndex, 0, NULL);
	nIndex++;
	handle[nIndex] = (HANDLE)_beginthreadex(NULL, 0, BLL_DuteFunc, &nIndex, 0, NULL);
	
	Sleep(300000);
	printf("helo\n");
#endif	

	//BLL_InitFunc(NULL);
	//main_WaitConn(NULL);
 	//BLL_DataSRFunc(NULL);
 	//BLL_DuteFunc(NULL);

	return 1;

}

