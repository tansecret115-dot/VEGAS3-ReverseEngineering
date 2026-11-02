/* Module: vegas30.exe
   Function: FUN_005ba610
   Address: 005ba610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba610(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  if (param_4 != 0) {
    *(undefined4 *)(iVar1 + 0xb8) = param_3;
    FUN_005ba030(param_1,iVar1,1,1);
    return 1;
  }
  *(undefined4 *)(iVar1 + 0xbc) = param_3;
  FUN_005ba030(param_1,iVar1,1,1);
  return 1;
}


