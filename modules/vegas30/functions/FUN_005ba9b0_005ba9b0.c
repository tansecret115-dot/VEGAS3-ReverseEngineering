/* Module: vegas30.exe
   Function: FUN_005ba9b0
   Address: 005ba9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005ba9b0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005b9fc0(param_1,param_2,0);
  uVar1 = *(uint *)(iVar2 + 0xb4);
  FUN_005ba030(param_1,iVar2,0,1);
  return uVar1 & 1;
}


