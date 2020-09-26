﻿-- lua header. UTF-8 인코딩 인식을 위해 이 줄은 지우지 마세요.

----------     Channel Server 설정     ----------

-- 크래쉬 리포트 메일링 리스트 --
--Server:SetMailingList( "demiahun@kogstudios.com, comicprince@kogstudios.com" )

-- 종료시 db 처리 대기시간 --
Server:SetShutDownWait( 60 * 1000 )


----------     Channel NetLayer 설정     ----------

NetLayer:SetCheckSequenceNum( true )
NetLayer:SetPacketAuthFailLimit( 100 ) -- 유저가 100개이상 비정상 패킷을 보내면 해당 유저 접속해제


----------     Channel SimLayer 설정     ----------
SimLayer:SetUseKogOTP ( true )

-- PublisherBillingConnectType Flag --
--[[
		PBCT_NONE				= 0,	
		// kncSend 떄문에 DBLayer와 일반 Manager 는 구분되어야 함
		PBCT_NORMAL		= 1,	// 일반적인 Manager 통해 (보통은 TCP, SOAP 등)
		PBCT_DB					= 2,	// DB 통신 Manager를 통해
		PBCT_UNUSUAL		= 3,	// 섞어 쓰던가 특이 사항 있는 경우
--]]
SimLayer:SetPublisherBillingConnectType (PBCT_NORMAL)
SimLayer:SetCheckCouponByPublisher ( true )

-- Auth Flag --
--[[
AF_INTERNAL    : 사내 인증
AF_NEXON_KOREA : 넥슨 국내 인증
AF_K3RCOMBO_US : 미국
--]]
SimLayer:SetAuthFlag( AF_GLOBAL_SERVICE )

-- IP Check --
SimLayer:SetCheckIPMode( CIM_SERVICE_MODE )		-- 서비스모드
--SimLayer:SetCheckIPMode( CIM_CHECK_MODE )		-- 점검모드
--SimLayer:AddIP( "222.113.245.86" )

-- IP Check 여부
SimLayer:SetCheckIPType( CIT_ALL_IP_ALLOW )

-- Script File Path --
SimLayer:AddPath( "C:\\ELS_SERVER\\ServerResource" ) -- server common
SimLayer:AddPath( "C:\\ELS_SERVER\\ClientScript" ) -- client script


----------     DB Layer 설정     ----------

-- 접속 DB 목록 --
--[[
DC_ACCOUNT         : 계정
DC_GAME            : 게임
DC_LOG             : 통계
DC_NX_SHOP_GATEWAY : 넥슨 빌링 게이트웨이
--]]
-- AddDB( DB 종류, file dsn, thread 개수, DBConnectionString여부 )

DBLayer:AddDB( DC_ACCOUNT,	'Account_US_SERVICE.dsn',		10, false )

if Server:GetServerGroupID() == 0 then
	DBLayer:AddDB( DC_LOG, 'log_US_SERVICE.dsn',	10, false )
else
	DBLayer:AddDB( DC_LOG, 'log_GAIA',	10, false )
end

----------     인증 설정     ----------
----------     인증 설정     ----------

--if SimLayer:GetAuthFlag() == AF_K3RCOMBO_US
--then
	-- 테스트 중
	-- add 함수들은 인자를 다 임시로.. 어차피 안쓰고 있음
	K3RComboAuthManager:AddWebServiceAddress( 'http://172.18.72.2:81/GameSecurityService.svc' )
	K3RComboAuthManager:AddWebMethod( K3R_AUTH, 'http://Kill3rComboService/2010/IGameSecurityContract/Login' )
	K3RComboAuthManager:AddWebMethod( K3R_AUTH_SECOND_SECURITY, 'http://Kill3rComboService/2010/IGameSecurityContract/GetSecurityQuestionsStatus' )
	K3RComboAuthManager:Init( 10 )
--end
----------     로그 레벨 설정     ----------

-- 로그 레벨 --
--[[
-1 : no logs
 0 : cerr, cout
 1 : cerr, cwarn, cout
 2 : cerr, cwarn, clog, cout
--]]
log( 0 )