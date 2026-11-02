/* Module: vidcap30.exe
   Function: FUN_00415510
   Address: 00415510
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00415510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_104;
  undefined4 local_100;
  
  local_104 = param_2;
  local_100 = param_3;
  iVar1 = _SfDialogBoxParam_20(DAT_005ba2a0,0x1e8,param_1,&LAB_00415560,&local_104);
  return iVar1 == 1;
}


