/******************************************************************************
* ��Ȩ���� (C)2013, �����  QQ35828025
* �ļ����ƣ�
*    data.h
* ��ǰ�汾��
*     1.0
* ����ժҪ��
*     
* ��ʷ��¼��
*     �޸���		����		�汾��		        ����
*     zdw�����      2014.3.4       1.0
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
//		СƱ������Ϣ
//////////////////////////

char *getThisDealNo(char * acnOutNo);


char *getThisCashierNo(char * acnOutNo);


int getDealGoodsKinds(char *);				//��Ʒ����Ŀ

char *getDealTotalNum(char * acnOutNo);

char *getDealTotalPrice(char * acnOutNo);

char *getRecvedMoney(char * acnOutNo);

char *getBackMoney(char * acnOutNo);

char *getDealTime(char * acnOutNo);



//////////////////////////
//		СƱĳ��Ʒ������Ϣ
//////////////////////////



char *getGoodsName(char *StrAddrStart);

char* getOneGoodsCount(char *StrAddrStart );

char* getGoodsUnitPrice(char *StrAddrStart);

char* getGoodsTotalPrice(char *StrAddrStart);




////////////////////////////////////
//		�ײ�ӿ�
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