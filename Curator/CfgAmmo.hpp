class CfgAmmo
{
	class Sh_155mm_WP;
	class Sh_155mm_WP_Module: Sh_155mm_WP
	{
		simulation = "shotSubmunitions";
		submunitionAmmo[] = {"Sh_155mm_WP_Mother_Module",1};
	};
	class Sh_82mm_WP;
	class Sh_82mm_WP_Module: Sh_82mm_WP
	{
		simulation = "shotSubmunitions";
		submunitionAmmo[] = {"Sh_82mm_WP_Mother_Module",1};
	};
	class R_230mm_WP;
	class R_230mm_WP_Module: R_230mm_WP
	{
		simulation = "shotSubmunitions";
		submunitionAmmo[] = {"R_230mm_WP_Mother_Module",1};
	};
	class Sh_155mm_NP;
	class Sh_155mm_NP_Module: Sh_155mm_NP
	{
		simulation = "shotSubmunitions";
	};
	class Sh_82mm_NP;
	class Sh_82mm_NP_Module: Sh_82mm_NP
	{
		simulation = "shotSubmunitions";
	};
	class R_230mm_NP;
	class R_230mm_NP_Module: R_230mm_NP
	{
		simulation = "shotSubmunitions";
	};
	
	//Mothers
	class Sh_155mm_WP_Mother;
	class Sh_155mm_WP_Mother_Module: Sh_155mm_WP_Mother
	{
		submunitionAmmo[] = {"RK_Cluster_WP",1};
		submunitionInitSpeed = 8;
	};
	class Sh_82mm_WP_Mother;
	class Sh_82mm_WP_Mother_Module: Sh_82mm_WP_Mother
	{
		submunitionAmmo[] = {"RK_Cluster_WP",1};
		submunitionInitSpeed = 8;
	};
	class R_230mm_WP_Mother;
	class R_230mm_WP_Mother_Module: R_230mm_WP_Mother
	{
		submunitionAmmo[] = {"RK_Cluster_WP",1};
		submunitionInitSpeed = 8;
	};
};