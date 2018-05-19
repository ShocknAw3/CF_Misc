class CfgVehicles
{
	class Land;
	class Man: Land{};
	class CAManBase: Man
	{
		class EventHandlers
		{
			class BIS_LegacyFatigue
			{
				init = "(_this select 0) spawn BIS_fnc_legacyFatigue";
			};
		};
	};
};