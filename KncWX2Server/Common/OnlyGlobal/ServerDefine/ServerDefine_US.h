#pragma once

#pragma NOTE( "�̱� ���� ������ ���� �˴ϴ�." )

// undef
#undef SERV_GROW_UP_SOCKET
#undef SERV_2013_JUNGCHU_TITLE
#undef SERV_GROW_UP_TITLE

//------------------------------------------------------------------------
// ���� : XTRAP ���� ����� ������. �̰� Ǯ� �÷��� �ȳ־��ָ� ���� �ȵ�.
//------------------------------------------------------------------------
#define SERV_USE_XTRAP

//------------------------------------------------------------------------
// 2012.02.27 XTRAP map ���� �ε� �ڵ�ȭ
//------------------------------------------------------------------------
#define SERV_XTRAP_MAP_LOADING_AUTOMATION

//------------------------------------------------------------------------
// ���� : �̱��� �Ƶڰ� �����ּҴ�!
//------------------------------------------------------------------------
#define SERV_EMAIL_ID

//------------------------------------------------------------------------
// 2012.07.06 ũ���� ���� �۾��� ���� ���� ���
//------------------------------------------------------------------------
#define SERV_CATCH_HACKUSER_INFO

//------------------------------------------------------------------------
// ������ ��� �缳IP ����								 - ������	-- ( SERV_USE_SECOND_IP �� ���� : ���� : ���� IP ���� ���� �ӽ� ��(�ʸ���) )
//------------------------------------------------------------------------
//#define SERV_PRIVATE_IP_SERVER_NETWORKING // SERV_ALL_RENEWAL_SP ������ ������ ����

//------------------------------------------------------------------------
// 2011.08.28 ��ȫ�� ĳ�� ������ ���� �� ���� ����
//------------------------------------------------------------------------
#define SERV_CASHITEM_PURCHASE_RESTRICTION

//------------------------------------------------------------------------
// �ۺ����� ��� �̵��� �α��� ó��
//------------------------------------------------------------------------
#define SERV_LOGIN_TOU

//------------------------------------------------------------------------
// ĳ���� ���� ���μ��� ���� (���� ��� �Ⱓ ����)
//------------------------------------------------------------------------
#define SERV_UNIT_WAIT_DELETE // 2012. 04. 28	�ڱ���	���� �Ϸ�

// 2013.03.13 ������ : ���������� ���� �˻�
//��뿩�� Ȯ���ϰ� ����#define SERV_CHECK_ENCHANT_COUPON_IN_SERVER

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-05-13
// ��ġ��¥: 2013-05-15
// �۾�����: �ʵ� ��Ű ���� �۾�
#define SERV_BATTLEFIELD_COOKIE_PIECE
//////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------
// ������ : [2012/03/19]	2�������е� ų���޺� ����
//------------------------------------------------------------------------
#define SERV_SECOND_SECURITY_K3R_AUTH


//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȿ��
// ���̵�: cho345
// �۾����۳�¥: 2013-06-12
// ��ġ��¥: --
// �۾�����: ����, �Ϲ� ä�� �˸°� ������ �ϴ� �۾�
//			 SERVER_GROUP_UI_ADVANCED define �� ���� �ִٴ� �����Ͽ� �۾��� ����
//			���� : ��Ƽ �ʴ�, �׷쿡 �°� ������ �ϴ� ��� �߰�
#define SERV_SEPARATE_SERVERSET_US_USER
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: ninil
// �۾����۳�¥: 2013-04-25
// ��ġ��¥: 2013-05-15
// �۾�����: DB�� Ÿ�� �ɸ� ����Ʈ�� TimeEvent ������ �ȵ������� Ŭ�� �˷��ֱ�
#define SERV_CHECK_TIME_QUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-06-18
// ��ġ��¥: 2013-06-19
// �۾�����: �̺�Ʈ�� �׳�ý�
#define SERV_US_GNOSIS
//////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------
// �߱� ���� ������ ����ũ Ȯ�� (ĳ����UID ����) // 2011.11.01 �ڱ���
//------------------------------------------------------------------------
#define EXTEND_SERVER_GROUP_MASK	// 2013. 06. 10	������ ���� �Ϸ�

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: ninil
// �۾����۳�¥: 2013-07-10
// ��ġ��¥: --
// �۾�����: ���� �ý��� ������ ������ ��Ŷ �ð� ������ ����
//			 �������� �츮�������� �ľ��� �صδ°� ������ �α׸� ����ϴ�. ���� �ȳ���
//#define SERV_PAYLETTER_BILLING_ERROR_PACKET_LOG
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: ninil
// �۾����۳�¥: 2013-07-14
// ��ġ��¥: 2013-07-24
// �۾�����: ����(����, Ŭ��)
#define SERV_STEAM
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-07-22
// ��ġ��¥ : 2013-07-24
// �۾����� : ���� ���� ���η� �����ϴ� ���� �̺�Ʈ
#define SERV_STEAM_USER_CONNECT_EVENT
//////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------
// 2012.06.20 Ŀ��Ʈ �α� ä�θ� �߰�
//------------------------------------------------------------------------
#define SERV_CONNECT_LOG_CHANNELING

//////////////////////////////////////////////////////////////////////////
// �̸�: �ֹ�ö
// ���̵�: hohocmc
// �۾����۳�¥: 2013-07-24
// ��ġ��¥: 2013-08-07
// �۾�����: �ϵ� �ڵ� Ư�� ��� �Բ� ���� ���� ����Ʈ 
//#define SERV_PET_WITH_DUNGEON_CLEAR_COUNT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-06-04
// ��ġ��¥: 2013-06-11
// �۾�����: �߰� ���� ��ɽ� Ư�� ������ �����ϰ� �־����� ���� ������ ����
//#define SERV_CAMERA_EVENT
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-08-29
// ��ġ��¥ : 2013-09-11
// �۾����� : ���λ��� ������ ���� �ȵǴ� ���� ���� Ȯ�ο� �α� �߰�
// ���� req ���� ������ ���ٴ� ���Ƕ�, ack ���� ���� ó�� �ϴºκп� �α� �߰� ����
#define SERV_BUY_PERSONAL_SHOP_ITEM_ERROR_LOG
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-09-22
// ��ġ��¥ : 2013-10-02
// �۾����� : ĳ���� ������ �г��� SP ȣ�� ������ �ѹ� �� �˻�
#define SERV_NICK_NAME_DOUBLE_CHECK
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-09-23
// ��ġ��¥ : 2013-10-02
// �۾����� : ���Ѻ��� ���� �α� ���ÿ� ���⵵�� �۾�
// 2013-09-23 : ĳ���� �г��� �߸� �� ���� ���� ����� �ִ�. Type 1
#define SERV_WATCH_LOG
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-10-01
// ��ġ��¥ : 2013-10-02
// �۾����� : �������� ���� ������ �α� ����
#define SERV_MINIMUM_LOG_HAKC_USER
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-08-17
// ��ġ��¥: 2013-08-29
// �۾�����: ������ ���� �̺�Ʈ(������ ��ȯ�� �� ������ ������ ���� ����)
//#define SERV_NEW_ITEM_SYSTEM_2013_05_EVENT	// �̺�Ʈ ����
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-07-17
// ��ġ��¥: 2013-07-17
// �۾�����: ��Ű�� �׳�ý� �ູ ����ϵ��� ����
#define SERV_USE_GNOSIS_IN_PACKAGE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-07-31
// ��ġ��¥: 2013-08-07
// �۾�����: ���� ������ ���� �����ϵ��� ( ���� Ƚ�� ���� ���� )
// ���� �ܿ��� ���� �� ����. ��ȹ������ MaxSealCount ���� 255�̸� ��� ����
#define SERV_REMOVE_SEAL_COUNT_DECREASE // �̱� ������. global �� ���� �Ǹ� ���� �������� ����ô�.
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ��ȫ��
// ���̵� : honnak
// �۾����۳�¥ : 2013-10-15
// ��ġ��¥ : 2013-10-17
// �۾����� : ��ų Ʈ�� ���� �̺�Ʈ �׳�ý��� �ູ 130 SP (1�ϱ�)
#define SERV_EVENT_SKILL_POINT_1DAY_USE_INVEN
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-10-10
// ��ġ��¥: 2013-10-17
// �۾�����: �縮���� ���� ��ų �ʱ�ȭ �޴�, �縮���� ��ų �ʱ�ȭ �޴�
#define SERV_EVENT_RURIEL_RESET_SKILL_ITEM
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : �輮��
// ���̵� : 86red
// �۾����۳�¥ : 2013-10-14
// ��ġ��¥ : 2013-10-16
// �۾����� : ����, ������ ������ �帵ũ ���� �ؿ��� RewardID ����
#define SERV_PRESENT_SKILL_INIT_ITEM_INT
#ifdef SERV_PRESENT_SKILL_INIT_ITEM_INT
namespace _CONST_PRESENT_SKILL_INIT_ITEM_INT_
{
	const int iReachLimitLevel	= 1528; // ���� �޼� �� ������ �帵ũ (3�ϱ�) ����
	const int iChangeFirstJob	= 1529; // 1�� ĳ�� ������ ���� �� ������ �帵ũ (3�ϱ�) �� 1�� ���θ�� ������ ����
	const int iChangeSecondJob	= 1530; // 2�� ĳ�� ������ ���� �� ������ �帵ũ (3�ϱ�) �� 2�� ���θ�� ������ ����
}
#endif SERV_PRESENT_SKILL_INIT_ITEM_INT

//////////////////////////////////////////////////////////////////////////
// �̸� : �輮��
// ���̵� : 86red
// �۾����۳�¥ : 2013-06-28
// ��ġ��¥ : 2013-07-04(TW)
// �۾����� : �ű� ĳ����, ���� ĳ���� ���� ���� �����̺�Ʈ
//#define SERV_TIME_EVENT_ONLY_CURRENT_USER_CHAR
//#define SERV_TIME_EVENT_ONLY_CURRENT_USER
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-07-31
// ��ġ��¥: 2013-08-07
// �۾�����: ���� ������ ���� �����ϵ��� ( ���� Ƚ�� ���� ���� )
// ���� �ܿ��� ���� �� ����. ��ȹ������ MaxSealCount ���� 255�̸� ��� ����
#define SERV_REMOVE_SEAL_COUNT_DECREASE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-09-25
// ��ġ��¥: 2013-09-25
// �۾�����: �ѹ� �ƹ�Ÿ ���� �߰�
#define SERV_NEW_ONE_PIECE_AVATAR_SLOT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-10-28
// ��ġ��¥: 2013-10-28
// �۾�����: �ݿ��� �и�
#define SERV_SEPARATE_NET_ERROR
//////////////////////////////////////////////////////////////////////////

// �̸� : ������
// ���̵� : orange82
// �۾����۳�¥ : 2013-10-25
// ��ġ��¥ : 2013-11-06
// �۾����� : �÷��� ���Դ�! ģ�� ��õ �̺�Ʈ
//#define SERV_RECRUIT_EVENT_BASE

#ifdef SERV_RECRUIT_EVENT_BASE
#define SERV_NO_GAMEINVITE
#define STRING_RECRUIT_EVENT_DATE L"2013-11-06 00:00:00"
#endif SERV_RECRUIT_EVENT_BASE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : orange82
// �۾����۳�¥ : 2013-10-26
// ��ġ��¥ : 2013-11-06
// �۾����� : �÷��� ���Դ�! �Բ� �ϴ� ��������Ʈ ����
//#define SERV_RECRUIT_EVENT_SUBQUEST

#ifdef SERV_RECRUIT_EVENT_SUBQUEST
#define PLAY_TOGETHER_DUNGEON_CLEAR_SUBQUEST_ID		92020
#define PLAY_TOGETHER_KILL_FIELD_BOSS_SUBQUEST_ID	92030
#define PLAY_TOGETHER_PLAY_PVP_SUBQUEST_ID			92040
#endif SERV_RECRUIT_EVENT_SUBQUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : orange82
// �۾����۳�¥ : 2013-10-28
// ��ġ��¥ : 2013-11-06
// �۾����� : �÷��� ���Դ�! �ű� ������ ������ ����Ʈ
//#define SERV_RECRUIT_EVENT_QUEST_FOR_NEW_USER

#ifdef SERV_RECRUIT_EVENT_QUEST_FOR_NEW_USER
const int arriRecruitEventQuestIDForNewUser[] = { 91950, 91960, 91970, 91980, 91990, 92000, 92010 };
#endif SERV_RECRUIT_EVENT_QUEST_FOR_NEW_USER
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : orange82
// �۾����۳�¥ : 2013-10-30
// ��ġ��¥ : 2013-11-06
// �۾����� : �÷��� ���Դ�! ���½� 6������ ������ ť��
#define SERV_PLAY_TOGETHER_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-11-04
// ��ġ��¥ : 2013-11-06
// �۾����� : �κ�Ȯ�� �̺�Ʈ ������ �߰�.
#define SERV_EXPAND_INVENTORY_BY_EVENT_ITEM
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-11-08
// ��ġ��¥ : 2013-11-20
// �۾����� : ���� ù ����(����2��) �̺�Ʈ
//			 ���� �޼��� ���� ����
//#define SERV_SANDER_UPDATE_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �輮��
// ���̵�: 86red
// �۾����۳�¥: 2013-05-11
// ��ġ��¥: 2013-05-24
// �۾�����: �̺�Ʈ�� �׳�ý� �ູ(JP)
#define SERV_EVENT_CASH_SKILL_POINT_ITEM_JP
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : orange82
// �۾����۳�¥ : 2013-11-13
// ��ġ��¥ : 2013-11-??
// �۾����� : �߼��������� Ư�� ������ ����ÿ��� Ư�� ����Ʈ�� ���
// �߰��۾� : ������ ���������� ���( ������ )
#define SERV_THANKS_GIVING_DAY_DROP_FOR_EQUIPPED_USER
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : �輮��
// ���̵� : 86red
// �۾����۳�¥ : 2013-09-04
// ��ġ��¥ : 2013-09-11
// �۾����� : ����� �� ����3 ���� ����� �ؿ��� ��� ����!
#define SERV_NEW_DEFENCE_DUNGEON_NO_USE_DEFENSE_BUFF_AND_DEBUFF
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : �輮��
// ���̵� : 86red
// �۾����۳�¥ : 2013-09-04
// ��ġ��¥ : 2013-09-11
// �۾����� : ����� �� ����3 Ȯ�� 100% �̺�Ʈ
#define SERV_NEW_DEFENCE_DUNGEON_ENTER_100_PERCENT_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ��ȫ��
// ���̵� : honnak
// �۾����۳�¥ : 2013-09-04
// ��ġ��¥ : 2013-09-12
// �۾����� : ����� �� ���� �̺�Ʈ
//#define SERV_GATE_OF_DARKNESS_SUPPORT_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �輮��[12.12.18] 2���̻� ��Ƽ�÷���(77000, 77020)
// ������[13.02.16] 3���̻� ��Ƽ�÷���(84430)
// ������[13.02.16] �Ʒ� ��� �����ϵ��� �ڵ� ����
//////////////////////////////////////////////////////////////////////////
#define SERV_PARTYPLAY_WITH_DUNGEON_CLEAR_COUNT // 2012. 12.19 lygan_������ ����
#ifdef SERV_PARTYPLAY_WITH_DUNGEON_CLEAR_COUNT
namespace _CONST_PARTYPLAY_WITH_DUNGEON_CLEAR_COUNT_
{
	const int aSubQuestID[] = { 63962 };
	const int iSubQuestMaxNum = 1;
	const char cUnitType = 0;
	const char cUnitClass = 31;
	const char cRequiredMembers = 2;
}
#endif SERV_PARTYPLAY_WITH_DUNGEON_CLEAR_COUNT

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-11-27
// ��ġ��¥ : 2013-12-04
// �۾����� : �Ƹ��� ä�θ�, SERV_STEAM �������� ���� �־�� �մϴ�.
#define SERV_CHANNELING_AERIA
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2013-12-03
// ��ġ��¥ : 2013-12-04
// �۾����� : �Ƹ��� ä�θ� �̺�Ʈ. �Ƹ��� ä�θ� ĳ���� ���ӽ� Īȣ ���� �� ����
// �̺�Ʈ ����
//#define SERV_CHANNELING_AERIA_EVENT
//////////////////////////////////////////////////////////////////////////

// �ƶ� ������� ���� undef
#undef SERV_NO_ARA

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-06-28
// ��ġ��¥: 2013-07-04
// �۾�����: �ƶ� ������ �̺�Ʈ, Ư�� ���� ������ ������ ���� ���� ����
// ��� �� Ȯ�� �ʼ�, ������ ������ ����!! ( 13.08.24 ������ ����������)
#define SERV_EVENT_LEVEL_UP_ARA
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ��ȫ��
// ���̵� : honnak
// �۾����۳�¥ : 2013-06-28
// ��ġ��¥ : 2013-07-04
// �۾����� : Ư�� ������ ������ ���¿��� �̺�Ʈ ��ư Ŭ���� Ư�� Ȯ���� ���� ����
#define SERV_READY_TO_SOSUN_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-07-07
// ��ġ��¥: 2013-07-11
// �۾�����: �ƶ� 1�� ������ �߰� ���� �̺�Ʈ(����Ʈ ���� �Ǵ� ĳ�������� ����)
#define SERV_ARA_FIRST_CLASS_CHANGE_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-07-08
// ��ġ��¥: 2013-07-11
// �۾�����: �Ҽ��� ���� �÷��̽� ���� ���â���� ������ ȹ���ϴ� ���
#define SERV_DUNGEON_CLEAR_PAYMENT_FOR_ARA_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// ũ��������, ����, ���� �̺�Ʈ ����
//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-11-20
// ��ġ��¥: 2013-12-??
// �۾�����: Ư�� �������� ���� ���� �� �װ��� �Ҹ��ϸ鼭 Ŭ���� ���� ����
#define SERV_PAYMENT_ITEM_WITH_CONSUMING_OTHER_ITEM
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-11-21
// ��ġ��¥: 2013-12-??
// �۾�����: Ư�� NPC�� ���Ῡ�߸� Ŭ���� ���� ����
#define SERV_PAYMENT_ITEM_WITH_ALLY_NPC
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-11-21
// ��ġ��¥: 2013-12-??
// �۾�����: 2013 ����, 2014 ���� �̺�Ʈ
#define SERV_NEW_YEAR_EVENT_2014
#ifdef SERV_NEW_YEAR_EVENT_2014
namespace _CONST_SERV_NEW_YEAR_EVENT_2014_
{
	const int iMaxLevelSpecialMissionItemID = 153000100; // ���� ������
	const int iMaxLevelCertificationSubQuestID = 140221;
}
#endif SERV_NEW_YEAR_EVENT_2014
//////////////////////////////////////////////////////////////////////////
// ũ��������, ����, ���� �̺�Ʈ ��
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-12-06
// ��ġ��¥: 2013-12-??
// �۾�����: ���� �������� ����Ʈ�� ������ �ִ� ���.
//			 SERV_DUNGEON_CLEAR_PAYMENT_ITEM_FIX �� �ʿ��մϴ�.
#define SERV_PAYMENT_ITEM_ON_GOING_QUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-12-10
// ��ġ��¥: 2013-12-??
// �۾�����: �������� �� �κ��̳� �������� �� �ű�� ��
#define SERV_RESTRICTED_TO_MOVE_TO_BANK
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// �̸� : �輮��
// ���̵� : 86red
// �۾����۳�¥ : 2013-09-17
// ��ġ��¥ : 2013-09-25
// �۾����� : Ż �� ���� ���� ����Ʈ �۾� 
// 1.����Ŭ����, 2.�ʵ� ���� ó�� 3. ���̵� �����ֱ�
#define SERV_EVENT_RIDING_WITH_SUB_QUEST
#ifdef SERV_EVENT_RIDING_WITH_SUB_QUEST
namespace _CONST_AEVENT_RIDING_WITH_SUB_QUEST
{
	const int iHasEventQuestRewardID = 2020;			// ����Ʈ ���� �� ���޵Ǵ� ������.
	const int iHasEventQuestID = 74590;				// �̺�Ʈ ����Ʈ ID
	const int iOnEventRidingPetQuestID1 = 74581;	// ���̵� �� Ÿ�� �ʵ� ���� 3���� ���
	const int iOnEventRidingPetQuestID2 = 74580;	// �̺�Ʈ�� ���̵� �� Ÿ�� 3ȸ���� Ŭ����
	const int iOnEventRidingPetQuestID3 = 74620;	// ĳ�ÿ� ���̵� �� Ÿ�� 3ȸ���� Ŭ����
}
#endif SERV_EVENT_RIDING_WITH_SUB_QUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-12-10
// ��ġ��¥: 2013-12-12
// �۾����� : �ƶ� �� 1�� ����(�Ҹ�) �̺�Ʈ �ڵ� �۾�
#define SERV_ARA_NEW_FIRST_CLASS_EVENT
#ifdef SERV_ARA_NEW_FIRST_CLASS_EVENT
namespace _CONST_ARA_NEW_FIRST_CLASS_EVENT_REWARD_ID
{
	const int iClassChangeQuestReward = 2025;	// ���� ����Ʈ �Ϸ�� ����
	const int iClassChangeReward = 2026;			// ���� ĳ�� ������ �� ���� ���� ĳ�� ������ ���Ž� ����
	const int iLevelUpReward1 = 2027;			// �Ҹ� ĳ���� ���� 20 �޼��� ����
	const int iLevelUpReward2 = 2028;			// �Ҹ� ĳ���� ���� 25 �޼��� ����
	const int iLevelUpReward3 = 2029;			// �Ҹ� ĳ���� ���� 30 �޼��� ����
	const int iLevelUpReward4 = 2030;			// �Ҹ� ĳ���� ���� 35 �޼��� ����
}
#endif SERV_ARA_NEW_FIRST_CLASS_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �輮��
// ���̵�: 86red
// �۾����۳�¥: 2013-11-04
// ��ġ��¥: 2013-11-06
// �۾�����: �縮�� �ູ���� ���� , �� ��ȭ��
#define SERV_BLESSED_RURIEL_ENCHANT_STONE_EVENT
#ifdef SERV_BLESSED_RURIEL_ENCHANT_STONE_EVENT
namespace _CONST_BLESSED_RURIEL_ENCHANT_STONE_EVENT
{
	// ItemID
	const int	iRuriel_Enchant_Stone_Weapon_Item	= 152000121; // �縮���� �ູ���� ���Ⱝȭ��
	const int	iRuriel_Enchant_Stone_Defence_Item	= 152000122; // �縮���� �ູ���� ����ȭ��
}
#endif //SERV_BLESSED_RURIEL_ENCHANT_STONE_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-12-13
// ��ġ��¥: 2013-12-19
// �۾�����: �۷ι� �̼� �Ŵ���
#define SERV_GLOBAL_MISSION_MANAGER
#define SERV_SECOND_CLASS_WORLD_WAR_EVENT	// �ƶ� 2�� ���� World War �̺�Ʈ��
namespace _CONST_SECOND_CLASS_WORLD_WAR_EVENT
{
	const bool	bWorldWarEventForElesis1stClass = false;
}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-12-16
// ��ġ��¥: 2013-12-19
// �۾�����: �ƶ� 2�� ���� �̺�Ʈ
#define SERV_ARA_NEW_SECOND_CLASS_EVENT
#ifdef SERV_ARA_NEW_SECOND_CLASS_EVENT
namespace _CONST_ARA_NEW_SECOND_CLASS_EVENT_REWARD_ID
{
	const int iAraNewSecondClassChangeReward = 2032;	// �ƶ� �� 2�� �������� ������ ����(��������� ���Žô� ����)
	const int iSecondClassChangeReward = 2033;		// 2�� �������� ������ ����(��������� ���Žô� ����)
}
#endif SERV_ARA_NEW_SECOND_CLASS_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ȫ��
// ���̵�: honnak
// �۾����۳�¥: 2013-12-16
// ��ġ��¥: 2013-12-19
// �۾�����: ���� ���� ������ �˻��Ͽ� �����ϴ� ���� �̺�Ʈ �ɼ�
#define SERV_UNIT_CLASS_LEVEL_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ֹ�ö
// ���̵�: hohocmc
// �۾����۳�¥: 2013-12-13
// ��ġ��¥: 2013-12-19
// �۾�����: ������ 2�� ���� �����
#define SERV_UNLIMITED_SECOND_CHANGE_JOB
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: ninil
// �۾����۳�¥: 2014-01-09
// ��ġ��¥: 2014-01-09
// �۾�����: Sub Title Mission �Ľ� �������� ũ���� �� �� �ִ� �κ� ����
#define SERV_SUB_TITLE_MISSION_BUG_FIX
//////////////////////////////////////////////////////////////////////////

//���տ� �Ҹ�, ���� Ǯ���� �����ؾ� �մϴ�.
#define SERV_ARA_CHANGE_CLASS_SECOND

//////////////////////////////////////////////////////////////////////////
// �̸� : ��ȫ��
// ���̵� : honnak
// �۾����۳�¥ : 2013-09-17
// ��ġ��¥ : 2013-09-26
// �۾����� : ��ȥ �ý��� �ؿ��� �̺�Ʈ( schein marry )
#define SERV_RELATIONSHIP_EVENT_INT
#ifdef SERV_RELATIONSHIP_EVENT_INT
namespace _CONST_SERV_RELATIONSHIP_EVENT_INT_REWARD_ID
{
	const int iRelationshipEventReward = 2052;	// �θ�ƽ ���� ����ũ, �θ�ƽ ������, ���� ��ȥ ��༭
}
#endif SERV_RELATIONSHIP_EVENT_INT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ��ȫ��
// ���̵� : honnak
// �۾����۳�¥ : 2013-09-18
// ��ġ��¥ : 2013-09-26
// �۾����� : ��ȥ �ý��� �ؿ��� �̺�Ʈ�� ��������Ʈ
#define SERV_RELATIONSHIP_EVENT_SUBQUEST
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸� : ������
// ���̵� : ninil
// �۾����۳�¥ : 2014-02-12
// ��ġ��¥ : 2014-02-12
// �۾����� : �����ý� ������ �� ���¿��� ���� �ִ� �κе� ������ ������. �����ý� ���� �����ϸ� �˴ϴ�.
// 1. ��ȯ �ִ� ���� 7�� ����
#define SERV_NEW_CHARACTER_EL_DISABLE
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2014-02-04
// ��ġ��¥: 2014-02-12
// �۾�����: �ؿܿ� ���� �е� ���� DB ������ ������ ���� ������ ������
#define SERV_KEY_MAPPING_INT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ��ö��
// ���̵�: charses
// �۾����۳�¥: 2013-09-17
// ��ġ��¥: 2013-09-25
// �̺�Ʈ �Ⱓ: 2013-10-02 ~ 2013-10-09
// �۾�����: �ű� ĳ���� ���� Ƚ���� �����Ѵ�.
//#define SERV_LIMIT_TO_CREATE_NEW_CHARACTER_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: ������
// ���̵�: orange82
// �۾����۳�¥: 2013-11-14
// ��ġ��¥: 2013-11-??
// �۾�����: �����ý� ���� ���� �̺�Ʈ. ���� �ڵ� �ǻ���� ������ �ϳ��� ����
//#define SERV_ELISIS_PREVIOUS_SIS_EVENT
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// �̸�: �ӱԼ�
// ���̵�: bowrain
// �۾����۳�¥: 2013-09-12
// ��ġ��¥: 2013-xx-xx
// �۾�����: GM������ ����� ������ ���� ( ID, �ѱ��̸� , �����̸� ) DB�� ����
#define SERV_USE_GM_TOOL_INFO
//////////////////////////////////////////////////////////////////////////