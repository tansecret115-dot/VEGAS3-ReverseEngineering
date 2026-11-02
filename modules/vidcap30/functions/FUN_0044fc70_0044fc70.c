/* Module: vidcap30.exe
   Function: FUN_0044fc70
   Address: 0044fc70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044fc70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _SfDialogBoxParam_20(DAT_005ba2a0,0x1aa,param_1,&LAB_0044fcb0,param_2);
  if (iVar1 == 2) {
    return 0;
  }
  return 1;
}


