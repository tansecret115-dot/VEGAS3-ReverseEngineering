/* Module: extmondrv.dll
   Function: FUN_004010f0
   Address: 004010f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004010f0(HMODULE param_1)

{
  int iVar1;
  
  DAT_0045b004 = 0;
  DAT_0045b008 = 0;
  _DAT_0045b000 = param_1;
  FUN_00413b40(param_1);
  FUN_004123a0(&DAT_0045b004,param_1,0,0);
  iVar1 = FUN_004109d0(&DAT_0045b008,"ExternalMonitorSettings",0x1000000,0);
  FUN_00410030(param_1,"Extmon_Trackbar_Class");
  return -1 < iVar1;
}


