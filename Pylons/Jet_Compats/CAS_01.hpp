class Plane_CAS_01_base_F: Plane_Base_F
{
	class Components;
};
class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
{
	class Components: Components
	{
		class TransportPylonsComponent
		{
			class Pylons
			{
				class Pylons1
				{
					hardpoints[] = 
					{
						"B_MISSILE_PYLON",
						"B_BOMB_PYLON",
						"B_USAF_AIM9X",//AA
						"B_USAF_AIM9M",
						"B_AIM9M_DUAL_RAIL",
						"B_AIM9X_DUAL_RAIL",
						"B_BOMB_FFAR7",//Rocket
						"B_BOMB_FFAR21",
						"B_BOMB_APKWS7"/*,
						"B_BOMB_GBU12",//Bomb
						"B_BOMB_GBU24",
						"B_BOMB_GBU28",
						"B_BOMB_GBU31",
						"B_BOMB_GBU32",
						"B_BOMB_GBU38",
						"B_BOMB_GBU39",
						"B_BOMB_GBU49",
						"B_BOMB_GBU54",
						"B_BOMB_GBU53",
						"B_BOMB_CBU87",
						"B_BOMB_CBU89",
						"B_BOMB_CBU97",
						"B_BOMB_CBU103",
						"B_BOMB_CBU104",
						"B_BOMB_CBU105",
						"B_BOMB_MK20",
						"B_BOMB_MK77",
						"B_BOMB_MK82",
						"B_BOMB_MK82SE",
						"B_BOMB_MK84",
						"B_BOMB_MK84AIR",
						"B_USAF_AARGMER",
						"B_USAF_AARGMER_2"*/
					};
				};
				class Pylons2: Pylons1
				{
					hardpoints[] += 
					{
						"B_MISSILE_PYLON",
						"B_BOMB_PYLON",
						"B_MISSILE_AGM65D",//AG
						"B_MISSILE_AGM65E",
						"B_MISSILE_AGM65K"
					};
				};
				class Pylons3: Pylons1
				{
					hardpoints[] += 
					{
						"B_MISSILE_PYLON",
						"B_BOMB_PYLON",
						"B_MISSILE_AGM65D",//AG
						"B_MISSILE_2AGM65D",
						"B_MISSILE_3AGM65D",
						"B_MISSILE_AGM65E",
						"B_MISSILE_2AGM65E",
						"B_MISSILE_AGM65K",
						"B_MISSILE_2AGM65K",
						"B_BOMB_AGM154A",
						"B_BOMB_2AGM154A",
						"B_BOMB_AGM154B",
						"B_BOMB_2AGM154B",
						"B_BOMB_AGM154C",
						"B_BOMB_2AGM154C",
						"AGM_158",
						"B_USAF_AIM9X",//AA
						"B_USAF_AIM9M",
						"B_AIM9M_DUAL_RAIL",
						"B_AIM9X_DUAL_RAIL",
						"B_BOMB_2GBU12_BRU57",//Bomb
						"B_BOMB_2GBU38",
						"B_BOMB_2GBU49",
						"B_BOMB_2GBU54",
						"B_BOMB_2GBU12",
						"B_BOMB_3GBU12",
						"B_BOMB_2CBU87_BRU_42",
						"B_BOMB_3CBU87",
						"B_BOMB_2CBU89_BRU_42",
						"B_BOMB_3CBU89",
						"B_BOMB_3CBU97",
						"B_BOMB_3CBU103",
						"B_BOMB_3CBU104",
						"B_BOMB_3CBU105",
						"B_BOMB_2MK20_BRU_42",
						"B_BOMB_3MK20",
						"B_BOMB_3MK82",
						"B_BOMB_3MK82SE"
					};
				};
				class Pylons4: Pylons1
				{
					hardpoints[] += 
					{
						"B_MISSILE_PYLON",
						"B_BOMB_PYLON",
						"B_MISSILE_AGM65D",//AG
						"B_MISSILE_2AGM65D",
						"B_MISSILE_3AGM65D",
						"B_MISSILE_AGM65E",
						"B_MISSILE_2AGM65E",
						"B_MISSILE_AGM65K",
						"B_MISSILE_2AGM65K",
						"B_BOMB_AGM154A",
						"B_BOMB_2AGM154A",
						"B_BOMB_AGM154B",
						"B_BOMB_2AGM154B",
						"B_BOMB_AGM154C",
						"B_BOMB_2AGM154C",
						"AGM_158",
						"B_USAF_AIM9X",//AA
						"B_USAF_AIM9M",
						"B_AIM9M_DUAL_RAIL",
						"B_AIM9X_DUAL_RAIL",
						"B_BOMB_2GBU12_BRU57",//Bomb
						"B_BOMB_2GBU38",
						"B_BOMB_2GBU49",
						"B_BOMB_2GBU54",
						"B_BOMB_2GBU12",
						"B_BOMB_3GBU12",
						"B_BOMB_2CBU87_BRU_42",
						"B_BOMB_3CBU87",
						"B_BOMB_2CBU89_BRU_42",
						"B_BOMB_3CBU89",
						"B_BOMB_3CBU97",
						"B_BOMB_3CBU103",
						"B_BOMB_3CBU104",
						"B_BOMB_3CBU105",
						"B_BOMB_2MK20_BRU_42",
						"B_BOMB_3MK20",
						"B_BOMB_3MK82",
						"B_BOMB_3MK82SE"
					};
				};
				class Pylons5: Pylons1
				{
					hardpoints[] = 
					{
						"B_MISSILE_PYLON",
						"B_BOMB_PYLON",
						"B_MISSILE_AGM65D",//AG
						"B_MISSILE_2AGM65D",
						"B_MISSILE_3AGM65D",
						"B_MISSILE_AGM65E",
						"B_MISSILE_2AGM65E",
						"B_MISSILE_AGM65K",
						"B_MISSILE_2AGM65K",
						"B_BOMB_AGM154A",
						"B_BOMB_2AGM154A",
						"B_BOMB_AGM154B",
						"B_BOMB_2AGM154B",
						"B_BOMB_AGM154C",
						"B_BOMB_2AGM154C",
						"AGM_158",
						"B_USAF_AIM9X",//AA
						"B_USAF_AIM9M",
						"B_AIM9M_DUAL_RAIL",
						"B_AIM9X_DUAL_RAIL",
						"B_BOMB_2GBU12_BRU57",//Bomb
						"B_BOMB_2GBU38",
						"B_BOMB_2GBU49",
						"B_BOMB_2GBU54",
						"B_BOMB_2GBU12",
						"B_BOMB_3GBU12",
						"B_BOMB_2CBU87_BRU_42",
						"B_BOMB_3CBU87",
						"B_BOMB_2CBU89_BRU_42",
						"B_BOMB_3CBU89",
						"B_BOMB_3CBU97",
						"B_BOMB_3CBU103",
						"B_BOMB_3CBU104",
						"B_BOMB_3CBU105",
						"B_BOMB_2MK20_BRU_42",
						"B_BOMB_3MK20",
						"B_BOMB_3MK82",
						"B_BOMB_3MK82SE"
					};
				};
				class Pylons6: Pylons5{};
				class Pylons7: Pylons4{};
				class Pylons8: Pylons3{};
				class Pylons9: Pylons2{};
				class Pylons10: Pylons1{};
			};
		};
	};
};