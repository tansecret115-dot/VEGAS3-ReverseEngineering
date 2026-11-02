/* Module: vegas30.exe
   Function: FUN_005ba8f0
   Address: 005ba8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba8f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_005b9fc0(param_1,param_2,1);
  uVar1 = *(undefined4 *)(iVar2 + 0xfc);
  FUN_005ba030(param_1,iVar2,1,1);
  return uVar1;
}


