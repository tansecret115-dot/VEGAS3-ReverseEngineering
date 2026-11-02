/* Module: vegas30.exe
   Function: FUN_005016e0
   Address: 005016e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005016e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_2 = param_3;
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x3c5,param_1,&LAB_005015d0,&param_3);
  if (iVar1 == 1) {
    *param_2 = param_3;
    return 0;
  }
  return 1;
}


