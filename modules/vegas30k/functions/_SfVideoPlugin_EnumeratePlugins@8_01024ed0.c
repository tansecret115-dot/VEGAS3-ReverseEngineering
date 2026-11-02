/* Module: vegas30k.dll
   Function: _SfVideoPlugin_EnumeratePlugins@8
   Address: 01024ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfVideoPlugin_EnumeratePlugins_8(tSFLIST **param_1,int param_2)

{
  int iVar1;
  HSFMETRIC__ *local_108;
  undefined1 local_104 [260];
  
                    /* 0x24ed0  1271  _SfVideoPlugin_EnumeratePlugins@8 */
  *param_1 = (tSFLIST *)0x0;
  iVar1 = FUN_01023b50();
  if (iVar1 == 0) {
    iVar1 = _SfMetric_Open_16(&local_108,"DXImageTransCache",1,"Plug-In Description");
    if (iVar1 < 0) goto LAB_01024f7e;
    iVar1 = SfVideoPlugin_SmartEnum(param_1,local_108,0,param_2);
  }
  else {
    SfPrintF(local_104,"%s.%d","DXImageTransCache",1);
    iVar1 = _SfMetric_OpenSubKey_12(&local_108,DAT_012099e0,local_104);
    if (iVar1 < 0) goto LAB_01024f7e;
    iVar1 = SfVideoPlugin_SmartEnum(param_1,local_108,0,param_2);
  }
  _SfMetric_Close_4(local_108);
LAB_01024f7e:
  return -1 < iVar1;
}


