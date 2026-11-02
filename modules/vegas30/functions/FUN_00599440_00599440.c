/* Module: vegas30.exe
   Function: FUN_00599440
   Address: 00599440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00599440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = FUN_00598c00(param_2);
  if (iVar1 == 0) {
    return;
  }
  local_8 = param_2;
  _SfDialogBoxParam_20(DAT_00647204,0x338,param_1,&LAB_00598ec0,local_c);
  return;
}


