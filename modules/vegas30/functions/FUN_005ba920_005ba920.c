/* Module: vegas30.exe
   Function: FUN_005ba920
   Address: 005ba920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  *(undefined4 *)(iVar1 + 0xfc) = param_3;
  FUN_005ba030(param_1,iVar1,1,1);
  return 0;
}


