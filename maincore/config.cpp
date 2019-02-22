class CfgPatches
{
	class Blastcore_MainCore
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		ammo[]=
		{
			"ShellBase",
			"MissileBase",
			"GrenadeCore",
			"RocketBase",
			"GrenadeBase",
			"Grenade",
			"GrenadeHand",
			"SmokeShell",
			"SmokeShellArty",
			"BulletBase",
			"B_127x33_Ball",
			"B_127x99_Ball",
			"B_127x108_Ball",
			"B_127x108_APDS",
			"B_20mm",
			"B_30mm_AP",
			"B_30mm_APFSDS",
			"Sh_120mm_APFSDS",
			"FlareBase",
			"SubmunitionBase",
			"CMflareAmmo",
			"CMflare_Chaff_Ammo",
			"SmokeLauncherAmmo",
			"F_40mm_White",
			"FuelExplosion",
			"FuelExplosionBig",
			"HelicopterExploSmall",
			"HelicopterExploBig",
			"B_19mm_HE",
			"B_30mm_HE",
			"Gatling_30mm_HE_Plane_CAS_01_F",
			"B_25mm",
			"B_35mm_AA",
			"Sh_120mm_HE",
			"Sh_155mm_AMOS",
			"Sh_82mm_AMOS",
			"M_PG_AT",
			"M_AT",
			"Rocket_04_HE_F",
			"Rocket_04_AP_F",
			"Rocket_03_AP_F",
			"Rocket_03_HE_F",
			"R_80mm_HE",
			"M_RPG32_F",
			"M_RPG32_AA_F",
			"R_PG32V_F",
			"M_NLAW_AT_F",
			"M_Scalpel_AT",
			"Missile_AGM_02_F",
			"M_Titan_AA",
			"M_Air_AA",
			"Missile_AGM_01_F",
			"Missile_AA_04_F",
			"Missile_AA_03_F",
			"M_Titan_AT",
			"M_Titan_AP",
			"Bo_GBU12_LGB",
			"Bomb_04_F",
			"Bomb_03_F",
			"Bo_Mk82",
			"R_230mm_HE",
			"R_230mm_fly",
			"Mo_cluster_AP",
			"SatchelCharge_Remote_Ammo",
			"DemoCharge_Remote_Ammo"
		};
	};
};
class cfgWeapons
{
	class CannonCore;
	class gatling_20mm: CannonCore
	{
	};
	class gatling_30mm_base: CannonCore
	{
	};
	class gatling_30mm: gatling_30mm_base
	{
	};
	class LauncherCore;
	class RocketPods: LauncherCore
	{
	};
	class MissileLauncher;
	class autocannon_35mm: CannonCore
	{
		fireLightDuration=0.0099999998;
		fireLightIntensity=0.2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="35mmFlakFlash";
			};
			class SecondEffect
			{
				effectName="35mmFlakFlash";
			};
		};
	};
	class cannon_120mm: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
	class cannon_125mm: CannonCore
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFiredBC";
			};
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		class GunParticles
		{
			class Effect2
			{
				positionName="Usti hlavne3";
			};
			class Effect3
			{
				positionName="Usti hlavne3";
			};
		};
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class ShellCore;
	class MissileCore;
	class ShellBase: ShellCore
	{
	};
	class MissileBase: MissileCore
	{
	};
	class GrenadeCore: Default
	{
	};
	class BombCore;
	class PipeBombBase;
	class LaserBombCore;
	class RocketCore;
	class RocketBase: RocketCore
	{
	};
	class GrenadeBase: GrenadeCore
	{
	};
	class Grenade: Default
	{
	};
	class GrenadeHand: Grenade
	{
	};
	class SmokeShell: GrenadeHand
	{
	};
	class SmokeShellArty: SmokeShell
	{
		effectsSmoke="SmokeShellWhiteEffect";
	};
	class BulletBase: BulletCore
	{
		class HitEffects
		{
			hitVirtual="ImpactMetal_HJ";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal_HJ";
			hitBuilding="BCImpactConcrete";
			hitConcrete="BCImpactConcrete";
			hitGroundSoft="BCImpactEffectsSmall";
			hitGroundHard="BCImpactEffectsHardGround";
			default_mat="BCImpactEffectsSmall";
			hitFoliage="ImpactLeaves";
			hitWood="ImpactWood";
			hitMan="BlastcoreImpactEffectsBlood";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
		};
	};
	class B_127x33_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green="BCImpactDirt_50cal";
			Hit_Foliage_Dead="BCImpactDirt_50cal";
			Hit_Foliage_Green_big="BCImpactDirt_50cal";
			Hit_Foliage_Palm="BCImpactDirt_50cal";
			Hit_Foliage_Pine="BCImpactDirt_50cal";
		};
	};
	class B_127x99_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green="BCImpactDirt_50cal";
			Hit_Foliage_Dead="BCImpactDirt_50cal";
			Hit_Foliage_Green_big="BCImpactDirt_50cal";
			Hit_Foliage_Palm="BCImpactDirt_50cal";
			Hit_Foliage_Pine="BCImpactDirt_50cal";
		};
	};
	class B_127x108_Ball: BulletBase
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green="BCImpactDirt_50cal";
			Hit_Foliage_Dead="BCImpactDirt_50cal";
			Hit_Foliage_Green_big="BCImpactDirt_50cal";
			Hit_Foliage_Palm="BCImpactDirt_50cal";
			Hit_Foliage_Pine="BCImpactDirt_50cal";
		};
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_50cal";
			hitConcrete="BCImpactConcrete_50cal";
			hitGroundSoft="BCImpactDirt_50cal";
			hitGroundHard="BCImpactDirt_50cal";
			default_mat="BCImpactDirt_50cal";
			Hit_Foliage_green="BCImpactDirt_50cal";
			Hit_Foliage_Dead="BCImpactDirt_50cal";
			Hit_Foliage_Green_big="BCImpactDirt_50cal";
			Hit_Foliage_Palm="BCImpactDirt_50cal";
			Hit_Foliage_Pine="BCImpactDirt_50cal";
		};
	};
	class B_20mm: BulletBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_20mm";
			hitConcrete="BCImpactConcrete_20mm";
			hitGroundSoft="BCImpactDirt_20mm";
			hitGroundHard="BCImpactDirt_20mm";
			default_mat="BCImpactDirt_20mm";
			Hit_Foliage_green="BCImpactDirt_20mm";
			Hit_Foliage_Dead="BCImpactDirt_20mm";
			Hit_Foliage_Green_big="BCImpactDirt_20mm";
			Hit_Foliage_Palm="BCImpactDirt_20mm";
			Hit_Foliage_Pine="BCImpactDirt_20mm";
		};
	};
	class B_30mm_AP: BulletBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
		};
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mm";
			hitConcrete="BCImpactConcrete_30mm";
			hitGroundSoft="BCImpactDirt_30mm";
			hitGroundHard="BCImpactDirt_30mm";
			default_mat="BCImpactDirt_30mm";
			Hit_Foliage_green="BCImpactDirt_30mm";
			Hit_Foliage_Dead="BCImpactDirt_30mm";
			Hit_Foliage_Green_big="BCImpactDirt_30mm";
			Hit_Foliage_Palm="BCImpactDirt_30mm";
			Hit_Foliage_Pine="BCImpactDirt_30mm";
		};
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		explosive=0;
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mm";
			hitConcrete="BCImpactConcrete_120mm";
			hitGroundSoft="BCImpactDirt_120mm";
			hitGroundHard="BCImpactDirt_120mm";
			default_mat="BCImpactDirt_120mm";
			Hit_Foliage_green="BCImpactDirt_120mm";
			Hit_Foliage_Dead="BCImpactDirt_120mm";
			Hit_Foliage_Green_big="BCImpactDirt_120mm";
			Hit_Foliage_Palm="BCImpactDirt_120mm";
			Hit_Foliage_Pine="BCImpactDirt_120mm";
		};
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		intensity=2500000;
	};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore
	{
	};
	class CMflareAmmo: BulletBase
	{
	};
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
	};
	class FuelExplosion: Default
	{
		explosionEffects="VehicleExplosionEffects";
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects="VehicleExplosionEffectsBig";
	};
	class HelicopterExploSmall: ShellBase
	{
		explosionEffects="HelicopterExplosionEffects";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects="HelicopterExplosionEffects2";
	};
	class B_19mm_HE: BulletBase
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
		};
	};
	class B_30mm_HE: B_19mm_HE
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
		};
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		explosive=0.40000001;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
		};
	};
	class B_25mm: BulletBase
	{
		explosive=0.1;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
		};
	};
	class B_35mm_AA: BulletBase
	{
		explosive=0.40000001;
		CraterEffects="30mmSmoke";
		explosionEffects="30mmExplode";
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_30mmHE";
			hitConcrete="BCImpactConcrete_30mmHE";
			hitGroundSoft="BCImpactDirt_30mmHE";
			hitGroundHard="BCImpactDirt_30mmHE";
			default_mat="BCImpactDirt_30mmHE";
			Hit_Foliage_green="BCImpactDirt_30mmHE";
			Hit_Foliage_Dead="BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_30mmHE";
			Hit_Foliage_Palm="BCImpactDirt_30mmHE";
			Hit_Foliage_Pine="BCImpactDirt_30mmHE";
		};
	};
	class Sh_120mm_HE: ShellBase
	{
		explosive=0.1;
		class HitEffects
		{
			hitVirtual="ImpactMetalSabotBig";
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="BCImpactConcrete_120mmHE";
			hitConcrete="BCImpactConcrete_120mmHE";
			hitGroundSoft="BCImpactDirt_120mmHE";
			hitGroundHard="BCImpactDirt_120mmHE";
			default_mat="BCImpactDirt_120mmHE";
			Hit_Foliage_green="BCImpactDirt_120mmHE";
			Hit_Foliage_Dead="BCImpactDirt_120mmHE";
			Hit_Foliage_Green_big="BCImpactDirt_120mmHE";
			Hit_Foliage_Palm="BCImpactDirt_120mmHE";
			Hit_Foliage_Pine="BCImpactDirt_120mmHE";
		};
	};
	class Sh_155mm_AMOS: ShellBase
	{
		CraterEffects="155mm_Smoke";
		explosionEffects="155mm_Explode";
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		explosionEffects="80mm_Explode";
	};
	class M_PG_AT: MissileBase
	{
		explosionEffects="80mm_Explode";
	};
	class M_AT: M_PG_AT
	{
		explosionEffects="80mm_Explode";
	};
	class Rocket_04_HE_F: MissileBase
	{
		explosionEffects="80mm_Explode";
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		explosionEffects="80mm_Explode";
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		explosionEffects="80mm_Explode";
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		explosionEffects="80mm_Explode";
	};
	class R_80mm_HE: RocketBase
	{
		explosionEffects="80mm_Explode";
	};
	class M_RPG32_F: MissileBase
	{
		explosionEffects="M136_Explode";
	};
	class M_RPG32_AA_F: M_RPG32_F
	{
		explosionEffects="M136_Explode";
	};
	class R_PG32V_F: RocketBase
	{
		explosionEffects="M136_Explode";
	};
	class M_NLAW_AT_F: MissileBase
	{
		explosionEffects="M136_Explode";
	};
	class M_Scalpel_AT: MissileBase
	{
		explosionEffects="Hellfire_Explode";
	};
	class Missile_AGM_02_F: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class M_Titan_AA: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class M_Air_AA: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Missile_AA_04_F: MissileBase
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		CraterEffects="AA_Smoke";
		explosionEffects="AA_Explode";
	};
	class M_Titan_AT: MissileBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class M_Titan_AP: M_Titan_AT
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class Bo_GBU12_LGB: LaserBombCore
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bomb_04_F: LaserBombCore
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bomb_03_F: Bomb_04_F
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Bo_Mk82: BombCore
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class R_230mm_HE: SubmunitionBase
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class R_230mm_fly: ShellBase
	{
		CraterEffects="MK82_Smoke";
		explosionEffects="MK82_Explode";
	};
	class Mo_cluster_AP: ShellBase
	{
		explosionEffects="BCImpactConcrete_30mmHE";
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Hellfire_Smoke";
		explosionEffects="Hellfire_Explode";
	};
	class DemoCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects="Demo_Charge_Smoke";
		explosionEffects="Demo_Charge_Explode";
	};
};
