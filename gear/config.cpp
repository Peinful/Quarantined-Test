class CfgPatches
{
	class QRP_Gear
	{
		units[]=
		{
			"PersonalRadio_LR",
			"MosinLRS",
			"SleepingBag"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics"
		};
	};
};
class CfgRecipes
{
};
class cfgVehicles
{
	class Inventory_Base;
	
	class LongrangeOptic;
	class MosinLRS: LongrangeOptic
	{
		scope=2;
		displayName="Mosin Long Range";
		inventorySlot="weaponOpticsMosin";
		descriptionShort="Long Range Scope that can be ";
	};
	
	class PersonalRadio;
	class PersonalRadio_LR: PersonalRadio
	{
		scope=2;
		displayName="Long Range Personal Radio";
		descriptionShort="Long range 2-way radio with a frequency switch. Requires a 9V battery to operate.";
		weight=1000;
		inputRange=16;
		range=30000;
	};
	
	class MediumTent;
	class SleepingBag: MediumTent
	{
		scope=2;
		displayName="Sleeping Bag";
		descriptionShort="A sleeping bag rolled in order to keep the space short, easy to place and store items.";
		model="\QRP\gear\sb.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		slopeTolerance=0.25;
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		openable=0;
		carveNavmesh=1;
		itemSize[]={3,4};
		itemsCargoSize[]={10,10};
		itemBehaviour=2;
		lootCategory="Tents";
		placement="ForceSlopeOnTerrain";
		physLayer="item_large";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		attachments[]=
		{
		};
		SingleUseActions[]={527};
		InteractActions[]={1021,1022,2204201901};
		ContinuousActions[]={231};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\camping\data\tent_medium_pitched.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\data\tent_medium_pitched.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\data\tent_medium_pitched_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\data\tent_medium_pitched_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\data\tent_medium_pitched_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
		class PointLights
		{
		};
		class GUIInventoryAttachmentsProps
		{
		};
		class AnimationSources
		{
			class Body
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Pack
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement_walk
				{
					soundSet="mediumtent_movement_walk_SoundSet";
					id=1;
				};
				class movement_run
				{
					soundSet="mediumtent_movement_run_SoundSet";
					id=3;
				};
				class movement_sprint
				{
					soundSet="mediumtent_movement_sprint_SoundSet";
					id=5;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpTentLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpTent_SoundSet";
					id=797;
				};
				class mediumtent_drop
				{
					soundset="mediumtent_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SleepingBagPlacing: SleepingBag
	{
		model="QRP\gear\sleepingbag_placing.p3d";
		storageCategory=10;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\tent_medium_pitched_b_co.tga"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\tent_medium_pitched.rvmat"
		};
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		class AnimationSources
		{
			class Placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
};
