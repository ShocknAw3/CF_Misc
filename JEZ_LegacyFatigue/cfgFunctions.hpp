/*class CfgFactionClasses
{
	class JEZ_LegacyFatigue
	{
		displayName = "Legacy Fatigue";	//TODO: localize
		priority = 10;
		side = TLogic;
	};
};*/

class CfgFunctions
{
	class JEZ_LegacyFatigue
	{
		tag = "BIS";
		project = "arma3";

		class Misc
		{
			class legacyFatigue {file = "A3\JEZ_LegacyFatigue\Functions\Misc\fn_legacyFatigue.sqf";};
		};
	};
};