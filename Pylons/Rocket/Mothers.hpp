//Rockets
class AAW_Cluster_RK_Mother: PH_Cluster_Mother
{
	triggerSpeedCoef[] = {0.3,0.5,0.8,1};
	submunitionAmmo[] = {"RK_Cluster_AP",1};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"poissonDisc",15};
	EffectFly = "AAW_Sound_Rocket_Effect";
};
class AAW_APM_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"Mo_ClassicMineRange",1};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"poissonDisc",20};
};
class AAW_ATM_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",1};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"poissonDisc",20};
};
class AAW_XM_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",0.5,"Mo_ClassicMineRange",0.5};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"poissonDisc",30};
};
class AAW_SW_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"RK_Smoke_White",1};
	submunitionConeAngle = 15;
	submunitionConeType[] = {"randomcenter",20};
};
class AAW_WP_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"RK_Cluster_WP",1};
	submunitionConeAngle = 8;
	submunitionConeType[] = {"randomcenter",10};
	submunitionInitSpeed = 3;
};
class AAW_NP_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"RK_Cluster_NP",1};
	submunitionConeAngle = 5;
	submunitionConeType[] = {"randomcenter",10};
};
class AAW_FG_RK_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"RK_Cluster_FG",1};
	submunitionConeAngle = 3;
	submunitionInitSpeed = 1000;
	submunitionConeType[] = {"randomcenter",80};
};
class AAW_Flare_Mother: AAW_Cluster_RK_Mother
{
	triggerSpeedCoef[] = {0};
	submunitionAmmo[] = {"F_40mm_White",1};
	submunitionConeAngle = 1;
	submunitionConeType[] = {"randomcenter",1};
};
//Men
class AAW_Men_Rocket_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"RK_Cluster_RG",1};
	submunitionConeAngle = 5;
	submunitionConeType[] = {"poissonDisc",15};
};
//Bombs
class AAW_DS_BM_Mother: AAW_Cluster_RK_Mother
{
	triggerSpeedCoef[] = {0.8,1};
	submunitionAmmo[] = {"DS_Cluster_AP",1};
	submunitionConeType[] = {"randomcenter",10};
	submunitionConeAngle = 15;
	EffectFly = "AAW_Sound_Bomb_Effect";
};
class AAW_APM_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"Mo_ClassicMineRange",1};
	submunitionConeType[] = {"randomcenter",10};
};
class AAW_ATM_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",1};
	submunitionConeType[] = {"poissonDisc",10};
};
class AAW_XM_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",0.5,"Mo_ClassicMineRange",0.5};
	submunitionConeType[] = {"poissonDisc",10};
};
class AAW_SW_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"RK_Smoke_White",1};
	submunitionConeType[] = {"randomcenter",10};
};
class AAW_WP_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"RK_Cluster_WP",1};
	submunitionConeType[] = {"randomcenter",10};
	submunitionConeAngle = 15;
	submunitionInitSpeed = 10;
};
class AAW_NP_BM_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"RK_Cluster_NP",1};
	submunitionConeType[] = {"randomcenter",10};
};
class AWS_Men_Rocket_Mother: AAW_DS_BM_Mother
{
	submunitionAmmo[] = {"Mo_cluster_Bomb_01_F",1};
	submunitionConeType[] = {"randomcenter",10};
};
/////Cluster Bombs//////
///////////01///////////
class Cluster_01_DS_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"AAW_DS_BM_Mother",1};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"randomcenter",8};
};
class Cluster_01_APM_Mother: Cluster_01_DS_Mother
{
	submunitionAmmo[] = {"AAW_APM_BM_Mother",1};
	submunitionConeType[] = {"randomcenter",20};
};
class Cluster_01_ATM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",1};
};
class Cluster_01_XM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",0.5,"Mo_ClassicMineRange",0.5};
};
class Cluster_01_SW_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Smoke_White",1};
};
class Cluster_01_WP_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"BM_Cluster_WP",1};
	submunitionInitSpeed = 12;
	triggerSpeedCoef[] = {0.5,1,1.8,2};
	submunitionConeType[] = {"randomcenter",10};
};
class Cluster_01_NP_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
///////////02///////////
class Cluster_02_DS_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"AAW_DS_BM_Mother",1};
	submunitionConeAngle = 5;
	submunitionConeType[] = {"randomcenter",4};
};
class Cluster_02_APM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"AAW_APM_BM_Mother",1};
};
class Cluster_02_ATM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",1};
};
class Cluster_02_XM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",0.5,"Mo_ClassicMineRange",0.5};
};
class Cluster_02_SW_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Smoke_White",1};
};
class Cluster_02_WP_Mother: Cluster_01_WP_Mother
{

};
class Cluster_02_NP_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
///////////03///////////
class Cluster_03_DS_Mother: AAW_Cluster_RK_Mother
{
	submunitionAmmo[] = {"AAW_DS_BM_Mother",1};
	submunitionConeAngle = 10;
	submunitionConeType[] = {"randomcenter",8};
};
class Cluster_03_APM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"AAW_APM_BM_Mother",1};
};
class Cluster_03_ATM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",1};
};
class Cluster_03_XM_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"Mo_ATMineRange",0.5,"Mo_ClassicMineRange",0.5};
};
class Cluster_03_SW_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Smoke_White",1};
};
class Cluster_03_WP_Mother: Cluster_01_WP_Mother
{

};
class Cluster_03_NP_Mother: Cluster_01_APM_Mother
{
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
//ARTY
class Sh_155mm_WP_Mother: AAW_Cluster_RK_Mother
{
	submunitionConeAngle = 20;
	triggerSpeedCoef[] = {0.8,1,1.5,2};
	submunitionInitSpeed = 50;
	submunitionConeType[] = {"randomcenter",20};
	submunitionAmmo[] = {"RK_Cluster_WP",1};
};
class Sh_155mm_NP_Mother: Sh_155mm_WP_Mother
{
	submunitionConeType[] = {"randomcenter",20};
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
class Sh_82mm_WP_Mother: AAW_Cluster_RK_Mother
{
	submunitionConeAngle = 35;
	triggerSpeedCoef[] = {0.5,0.8,1.4,2};
	submunitionInitSpeed = 50;
	submunitionAmmo[] = {"RK_Cluster_WP",1};
	submunitionConeType[] = {"randomcenter",15};
};
class Sh_82mm_NP_Mother: Sh_82mm_WP_Mother
{
	submunitionConeType[] = {"randomcenter",10};
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
class R_230mm_WP_Mother: AAW_Cluster_RK_Mother
{
	submunitionConeAngle = 30;
	triggerSpeedCoef[] = {0.8,1,1.5,2};
	submunitionInitSpeed = 50;
	submunitionConeType[] = {"randomcenter",30};
	submunitionAmmo[] = {"RK_Cluster_WP",1};
};
class R_230mm_NP_Mother: R_230mm_WP_Mother
{
	submunitionConeType[] = {"randomcenter",25};
	submunitionAmmo[] = {"RK_Cluster_NP",1};
};
