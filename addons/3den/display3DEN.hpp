
class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip : ctrlMenuStrip
		{
			class Items
			{
				class TMF_Folder {
					items[] += {QGVAR(checklist)};
				};
				class GVAR(checklist)
				{
					text = "ARC Testing Checklist";
					action = QUOTE(edit3DENMissionAttributes 'ADDON';);
					picture = QPATHTOEF(main,data\logo_arc_ca.paa);
				};
			};
		};
	};
};
