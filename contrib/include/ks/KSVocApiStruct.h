/////////////////////////////////////////////////////////////////////////
///@system ��һ������ϵͳ
///@company SunGard China
///@file KSVocApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
/////////////////////////////////////////////////////////////////////////

#ifndef __KSVOCAPISTRUCT_H_INCLUDED_
#define __KSVOCAPISTRUCT_H_INCLUDED_

#include "KSUserApiDataTypeEx.h"
#include "KSVocApiDataType.h"
#include "KSUserApiStructEx.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

namespace KingstarAPI
{

	///��ʼ¼��������
	struct CKSConditionalOrderInitInsert
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��������
		TThostFtdcDirectionType	Direction;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///�۸����
		TKSOrderPriceTypeType OrderPriceType;             
		///��������
		TKSConditionalTypeType  ConditionalType;
		///������
		TThostFtdcPriceType ConditionalPrice;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///��������
		TThostFtdcVolumeType TriggeredTimes;
		///����������
		TKSConditionalOrderType OrderType;
		///��Чʱ��
		TThostFtdcTimeType  ActiveTime;
		///ʧЧʱ��
		TThostFtdcTimeType InActiveTime;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
		//ί�м۸�����
		TKSScurrencyTypeType	ScurrencyType;
		//ȷ�ϱ�־
		TKSConfirmFlagType ConfirmFlag;
	};

	///�޸�������
	struct CKSConditionalOrderModify
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��������
		TThostFtdcDirectionType	Direction;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///�۸����
		TKSOrderPriceTypeType OrderPriceType;          
		///��������
		TKSConditionalTypeType  ConditionalType;
		///������
		TThostFtdcPriceType ConditionalPrice;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///��������
		TThostFtdcVolumeType TriggeredTimes;
		///����������
		TKSConditionalOrderType OrderType;
		///��Чʱ��
		TThostFtdcTimeType  ActiveTime;
		///ʧЧʱ��
		TThostFtdcTimeType InActiveTime;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
		//ί�м۸�����
		TKSScurrencyTypeType	ScurrencyType;
	};

	///��ѯ������
	struct CKSConditionalOrderQuery
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///ɾ��������
	struct CKSConditionalOrderRemove
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
	};

	///��ͣ�򼤻�������
	struct CKSConditionalOrderStateAlter
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///��ͣ�򼤻������־
		TKSConditionalOrderStateAlterType	ConditionalOrderStateAlter;
	};

	///ѡ��������
	struct CKSConditionalOrderSelect
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///ѡ����
		TKSConditionalOrderSelectResultType SelectResult;
	};


	///���������������Ϣ
	struct CKSConditionalOrderRspResultField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
	};

	///��������Ӧ
	struct CKSConditionalOrderOperResultField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///������
		TThostFtdcTradeDateType	TradingDay;
		///�����û�
		TThostFtdcUserIDType	UserID;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///������״̬
		TKSConditionalOrderStatusType ConditionalOrderStatus;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///�۸����
		TThostFtdcOrderPriceTypeType OrderPriceType;
		///��������
		TThostFtdcVolumeType TriggeredTimes;
		///����������
		TKSConditionalOrderType OrderType;
		///��ע
		TThostFtdcMemoType	Memo;
		///��Чʱ��
		TThostFtdcTimeType  ActiveTime;
		///ʧЧʱ��
		TThostFtdcTimeType InActiveTime;
		///��������
		TKSConditionalTypeType  ConditionalType;
		///������
		TThostFtdcPriceType ConditionalPrice;
		///�µ�ʱ��
		TThostFtdcTimeType  OrderTime;
		///����ʱ��
		TThostFtdcTimeType  ContingentTime;
		///ί�м۸�����
		TKSScurrencyTypeType	ScurrencyType;
		///��������Դ
		TKSConditionalSourceType ConditionalSource;
	};

	///¼��ֹ��ֹӯ��
	struct CKSProfitAndLossOrderInsert
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///ֹ���
		TThostFtdcPriceType  StopLossPrice;
		///ֹӯ��
		TThostFtdcPriceType  TakeProfitPrice;
		///ƽ�ַ�ʽ
		TKSCloseModeType CloseMode;
		///ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		TThostFtdcPriceType FiguresPrice;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///����ӯ��۵ķ�ʽ
		TKSOffsetValueType OffsetValue;
		///�����������۸�����
		TKSSpringTypeType SpringType;
		///����ֹ���
		TThostFtdcPriceType	FloatLimitPrice;
		///ֹ�𵥴�������
		TThostFtdcVolumeType TriggeredTimes;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ֹ��ֹӯ��־
		TKSProfitAndLossFlagType	ProfitAndLossFlag;
		///Ʒ�ִ��루���ڳֲ�����ֹ��ֹӯ��
		TThostFtdcInstrumentIDType	ProductID;
		///������־�����ڳֲ�����ֹ��ֹӯ��
		TThostFtdcDirectionType	Direction;
		///��ƽ��־�����ڳֲ�����ֹ��ֹӯ��
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־�����ڳֲ�����ֹ��ֹӯ��
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///ί�����������ڳֲ�����ֹ��ֹӯ��
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///ί�м۸����ڳֲ�����ֹ��ֹӯ��
		TThostFtdcPriceType	LimitPrice;
		///�ɽ��۸����ڳֲ�����ֹ��ֹӯ��
		TThostFtdcPriceType	TradePrice;
	};

	///ɾ��ֹ��ֹӯ��
	struct CKSProfitAndLossOrderRemove
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///ֹ��ֹӯ����
		TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
	};

	///��ѯֹ��ֹӯ��
	struct CKSProfitAndLossOrderQuery
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///ֹ��ֹӯ����
		TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�޸�ֹ��ֹӯ��
	struct CKSProfitAndLossOrderModify
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///ֹ��ֹӯ����
		TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
		///ֹ���
		TThostFtdcPriceType  StopLossPrice;
		///ֹӯ��
		TThostFtdcPriceType  TakeProfitPrice;
		///ƽ�ַ�ʽ
		TKSCloseModeType CloseMode;
		///ƽ�ַ����λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		TThostFtdcPriceType FiguresPrice;
		///����ӯ��۵ķ�ʽ
		TKSOffsetValueType OffsetValue;
		///�����������۸�����
		TKSSpringTypeType SpringType;
		///����ֹ���
		TThostFtdcPriceType	FloatLimitPrice;
		///��������
		TThostFtdcVolumeType TriggeredTimes;
		///ֹ��ֹӯ��־
		TKSProfitAndLossFlagType	ProfitAndLossFlag;
	};

	///ֹ��ֹӯ��ɾ��
	struct CKSProfitAndLossOrderRemoveField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///ֹ��ֹӯ����
		TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
	};

	///ֹ��ֹӯ������
	struct CKSProfitAndLossOrderOperResultField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///ֹ��ֹӯ����
		TKSProfitAndLossOrderIDType ProfitAndLossOrderID;
		///����Ա
		TThostFtdcUserIDType	UserID;
		///Ͷ��������
		TThostFtdcPartyNameType InvestorName;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///ֹ���
		TThostFtdcPriceType  StopLossPrice;
		///ֹӯ��
		TThostFtdcPriceType  TakeProfitPrice;
		///ƽ�ַ�ʽ
		TKSCloseModeType CloseMode;
		///ƽ�ַ���Ӽ���λ����ƽ�ַ�ʽ=1��2ʱ��Ч��
		TThostFtdcPriceType Figures;
		///���鴥��ʱ�����¼�
		TThostFtdcPriceType LastPrice;
		///����ֹ��ֹӯ��ʱ��
		TThostFtdcTimeType	ProfitAndLossOrderFormTime;
		///����������ʱ��
		TThostFtdcTimeType	ConditionalOrderFormTime;
		///����ί�е�ʱ��
		TThostFtdcTimeType	OrderFormTime;
		///ֹ��ֹӯ��״̬
		TKSProfitAndLossOrderStatusTyp ProfitAndLossOrderStatus;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///����ӯ��۵ķ�ʽ
		TKSOffsetValueType OffsetValue;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///�����������۸�����
		TKSSpringTypeType SpringType;
		///����ֹ���
		TThostFtdcPriceType	FloatLimitPrice;
		///���ֳɽ��۸�
		TThostFtdcPriceType OpenTradePrice;
		///ֹ��ֹӯ��־
		TKSProfitAndLossFlagType	ProfitAndLossFlag;
	};

	// ����������ѡ����Ϣ
	struct CKSCOSAskSelectField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;   
		///����Ա
		TThostFtdcUserIDType	UserID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///��ע
		TThostFtdcMemoType	Memo;
		///ѡ��ʽ
		TKSConditionalOrderSelectTypeType SelectType;
	};

	// ������״̬��Ϣ
	struct CKSCOSStatusField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;   
		///����Ա
		TThostFtdcUserIDType	UserID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///���������
		TKSConditionalOrderIDType	ConditionalOrderID;
		///������״̬
		TKSConditionalOrderStatusType ConditionalOrderStatus;
		///��ע
		TThostFtdcMemoType	Memo;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///������
		TThostFtdcTradeDateType	TradingDay;
		///�����û�
		TThostFtdcUserIDType	CancelUserID;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///�������
		TThostFtdcOrderSysIDType	OrderSysID;
		///��ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///ʣ������
		TThostFtdcVolumeType	VolumeTotal;
		///ί��ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	ActiveTime;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
	};

	// ֹ��ֹӯ��״̬��Ϣ
	struct CKSPLStatusField
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;   
		///����Ա
		TThostFtdcUserIDType	UserID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///ֹ��ֹӯ�����
		TKSProfitAndLossOrderIDType	ProfitAndLossOrderID;
		///ֹ�����������
		TKSConditionalOrderIDType	StopLossOrderID;
		///ֹӯ���������
		TKSConditionalOrderIDType	TakeProfitOrderID;
		///ӯ��״̬
		TKSConditionalOrderStatusType ProfitAndLossOrderStatus;
		///ֹ���
		TThostFtdcPriceType  StopLossPrice;
		///ֹӯ��
		TThostFtdcPriceType  TakeProfitPrice;
		///����ӯ��۵ķ�ʽ
		TKSOffsetValueType OffsetValue;
		///���ֳɽ��۸�
		TThostFtdcPriceType OpenTradePrice;
		///��ע
		TThostFtdcMemoType	Memo;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��ƽ��־
		TThostFtdcOffsetFlagType	CombOffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///������
		TThostFtdcTradeDateType	TradingDay;
		///�����û�
		TThostFtdcUserIDType	CancelUserID;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///�������
		TThostFtdcOrderSysIDType	OrderSysID;
		///��ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///ʣ������
		TThostFtdcVolumeType	VolumeTotal;
		///ί��ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	ActiveTime;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
	};

	///�����ѯ�ֻ�ָ��
	struct CKSQryIndexPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�����ѯ�ֻ�ָ��
	struct CKSIndexPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ָ���ֻ����̼�
		TThostFtdcPriceType	ClosePrice;
		///��ȫϵ��
		TThostFtdcRatioType	GuarantRatio;
	};

	///�����ѯ��Ȩ��Լ����ϵ��
	struct CKSQryOptionInstrGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�����ѯ��Ȩ��Լ����ϵ��
	struct CKSOptionInstrGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��ͱ���ϵ������
		TThostFtdcVolumeType	MiniNumerator;
		///��ͱ���ϵ����ĸ
		TThostFtdcVolumeType	MiniDenominator ;
		///��Ȩ��Լ��С��֤��
		TThostFtdcMoneyType	MiniMargin;
	};

	///�����ѯ��������
	struct CKSQryExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///������־
		TThostFtdcDirectionType	Direction;
		///��ƽ��־
		TThostFtdcOffsetFlagType OffsetFlag;
	};

	///�����ѯ��������
	struct CKSExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///������ִ����
		TThostFtdcVolumeType	ExecVolume;
		///�����������
		TThostFtdcVolumeType	ActionVolume;
		///������ִ����
		TThostFtdcVolumeType	ExecedVolume;
		///����������� 
		TThostFtdcVolumeType	ActionedVolume;
		///������־
		TThostFtdcDirectionType	Direction;
	};

	///���������Ȩָ����Ϣ
	struct CKSQryStockOptionAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����
		TThostFtdcDirectionType	Direction;
	};

	///���������Ȩָ����Ϣ
	struct CKSStockOptionAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����
		TThostFtdcDirectionType	Direction;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentNameType	InstrumentName;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///���ճֲ�
		TThostFtdcVolumeType	YdPosition;
		///��Ȩָ�ɺ�Լ����
		TThostFtdcVolumeType AssInsVo;
		///��Ȩ���֤ȯ����
		TThostFtdcVolumeType AssProVol;
		///��Ȩָ��Ӧ�����
		TThostFtdcMoneyType  FeePay;
		///��ȨC/P��־
		TThostFtdcOptionsTypeType OptionsType;
		///��Ȩ������
		TThostFtdcDateType DeliveryDay;
		///���ɺ�Լ��ʶ��
		TThostFtdcInstrumentIDType StockID;
	};

	///����Key
	struct CThostOrderKeyField
	{
		///��������
		TThostFtdcOrderRefType      OrderRef;
		///ǰ�ñ��
		TThostFtdcFrontIDType  FrontID;
		///�Ự���
		TThostFtdcSessionIDType     SessionID;
		///����������
		TThostFtdcExchangeIDType  ExchangeID;
		///�������
		TThostFtdcOrderSysIDType  OrderSysID;
	};

	///����������������
	struct CThostFtdcBulkCancelOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType      BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType    InvestorID;
		///�û�����
		TThostFtdcUserIDType  UserID;
		///��������
		TThostFtdcOrderTypeType    OrderType;
		///��������
		TThostFtdcVolumeType nCount;
		///��������
		CThostOrderKeyField OrderKey[MAX_ORDER_COUNT];
	};

	///ƽ�ֲ���
	struct CKSCloseStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
	};

	///ƽ�ֲ�����Ӧ
	struct CKSCloseStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������
		TThostFtdcExchangeNameType	ExchangeName;
		///ƽ�ֲ���
		TKSCloseStrategyType CloseStrategy;
	};

	///��ϲ���
	struct CKSCombStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///�������
		TThostFtdcProductClassType	ProductClass;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���(SP/SPD)
		TKSStrategyIDType StrategyID;
		///�������
		TKSCombTypeType CombType;
	};

	///��ϲ�����Ӧ
	struct CKSCombStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�������
		TKSCombTypeType CombType;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///��ƽ��־һ
		TThostFtdcOffsetFlagType	OffsetFlag1;
		///��������һ
		TThostFtdcVolRatioType	VolRatio1;
		///�������һ
		TKSCalcFlagType CalcFlag1;
		///��֤�����һ
		TThostFtdcMoneyRatioType	MarginRatio1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag2;
		///����������
		TThostFtdcVolRatioType	VolRatio2;
		///������Ŷ�
		TKSCalcFlagType CalcFlag2;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio2;
		///����������
		TThostFtdcDirectionType	Direction3;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag3;
		///����������
		TThostFtdcVolRatioType	VolRatio3;
		///���������
		TKSCalcFlagType CalcFlag3;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio3;
		///����������
		TThostFtdcDirectionType	Direction4;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag4;
		///����������
		TThostFtdcVolRatioType	VolRatio4;
		///���������
		TKSCalcFlagType CalcFlag4;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio4;
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
	};

	///��Ȩ��ϲ���
	struct CKSOptionCombStrategy
	{
		///Ӫҵ������
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	};

	///��Ȩ��ϲ�����Ӧ
	struct CKSOptionCombStrategyResultField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///��Ȩ����һ
		TThostFtdcOptionsTypeType	OptionsType1;
		///ִ�м�����һ
		TKSStrikePriceType StrikeType1;
		///��ƽ��־һ
		TThostFtdcOffsetFlagType	OffsetFlag1;
		///��������һ
		TThostFtdcVolRatioType	VolRatio1;
		///��֤�����һ
		TThostFtdcMoneyRatioType	MarginRatio1;
		///�������һ
		TKSCalcFlagType CalcFlag1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///��Ȩ���Ͷ�
		TThostFtdcOptionsTypeType	OptionsType2;
		///ִ�м����Ͷ�
		TKSStrikePriceType StrikeType2;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag2;
		///����������
		TThostFtdcVolRatioType	VolRatio2;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio2;
		///������Ŷ�
		TKSCalcFlagType CalcFlag2;
		///����������
		TThostFtdcDirectionType	Direction3;
		///��Ȩ������
		TThostFtdcOptionsTypeType	OptionsType3;
		///ִ�м�������
		TKSStrikePriceType StrikeType3;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag3;
		///����������
		TThostFtdcVolRatioType	VolRatio3;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio3;
		///���������
		TKSCalcFlagType CalcFlag3;
		///����������
		TThostFtdcDirectionType	Direction4;
		///��Ȩ������
		TThostFtdcOptionsTypeType	OptionsType4;
		///ִ�м�������
		TKSStrikePriceType StrikeType4;
		///��ƽ��־��
		TThostFtdcOffsetFlagType	OffsetFlag4;
		///����������
		TThostFtdcVolRatioType	VolRatio4;
		///��֤�������
		TThostFtdcMoneyRatioType	MarginRatio4;
		///���������
		TKSCalcFlagType CalcFlag4;
	};

	///��ѯ�ͻ�ת����Ϣ����
	struct CKSTransferInfo
	{
		///���д���
		TThostFtdcBankIDType	BankID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��ѯ�ͻ�ת����Ϣ��Ӧ
	struct CKSTransferInfoResultField
	{
		///���ʼʱ��
		TThostFtdcTimeType	DepositBegin;
		///������ʱ��
		TThostFtdcTimeType	DepositEnd;
		///����ʼʱ��
		TThostFtdcTimeType	WithdrawBegin;
		///�������ʱ��
		TThostFtdcTimeType	WithdrawEnd;
		///�������
		TThostFtdcLargeVolumeType	WithdrawVolume;
		///�����޶�
		TThostFtdcMoneyType	WithdrawLimit;
		///���𵥱��޶�
		TThostFtdcMoneyType	WithdrawLimitByTrade;
		///�����ʽ�
		TThostFtdcMoneyType	Available;
		///�ѳ�����
		TThostFtdcLargeVolumeType	WithdrawedVolume;
		///�ѳ����
		TThostFtdcMoneyType	WithdrawedAmount;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��ѯKingstar�����¼�֪ͨ
	struct CKSQryTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Ϣ����
		TKSInfoTypeType InfoType;
		///ȷ�ϱ�־
		TKSConfirmFlagType ConfirmFlag;
		///��ʼʱ��
		TThostFtdcTimeType	TimeStart;
		///����ʱ��
		TThostFtdcTimeType	TimeEnd;
	};

	///�û��¼�֪ͨ
	struct CKSTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Ϣ����
		TKSInfoTypeType InfoType;
		///��ϢժҪ
		TThostFtdcDigestType	InfoDigest;
		///��Ϣ����
		TThostFtdcContentType	FieldContent;
		///��������
		TThostFtdcTimeType	SendDate;
		///����ʱ��
		TThostFtdcTimeType	SendTime;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
		///ȷ�ϱ�־
		TKSConfirmFlagType ConfirmFlag;
	};

	///�û��˲�Ʒ��Դ��ѯ
	struct CKSQryUserProductUrlField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	 UserProductInfo;
	};

	///�û��˲�Ʒ��Դ
	struct CKSUserProductUrlField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	 UserProductInfo;
		///�û��˲�Ʒ���°汾��
		TKSProductVersionType	 LastProductVersion;
		///�û��˲�Ʒ������Ͱ汾��
		TKSProductVersionType	 MinUseProductVersion;
		///�û��˲�Ʒ��������Ͱ汾��
		TKSProductVersionType	 MinUpdateVersion;
		///�û��˲�Ʒ���°汾��װ����С
		TThostFtdcLargeVolumeType  InstallPackSize;
		///�û��˲�Ʒ���°汾��������
		TThostFtdcTradeDateType	 PublishDate;
		///�û��˲�Ʒ���°汾˵��
		TThostFtdcUserProductMemoType  ProductMemo;
		///�û��˲�Ʒ��ԴUrl��ַ
		TThostFtdcFunctionUrlType Url;
	};

	///��ѯ�ͻ����׼���
	struct CKSQryInvestorTradeLevelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
	};

	///�ͻ����׼���
	struct CKSInvestorTradeLevelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///���׼���
		TKSTradeLevelType TradeLevel;
	};

	///��ѯ�����޹��޲ֶ��
	struct CKSQryOptLimitField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
	};

	///����ϵͳ�����޹����/�����޹���ȱ��
	struct CKSPurchaseLimitAmtField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///�޹����
		TThostFtdcMoneyType	PurLimitAmt;
	};

	///����ϵͳ�����޲ֶ��
	struct CKSPositionLimitVolTField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///�޲�����
		TKSLimitFlagType LimitFlag;
		///�ֲַ���
		TThostFtdcOptionsTypeType OptionsType;
		///���Ʒ�Χ
		TKSControlRangeType ControlRange;
		///�޲ֶ��
		TThostFtdcVolumeType	PosiLimitVol;
	};

	///����ϵͳ�����޹����
	struct CKSPurchaseLimitAmtSField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///�ͻ��ʲ�10%
		TThostFtdcMoneyType	Fund10P;
		///�վ��ʲ�20%
		TThostFtdcMoneyType	AverageFund20P;
		///��ǰ�޹����
		TThostFtdcMoneyType	CurrPurLimitAmt;
		///��������޹����
		TThostFtdcMoneyType	MaxPurLimitAmt;
	};

	///����ϵͳ�����޲ֶ��
	struct CKSPositionLimitVolSField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///���Ʒ�Χ
		TKSControlRangeType ControlRange;
		///�޲�����
		TKSLimitFlagType LimitFlag;		
		///��ǰ�ֲ��޶�
		TThostFtdcVolumeType	CurrPosiLimitVol;
		///��߿ɵ����
		TThostFtdcVolumeType	MaxPosiLimitVol;
	};

	///�����޲ֶ�ȱ��
	struct CKSPositionLimitVolField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType ProductID;
		///���Ʒ�Χ
		TKSControlRangeType ControlRange;
		///�޲�����
		TKSLimitFlagType LimitFlag;		
		///�ֲ��޲�
		TThostFtdcVolumeType	PosiLimitVol;
	};

	///��ѯ��ʷ����
	struct CKSQryHistoryOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��ʼ����
		TThostFtdcDateType	OrderDataStart;
		///��������
		TThostFtdcDateType	OrderDataEnd;
	};

	///��ѯ��ʷ�ɽ�
	struct CKSQryHistoryTradeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��ʼ����
		TThostFtdcDateType	TradeDataStart;
		///��������
		TThostFtdcDateType	TradeDataEnd;
	};

	///��ʷ����
	struct CKSHistoryOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///�걨ʱ��
		TThostFtdcTimeType	InsertTime;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;
		///�ɽ����
		TThostFtdcMoneyType	TradeAmount;
		///�ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///����ⶳ���
		TThostFtdcMoneyType	FrozenAmount;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///��������
		TThostFtdcDirectionType	Direction;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///ί�м۸�
		TThostFtdcPriceType	OrderPrice;
		///ί����Դ
		TThostFtdcOrderSourceType	OrderSource;
		///ί������
		TThostFtdcDateType	InsertDate;
		///ί��ʱ��
		TThostFtdcTimeType	OrderTime;
		///ί������
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///ί��״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Ʒ����
		TThostFtdcProductNameType	ProductName;
		///��Ʒ����
		TThostFtdcProductClassType	ProductClass;
		///ҵ���־
		TKSSOBusinessFlagType	BusinessFlag;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

	///��ʷ�ɽ�
	struct CKSHistoryTradeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Ʒ����
		TThostFtdcProductNameType	ProductName;
		///�ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///�ɽ����
		TThostFtdcMoneyType	TradeAmount;
		///�ɽ�����
		TThostFtdcDateType	TradeDate;
		///�ɽ�ʱ��
		TThostFtdcTimeType	TradeTime;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///������
		TThostFtdcMoneyType	Commission;
		///��ע
		TThostFtdcMemoType	Memo;
		///����ʱ��
		TThostFtdcTimeType	TraderOfferTime;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;	
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///���ұ�־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///Ȩ��������
		TThostFtdcVolumeType RoyaltyVolume;
		///���������
		TThostFtdcVolumeType ObligationVolume;
		///Ȩ���ֽ��
		TThostFtdcMoneyType	RoyaltyAmount;
		///����ֽ��
		TThostFtdcMoneyType	ObligationAmount;
		///�ɽ����
		TThostFtdcTradeIDType	TradeID;
		///ҵ���־
		TKSSOBusinessFlagType	BusinessFlag;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

	///�����ϲ�ֵ�����ѯ����
	struct CKSQryMaxCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		//��ϲ�ֱ��
		TThostFtdcCombDirectionType	CombDirection;
	};

	///��ϲ�ֵ������
	struct CKSMaxCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�����������
		TThostFtdcVolumeType	MaxCombVolume;
		///���ɲ������
		TThostFtdcVolumeType	MaxActionVolume;
	};

	///��ѯ��Ȩָ����ϸ
	struct CKSQryHistoryAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///������
		TThostFtdcDateType	DeliveryMonth;
		///�ֲַ���
		TKSSOPosiDirectionType PosiDirection;
	};

	///��ѯ��Ȩ������ϸ
	struct CKSQrySODelivDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///������
		TThostFtdcDateType	DeliveryMonth;
		///���ɽ��ղ�ѯ����
		TKSSODelivModeType	DelivMode;
	};

	///�Զ���Ȩִ�в���
	struct CKSAutoExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�Զ���Ȩ��ֵ(0-���Զ���Ȩ,��0-����������ֵ���Զ���Ȩ(20����20%))
		TThostFtdcVolumeType RangeVol;
	};

	///��Ȩָ����ϸ
	struct CKSHistoryAssignmentField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��������
		TThostFtdcTradeDateType	TradingDay;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///���֤ȯ����
		TThostFtdcInstrumentIDType	StockInstr;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///�ֲַ���
		TKSSOPosiDirectionType PosiDirection;
		///ִ�м�
		TThostFtdcPriceType	StrikePrice;
		///��Ȩָ������
		TThostFtdcVolumeType ExecVol;
		///���֤ȯӦ�ո�����
		TThostFtdcVolumeType IOVol;
		///Ӧ�ո����
		TThostFtdcMoneyType	IOAmt;
		///��Ȩ������
		TThostFtdcDateType	DelivDate;
	};

	///��Ȩ������ϸ
	struct CKSSODelivDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���֤ȯ����
		TThostFtdcInstrumentIDType	StockInstr;
		///Ӧ��/Ӧ��/��ȯ֤ȯ����
		TThostFtdcVolumeType IOVol;
		///ʵ�ո�����
		TThostFtdcVolumeType IOVolInFact;
		///�����
		TThostFtdcPriceType	SettlementPrice;
		///��ȯ��ֵ/������
		TThostFtdcMoneyType	SettlementAmt;
		///��Ȩ������
		TThostFtdcDateType	DelivDate;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
	};

	///����������ҵ��
	struct CKSSubPrimeDataBusinessField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
	};

	///������ҵ��
	struct CKSPrimeDataBusinessField
	{
		///�洢��������
		TThostFtdcProcessNameType ProcessName;
		///���ܷ�ʽ
		TThostFtdcFBTEncryModeType EncryMode;
		///��Կ
		TThostFtdcPasswordKeyType PasswordKey;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///�������������ڱ�ʶ��ǰ��������
		TThostFtdcDescriptionType AvailabeDescription;
		///���ݿ����ݵĽ�����
		TThostFtdcDateType AvailabeTradingDay;
	};

	///ָ���ĺ�Լ
	struct CKSSpecificInstrumentField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��ѯ��Լ��֤����
	struct CKSQryInstrumentMarginRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��Լ��֤����
	struct CKSInstrumentMarginRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��ͷ��֤����
		TThostFtdcRatioType	LongMarginRatioByMoney;
		///��ͷ��֤���
		TThostFtdcMoneyType	LongMarginRatioByVolume;
		///��ͷ��֤����
		TThostFtdcRatioType	ShortMarginRatioByMoney;
		///��ͷ��֤���
		TThostFtdcMoneyType	ShortMarginRatioByVolume;
		///�Ƿ���Խ�������ȡ
		TThostFtdcBoolType	IsRelative;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	
	///����ĸ��ɳֲ�ת������
	struct CKSInputPositionConvertField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ת����ת�ֽ��־
		TKSTurnResOrTurnCashFlagType TurnResOrTurnCashFlag;
		///��������
		TThostFtdcDirectionType	Direction;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		//���ɳֲ�ת������
		TThostFtdcOrderRefType OptionConvertRef;
		///����
		TThostFtdcVolumeType	Volume;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ǿ����
		TKSCombActionType  CombActionFlag;
	};

	///���ɳֲ�ת��
	struct CKSPositionConvertField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSCombStrategyIDType	StrategyID;
		///���سֲ�ת��������
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///�ֲ�ת��������
		TThostFtdcOrderSysIDType	OrderSysID;
		///ת����ת�ֽ��־
		TKSTurnResOrTurnCashFlagType TurnResOrTurnCashFlag;
		///������Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ǿ����
		TKSCombActionType  CombActionFlag;
		///����������
		TThostFtdcMoneyType	FrozenCommission;
		///���ᱣ֤��
		TThostFtdcMoneyType	FrozenMargin;
		///ί��״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///ί��ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///��������
		TThostFtdcDirectionType	Direction;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		//���ɳֲ�ת������
		TThostFtdcOrderRefType OrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///��Դ
		TKSSourceType	Source;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///��ע
		TThostFtdcMemoType	Memo;
	};

	///����ĸ�����ϲ��
	struct CKSInputCombActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���Դ���
		TKSCombStrategyIDType	StrategyID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��Լ����3
		TThostFtdcInstrumentIDType	InstrumentID3;
		///��Լ����4
		TThostFtdcInstrumentIDType	InstrumentID4;
		///�������
		TThostFtdcOrderRefType	CombActionRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///��������3
		TThostFtdcDirectionType	Direction3;
		///��������4
		TThostFtdcDirectionType	Direction4;
		///ǿ����
		TKSCombActionType  CombActionFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��ϲ�ֱ��
		TThostFtdcCombDirectionType	CombDirection;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��������ϱ��
		TThostFtdcTradeIDType	ComTradeID;
	};


	///������ϲ��
	struct CKSCombActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���Դ���
		TKSCombStrategyIDType	StrategyID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��Լ����3
		TThostFtdcInstrumentIDType	InstrumentID3;
		///��Լ����4
		TThostFtdcInstrumentIDType	InstrumentID4;
		///�������
		TThostFtdcOrderRefType	CombActionRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///��������3
		TThostFtdcDirectionType	Direction3;
		///��������4
		TThostFtdcDirectionType	Direction4;
		///ǿ����
		TKSCombActionType  CombActionFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��ϲ�ֱ��
		TThostFtdcCombDirectionType	CombDirection;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������ϱ��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���״̬
		TThostFtdcOrderActionStatusType	ActionStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///��������ϱ��
		TThostFtdcTradeIDType	ComTradeID;
		///������Դ
		TThostFtdcOrderSourceType	OrderSource;
		///ί������1
		TThostFtdcVolumeType	OrderVolume1;
		///ί������2
		TThostFtdcVolumeType	OrderVolume2;
		///ί������3
		TThostFtdcVolumeType	OrderVolume3;
		///ί������4
		TThostFtdcVolumeType	OrderVolume4;
	};

	///��ѯ������ϳֲ���ϸ
	struct CKSQryInvestorPositionCombineDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��������ϱ��
		TThostFtdcTradeIDType	ComTradeID;
	};

	///������ϳֲ���ϸ
	struct CKSInvestorPositionCombineDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///��ϱ��
		TThostFtdcTradeIDType	ComTradeID;
		///���Դ���
		TKSCombStrategyIDType	StrategyID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��Լ����3
		TThostFtdcInstrumentIDType	InstrumentID3;
		///��Լ����4
		TThostFtdcInstrumentIDType	InstrumentID4;
		///ռ�ñ�֤��
		TThostFtdcMoneyType	Margin;
		///�����Զ����������
		TThostFtdcVolumeType	CombActionVolume;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///�ֲ���
		TThostFtdcVolumeType	TotalAmt;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///��������3
		TThostFtdcDirectionType	Direction3;
		///��������4
		TThostFtdcDirectionType	Direction4;
		///�����������
		TThostFtdcDirectionType	CombDirection;
	};

	///���ɿ���Ͽɲ��������ѯ����
	struct CKSQryCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���Դ���
		TKSCombStrategyIDType	StrategyID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��Լ����3
		TThostFtdcInstrumentIDType	InstrumentID3;
		///��Լ����4
		TThostFtdcInstrumentIDType	InstrumentID4;
		///Ͷ�����
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��ϲ�ֱ��
		TThostFtdcCombDirectionType	CombDirection;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///��������3
		TThostFtdcDirectionType	Direction3;
		///��������4
		TThostFtdcDirectionType	Direction4;
		///ǿ����
		TKSCombActionType  CombActionFlag;
		///��ϱ��
		TThostFtdcTradeIDType	ComTradeID;
	};

	///���ɿ���Ͽɲ������
	struct CKSCombActionVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�����������
		TThostFtdcVolumeType	MaxCombVolume;
		///���ɲ������
		TThostFtdcVolumeType	MaxActionVolume;
	};

	///�ͻ�ÿ�ճ�������������
	struct CKSInputWithdrawCreditApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���ճ�����
		TThostFtdcMoneyType	WithdrawCredit;
		///���ճ����Ȳ�������
		TKSFOCreditApplyType CreditApplyFlag;
		///��ˮ��
		TThostFtdcTradeSerialNoType	CreditSerial;
	};

	///�ͻ�ÿ�ճ����Ȳ�ѯ����
	struct CKSQryWithdrawCreditField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///�ͻ�ÿ�ճ����Ȳ�ѯ
	struct CKSRspQryWithdrawCreditField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���ճ�����
		TThostFtdcMoneyType	WithdrawCredit;
		///�����ѳ�����
		TThostFtdcMoneyType	WithdrawedCredit;
		///����������
		TThostFtdcDateType	UpdateDate;
		///��������
		TThostFtdcDateType	SetDate;
		///����ʱ��
		TThostFtdcTimeType	SetTime;
	};

	///�ͻ�ÿ�ճ����������ѯ����
	struct CKSQryWithdrawCreditApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ѯ��ʼ����
		TThostFtdcDateType	QryCreditStart;
		///��ѯ��������
		TThostFtdcDateType	QryCreditEnd;
		///���ճ����ȴ���״̬
		TKSFOCreditStatusType	DealStatus;
	};

	///�ͻ�ÿ�ճ����������ѯ
	struct CKSRspQryWithdrawCreditApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ˮ��
		TThostFtdcTradeSerialNoType	CreditSerial;
		///���������
		TThostFtdcMoneyType	WithdrawCredit;
		///���ճ����ȴ���״̬
		TKSFOCreditStatusType	DealStatus;
		///��������
		TThostFtdcDateType	ApplyDate;
		///����ʱ��
		TThostFtdcTimeType	ApplyTime;
		///�������
		TThostFtdcDateType	ConfirmDate;
		///���ʱ��
		TThostFtdcTimeType	ConfirmTime;
	};

	///������ԤԼ��ȡ��������
	struct CKSLargeWithdrawApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ԤԼ��������
		TThostFtdcDateType	ApplyDate;
		///��������
		TKSFOCreditApplyType ApplyFlag;
		///��ˮ��
		TThostFtdcTradeSerialNoType	ApplySerial;
		///ԤԼ������
		TThostFtdcMoneyType	WithdrawCredit;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���д���
		TThostFtdcBankIDType	BankID;		
	};

	///������ԤԼ��ѯ����
	struct CKSQryLargeWithdrawApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ԤԼ��������
		TThostFtdcDateType	ApplyDate;
		///ԤԼ��������
		TThostFtdcDateType	WithdrawDate;
		///���״̬
		TKSFOCreditStatusType ApplyStatus;
		///���д���
		TThostFtdcBankIDType	BankID;		
	};

	///������ԤԼ��ѯ
	struct CKSRspLargeWithdrawApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ˮ��
		TThostFtdcTradeSerialNoType	ApplySerial;
		///���״̬
		TKSFOCreditStatusType ApplyStatus;
		///���д���
		TThostFtdcBankIDType	BankID;	
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ԤԼ������
		TThostFtdcMoneyType	WithdrawCredit;	
		///ԤԼ��������
		TThostFtdcDateType	ApplyDate;
		///ԤԼ��������
		TThostFtdcDateType	WithdrawDate;
		///��������
		TThostFtdcDateType	SetDate;
		///����ʱ��
		TThostFtdcTimeType	SetTime;
	};

	///ETF��Ȩ�������ʲ�ѯ
	struct CKSQryETFOptionInstrCommRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��ǰETF��Ȩ��Լ�����ѵ���ϸ����
	struct CKSETFOptionInstrCommRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�򿪲���������
		TThostFtdcRatioType	BuyOpenRatioByMoney;
		///�򿪲�������
		TThostFtdcRatioType	BuyOpenRatioByVolume;
		///��ƽ����������
		TThostFtdcRatioType	BuyCloseRatioByMoney;
		///��ƽ��������
		TThostFtdcRatioType	BuyCloseRatioByVolume;
		///��Ȩ��������
		TThostFtdcRatioType	StrikeRatioByMoney;
		///��Ȩ������
		TThostFtdcRatioType	StrikeRatioByVolume;
		///��������������
		TThostFtdcRatioType	SellOpenRatioByMoney;
		///������������
		TThostFtdcRatioType	SellOpenRatioByVolume;
		///��ƽ����������
		TThostFtdcRatioType	SellCloseRatioByMoney;
		///��ƽ��������
		TThostFtdcRatioType	SellCloseRatioByVolume;
		///���ҿ�����������
		TThostFtdcRatioType	CoveredOpenRatioByMoney;
		///���ҿ���������
		TThostFtdcRatioType	CoveredOpenRatioByVolume;
		///����ƽ����������
		TThostFtdcRatioType	CoveredCloseRatioByMoney;
		///����ƽ��������
		TThostFtdcRatioType	CoveredCloseRatioByVolume;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��Լ�������ʲ�ѯ
	struct CKSQryInstrCommRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///��ǰ��Լ�����ѵ���ϸ����
	struct CKSInstrCommRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ƽ��������
		TThostFtdcRatioType	OpenCloseRatioByMoney;
		///��ƽ������
		TThostFtdcRatioType	OpenCloseRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseTodayRatioByVolume;
		///ִ����������
		TThostFtdcRatioType	StrikeRatioByMoney;
		///ִ��������
		TThostFtdcRatioType	StrikeRatioByVolume;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///�����̱��۵��޸�����
	struct CKSInputQuoteUpdateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��������
		TThostFtdcOrderRefType	QuoteRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���۱��
		TThostFtdcOrderSysIDType	QuoteSysID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��۸�
		TThostFtdcPriceType	BidPrice;
		///���۸�
		TThostFtdcPriceType	AskPrice;
		///�����޸�����
		TThostFtdcOrderRefType	QuoteUpdateRef;
		///��������������
		TThostFtdcOrderRefType	AskOrderUpdateRef;
		///�����򱨵�����
		TThostFtdcOrderRefType	BidOrderUpdateRef;
		///Ӧ�۱��
		TThostFtdcOrderSysIDType	ForQuoteSysID;
	};

	///�߻���֤�����¼����
	struct CKSReqEMailLoginField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��������
		TThostFtdcUOAEMailType	UOAEMail;
		///��̬����
		TThostFtdcPasswordType	OneTimePassword;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///�ӿڶ˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	InterfaceProductInfo;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;	
		///�ն�IP��ַ
		TThostFtdcIPAddressType	ClientIPAddress;
	};

	///��ѯ���ɵ��ű�֤��
	struct CKSQryOptionMarginField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��ѯ���ɵ��ű�֤��
	struct CKSOptionMarginField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���ɵ��ű�֤��
		TThostFtdcMoneyType	OptionMargin;
	};

	///��ѯKS���ײ���
	struct CKSQryTradingParamsField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///KS���ײ���
	struct CKSTradingParamsField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ʵֵ���Ƿ����ִ�ж��ᱣ֤�����
		TKSExecFrozenMarginParamsType	ExecFrozenMarginParams;
		///ȡ���������Զ���Ȩ������ʽ����
		TKSCancelAutoExecParamsType	  CancelAutoExecParams;
	};

	///��ѯKS�ʽ��˻�
	struct CKSQryTradingAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///KS�ʽ��˻�
	struct CKSTradingAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�ʽ��ʺ�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType CurrencyID;
		///������
		TThostFtdcDateType	TradingDay;
		///���ս��
		TThostFtdcMoneyType	PreBalance;
		///�����ʽ�
		TThostFtdcMoneyType	Available;
		///��ȡ�ʽ�
		TThostFtdcMoneyType	WithdrawQuota;
		///�򶳽�
		TThostFtdcMoneyType	BuyFrozenMargin;
		///������
		TThostFtdcMoneyType	SellFrozenMargin;
		///�����������
		TThostFtdcMoneyType	FrozenCommission;
		///������
		TThostFtdcMoneyType	Commission;
		///��֤��
		TThostFtdcMoneyType	BuyMargin;
		///����֤��
		TThostFtdcMoneyType	SellMargin;
		///ƽ��ӯ��
		TThostFtdcMoneyType	CloseProfit;
		///����ӯ��
		TThostFtdcMoneyType	PositionProfit;
		///��;�ʽ�
		TThostFtdcMoneyType	Transit;
		///δ����ӯ��
		TThostFtdcMoneyType UndeliveredProfit;
		///�������
		TThostFtdcMoneyType	Deposit;
		///���ճ���
		TThostFtdcMoneyType	Withdraw;
		///��̬Ȩ��
		TThostFtdcMoneyType	Balance;
		///�����ʽ�
		TThostFtdcMoneyType	FrozenCash;
		///�ܱ�֤��
		TThostFtdcMoneyType	TotalMargin;	
		///�ܽ�������֤��
		TThostFtdcMoneyType	ExchangeMargin;
		///��Ѻ���
		TThostFtdcMoneyType	Mortgage;
		///���ý��
		TThostFtdcMoneyType	Credit;
		///���ռ���
		TKSRiskLevelType RiskLevel;
		///���ն�1
		TThostFtdcRatioType RishRatio1;
		///���ն�2
		TThostFtdcRatioType RishRatio2;
		///����Ȩ��������
		TThostFtdcMoneyType	RoyaltyIn;
		///����Ȩ����֧��
		TThostFtdcMoneyType	RoyaltyOut;
		///����Ȩ����
		TThostFtdcMoneyType	FrozenRoyalty;
		///��Ȩ��ֵ
		TThostFtdcMoneyType	OptionMarket;
		///��ֵ��̬Ȩ��
		TThostFtdcMoneyType	MarketBalance;
		///ִ�ж��ᱣ֤��
		TThostFtdcVolumeType StrikeFrozenMargin;
		///ʵʱ��֤��
		TThostFtdcMoneyType	TimeMargin;
		///�Żݱ�֤��
		TThostFtdcMoneyType	DiscountMargin;
		///ʵ���˻���������
		TThostFtdcMoneyType	EntityFundMortgageIn;
		///ʵ���˻������ʳ�
		TThostFtdcMoneyType	EntityFundMortgageOut;
		///�ճ���Ѻ�ʽ�
		TThostFtdcMoneyType	PreMortgage;
		///��Ѻ���
		TThostFtdcMoneyType	FundMortgageAvailable;
		///�����ʽ�
		TThostFtdcMoneyType	BorrowCash;
		///����ʽ�
		TThostFtdcMoneyType	LendCash;
		///�����Ʒ�ܶ��ᱣ֤��
		TThostFtdcMoneyType	SpecProductFrozenMargin;
		///�ض���Ʒ�򶳽ᱣ֤��
		TThostFtdcMoneyType	SpecProductBuyFrozenMargin;
		///�ض���Ʒ�����ᱣ֤��
		TThostFtdcMoneyType	SpecProductSellFrozenMargin;
		///�ض���Ʒ��ֱֲ�֤��
		TThostFtdcMoneyType	SpecProductBuyMargin;
		///�ض���Ʒ���ֱֲ�֤��
		TThostFtdcMoneyType	SpecProductSellMargin;
		///�����Ʒ�ֱֲ�֤��
		TThostFtdcMoneyType	SpecProductMargin;
		///�����Ʒ��������֤��
		TThostFtdcMoneyType	SpecProductExchangeMargin;
		///�����Ʒ����������
		TThostFtdcMoneyType	SpecProductFrozenCommission;
		///�����Ʒ������
		TThostFtdcMoneyType	SpecProductCommission;
		///�����Ʒƽ��ӯ��
		TThostFtdcMoneyType	SpecProductCloseProfit;
		///�����Ʒ����ӯ��
		TThostFtdcMoneyType	SpecProductPositionProfit;
		///��Ѻ�˻���������
		TThostFtdcMoneyType	FundMortgageIn;
		///��Ѻ�˻������ʳ�
		TThostFtdcMoneyType	FundMortgageOut;
		///׷�ӱ�֤��
		TThostFtdcMoneyType	AddMargin;
		///��Ȩ����ӯ��
		TThostFtdcMoneyType	OptionPositionProfit;
		///��Ȩƽ��ӯ��
		TThostFtdcMoneyType	OptionCloseProfit;
		///���ջ�����Ѻ������
		TThostFtdcMoneyType	YdFundMortgageFrozen;
		///T��ʣ�໻����
		TThostFtdcMoneyType	SwapCurrencyCredit;
		///T+1�շ����ʽ𶳽�
		TThostFtdcMoneyType	RiskFrozenCash;
		///������Ѻ������
		TThostFtdcMoneyType	FundMortgageFrozen;
		///������Ѻ���
		TThostFtdcMoneyType	FundMortgage;
	};

	///�����ѯԤԼ�����ʺ�
	struct CKSQryWithdrawReservedAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����
		TThostFtdcPasswordType	Password;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///ԤԼ�����ʺŲ�ѯ
	struct CKSWithdrawReservedAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���м��
		TThostFtdcBankAccountType	BankName;
		///�����˺�
		TThostFtdcBankAccountType	BankAccount;
		///���д���
		TThostFtdcBankIDType	BankID;
		///��������
		TThostFtdcLedgerManageBankType   Bank;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///����Ӣ�ļ��
		TThostFtdcBankAccountType	BankEnName;
	};

	///ԤԼ����
	struct CKSWithdrawReservedApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ʽ�����
		TThostFtdcPasswordType	Password;
		///������
		TThostFtdcMoneyType	Withdraw;
		///�����˺�
		TThostFtdcBankAccountType	BankAccount;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
	};

	///ԤԼ������
	struct CKSWithdrawReservedCancelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ʽ�����
		TThostFtdcPasswordType	Password;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
	};

	///ԤԼ�����ѯ����
	struct CKSQryWithdrawReservedApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ʽ�����
		TThostFtdcPasswordType	Password;
		///��ʼ����
		TThostFtdcDateType	DateStart;
		///��������
		TThostFtdcDateType	DateEnd;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///ԤԼ�����ѯ
	struct CKSRspWithdrawReservedApplyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���м��
		TThostFtdcBankAccountType	BankName;
		///�����˺�
		TThostFtdcBankAccountType	BankAccount;
		///���д���
		TThostFtdcBankIDType	BankID;
		///������
		TThostFtdcMoneyType	Withdraw;
		///����״̬
		TKSStatusMsgType    StatusMsg;
		///�������
		TKSResultMsgType	ResultMsg;
		///��������
		TThostFtdcDateType	ApplyDate;
		///����ʱ��
		TThostFtdcTimeType  ApplyTime;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��Ȩ�ԶԳ��������
	struct CKSInputOptionSelfCloseField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ԶԳ�����
		TThostFtdcOrderRefType	SelfCloseRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///������Ȩ�ԶԳ���
		TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
		///����
		TThostFtdcVolumeType	Volume;
		///��Ȩ��Ȩ��ͷ���Ƿ��ԶԳ�
		TKSOptSelfCloseFlagType	SelfCloseFlag;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
		///�Գ��־
		TThostFtdcHedgingFlagType    HedgingFlag;
	};

	///��Ȩ�ԶԳ�
	struct CKSOptionSelfCloseField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ԶԳ�����
		TThostFtdcOrderRefType	SelfCloseRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�Գ���
		TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
		///��������
		TThostFtdcVolumeType	Volume;
		///��Ȩ��Ȩ��ͷ���Ƿ��ԶԳ�
		TKSOptSelfCloseFlagType	SelfCloseFlag;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///��Ȩ�ԶԳ�ϵͳ���
		TKSOptionSelfCloseSysIDType	OptionSelfCloseSysID;
		///��Ȩ�ԶԳ���
		TThostFtdcExecResultType	SelfCloseResult;
		///��Ȩ�ԶԳ��ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
		///��ע
		TThostFtdcMemoType	Memo;
		///�Գ��־
		TThostFtdcHedgingFlagType    HedgingFlag;
	};

	///��Ȩ�ԶԳ����
	struct CKSOptionSelfCloseActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ԶԳ��������
		TThostFtdcOrderActionRefType	SelfCloseActionRef;
		///�ԶԳ�����
		TThostFtdcOrderRefType	SelfCloseRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///��Ȩ�ԶԳ������־
		TThostFtdcActionFlagType	ActionFlag;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///�����û�����
		TThostFtdcUserIDType	UserID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ȩ�ԶԳ�ϵͳ���
		TKSOptionSelfCloseSysIDType	OptionSelfCloseSysID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��ˮ��
		TThostFtdcTradeSerialNoType	Serial;
		///�Գ���
		TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
		///�Գ��־
		TThostFtdcHedgingFlagType    HedgingFlag;
	};

	///��Ȩ�ԶԳ��ѯ
	struct CKSQryOptionSelfCloseField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Ȩ��Ȩ��ͷ���Ƿ��ԶԳ�
		TKSOptSelfCloseFlagType	SelfCloseFlag;
		///��ʼ����
		TThostFtdcDateType	UpdateDateStart;
		///��������
		TThostFtdcDateType	UpdateDateEnd;
	};

	///����ĸ��������Ȩί��
	struct CKSInputCombExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����
		TThostFtdcVolumeType	Volume;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///ִ�м۸�1
		TThostFtdcPriceType	StrikePrice1;
		///ִ�м۸�2
		TThostFtdcPriceType	StrikePrice2;
		///��Լ��λ1
		TThostFtdcVolumeMultipleType UnitVolume1;
		///��Լ��λ2
		TThostFtdcVolumeMultipleType UnitVolume2;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///������
		TThostFtdcRequestIDType	RequestID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
	};

	///����ĸ��������Ȩ����
	struct CKSInputCombExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///������
		TThostFtdcRequestIDType	RequestID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///�����Ȩ���
		TThostFtdcOrderSysIDType	OrderSysID;
		///���������Ȩ���
		TThostFtdcOrderLocalIDType	OrderLocalID;
	};

	///���������Ȩ������������ѯ����
	struct CKSQryCombExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
	};

	///���������Ȩ������������ѯӦ��
	struct CKSCombExecOrderVolumeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///ִ�м۸�1
		TThostFtdcPriceType	StrikePrice1;
		///ִ�м۸�2
		TThostFtdcPriceType	StrikePrice2;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///������ִ����
		TThostFtdcVolumeType	ExecVolume;
		///������ִ����
		TThostFtdcVolumeType	ExecedVolume;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
	};

	///���������Ȩ
	struct CKSCombExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���������Ȩ���
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///�����Ȩ���
		TThostFtdcOrderSysIDType	OrderSysID;
		///Ʒ�ִ���
		TThostFtdcInstrumentIDType	ProductID;
		///��Ȩ����
		TThostFtdcOptionsTypeType	OptionsType;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///ʣ������
		TThostFtdcVolumeType	VolumeTotal;
		///����������
		TThostFtdcMoneyType	FrozenCommission;
		///���ᱣ֤��
		TThostFtdcMoneyType	FrozenMargin;
		///ί��״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///ί��ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///��Լ����1
		TThostFtdcInstrumentIDType	InstrumentID1;
		///��Լ����2
		TThostFtdcInstrumentIDType	InstrumentID2;
		///��������1
		TThostFtdcDirectionType	Direction1;
		///��������2
		TThostFtdcDirectionType	Direction2;
		///ִ�м۸�1
		TThostFtdcPriceType	StrikePrice1;
		///ִ�м۸�2
		TThostFtdcPriceType	StrikePrice2;
		///����������1
		TThostFtdcMoneyType	FrozenCommission1;
		///����������2
		TThostFtdcMoneyType	FrozenCommission2;
		///��Լ��λ1
		TThostFtdcVolumeMultipleType UnitVolume1;
		///��Լ��λ2
		TThostFtdcVolumeMultipleType UnitVolume2;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///�����ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///������Դ
		TThostFtdcOrderSourceType	OrderSource;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///��ע
		TThostFtdcMemoType	Memo;
		///ί������1
		TThostFtdcVolumeType	OrderVolume1;
		///ί������2
		TThostFtdcVolumeType	OrderVolume2;
		///��Դ
		TKSSourceType Source;
	};

	///������Ȩ�ͻ������ѯ����
	struct CKSQryStockOptionAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ʼ����
		TThostFtdcDateType	AccountDataStart;
		///��������
		TThostFtdcDateType	AccountDataEnd;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
	};

	///������Ȩ�ͻ�����
	struct CKSStockOptionAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���Ҵ���
		TThostFtdcCurrencyIDType    CurrencyID;
		///��������
		TThostFtdcDateType	EventDate;
		///����ʱ��
		TThostFtdcTimeType	EventTime;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ҵ����������
		TThostFtdcFunctionNameType	FunctionName;
		///�ʽ���
		TThostFtdcMoneyType	EventAmount;
		///�ʽ����
		TThostFtdcMoneyType	Available;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///֤ȯ����
		TThostFtdcInstrumentIDType	StockInstr;
		///֤ȯ���
		TThostFtdcInstrumentNameType StockName;
		///֤ȯ��������
		TThostFtdcVolumeType StockVolume;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Լ���
		TThostFtdcInstrumentNameType InstrumentName;
		///��Լ���ͣ���Ȩ���ͣ�
		TThostFtdcOptionsTypeType	OptionsType;
		///ҵ���־
		TKSSOBusinessFlagType	BusinessFlag;
		///�ɽ��۸�
		TThostFtdcPriceType	TradePrice;
		///�ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///�ɽ����
		TThostFtdcMoneyType	TradeAmount;
		///Ȩ������֧
		TThostFtdcMoneyType	Royalty;
		///Ӷ��
		TThostFtdcMoneyType	Commission;
		///���ַ�
		TThostFtdcMoneyType	HandleFee;
		///�����
		TThostFtdcMoneyType	SettlementFee;
		///������
		TThostFtdcMoneyType TransferFee;
		///ӡ��˰
		TThostFtdcMoneyType StamptaxFee;
		///��������		
		TThostFtdcMoneyType OtherFee;
	};

	//��ϱ�֤���Լ�����ѯ����
	struct CKSQryCombInstrumentMarginRuleField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///���Ͷ�����
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///���������
		TThostFtdcDirectionType	Direction2;
	};

	//��ϱ�֤���Լ�����ѯ��Ӧ
	struct CKSCombInstrumentMarginRuleField
	{
		///���Դ���
		TKSStrategyIDType	StrategyID;
		///��Լ����1
		TThostFtdcInstrumentIDType	FirInstrumentID;
		///��Լ����2
		TThostFtdcInstrumentIDType	SecInstrumentID;
		///��Լ����3
		TThostFtdcInstrumentIDType	ThirInstrumentID;
		///��Լ����4
		TThostFtdcInstrumentIDType	FourInstrumentID;
		///��������һ
		TThostFtdcVolRatioType	VolRatio1;		
		///����������
		TThostFtdcVolRatioType	VolRatio2;
		///����������
		TThostFtdcVolRatioType	VolRatio3;
		///����������
		TThostFtdcVolRatioType	VolRatio4;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///����������
		TThostFtdcDirectionType	Direction3;
		///����������
		TThostFtdcDirectionType	Direction4;
		///������ȼ�
		TThostFtdcPriorityType CombPriorityType;
		///���ȳ���
		TThostFtdcLegMultipleType	LegMultiple;
		///�����������
		TThostFtdcDirectionType	CombDirection;
		///Ͷ�����һ
		TThostFtdcHedgeFlagType	HedgeFlag1;
		///Ͷ����Ƕ�
		TThostFtdcHedgeFlagType	HedgeFlag2;
		///Ͷ�������
		TThostFtdcHedgeFlagType	HedgeFlag3;
		///Ͷ�������
		TThostFtdcHedgeFlagType	HedgeFlag4;
	};
	
	struct CKSQryCombInstrumentNameField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	struct CKSCombInstrumentNameField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///���Ͷ�����
		TThostFtdcHedgeFlagType	CombHedgeFlag;
		///��������һ
		TThostFtdcDirectionType	Direction1;
		///���������
		TThostFtdcDirectionType	Direction2;
		///������ȼ�
		TThostFtdcPriorityType CombPriorityType;
	};


	//���ܲ���
	struct CKSEncryptionTestField
	{
		///�ӽ��ܱ�־
		TThostFtdcEncryptionStyleType EncryptionStyle;
		///�ı�
		TThostFtdcEncryptionTextType EncryptionText;
		///��Կ
		TThostFtdcEncryptonKeyType EncryptonKey;

	};

	struct CKSSettlementInfoField
	{
		//���˽��㵥ģʽ
		TKSSettlementTypeType SettlementType;
	};

}	// end of namespace KingstarAPI
#endif