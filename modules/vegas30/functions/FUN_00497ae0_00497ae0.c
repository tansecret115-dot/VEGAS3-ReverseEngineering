/* Module: vegas30.exe
   Function: FUN_00497ae0
   Address: 00497ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00497ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _SfLoadString_16(DAT_00647204,0x53,param_1,param_2);
  *(undefined1 *)(iVar1 + param_1) = 0x20;
  iVar2 = _SfNanoTimeToText_20(iVar1 + 1 + param_1,DAT_00647630 + 0x20,param_3,param_4,0);
  return iVar2 + iVar1 + 1;
}


