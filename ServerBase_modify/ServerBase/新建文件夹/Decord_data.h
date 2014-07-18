/******************************************************************************
* 版权所有 (C)2013, 朱代旺  QQ35828025
* 文件名称：
*    data.h
* 当前版本：
*     1.0
* 内容摘要：
*     
* 历史纪录：
*     修改人		日期		版本号		        描述
*     zdw朱代旺      2014.3.4       1.0
*******************************************************************************/
#ifndef _DECORD_DATA_H_
#define _DECORD_DATA_H_


#define NKBNO (8)


#define ITEM_NAME		(0)
#define ITEM_BARCODE	(1)
#define ITEM_COUNT		(2)
#define ITEM_PRICE		(3)



extern int nOutStrIndex;


//////////////////////////
//		小票基本信息
//////////////////////////

char *getThisDealNo(char * acnOutNo);


char *getThisCashierNo(char * acnOutNo);


int getDealGoodsKinds(char *);				//商品总条目

char *getDealTotalNum(char * acnOutNo);

char *getDealTotalPrice(char * acnOutNo);

char *getRecvedMoney(char * acnOutNo);

char *getBackMoney(char * acnOutNo);

char *getDealTime(char * acnOutNo);



//////////////////////////
//		小票某商品基本信息
//////////////////////////



char *getGoodsName(char *StrAddrStart);

char* getOneGoodsCount(char *StrAddrStart );

char* getGoodsUnitPrice(char *StrAddrStart);

char* getGoodsTotalPrice(char *StrAddrStart);




////////////////////////////////////
//		底层接口
////////////////////////////////


char *Code2Str( char *pcOrigCode);

char * getPreStrAddr(char *pcOutStr, char *pcKeyWords );

char* GetAnyThing(char *StrAddrStart, int nOffSetAddr, int nLenth, int nBufferLenth);

char *getDealEndAddr(char * acnOutNo);

char * getAfterStrAddr(char *pcOutStr, char *pcKeyWords );

char * getItemNoAddr(char *acnOutNo, unsigned int nItemNo );

char* getGoodsAddr(char * acnOutNo);

char* getGoodsAddrEnd(char * acnOutNo);

void OutToFile(char * acnOutNo, char * pcThisDealNo);



#endif //_DECORD_DATA_H_