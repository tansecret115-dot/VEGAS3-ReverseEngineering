/* Module: vegas30.exe
   Function: FUN_005ba5c0
   Address: 005ba5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ba5c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_005b9fc0(param_1,param_2,0);
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xb8);
    FUN_005ba030(param_1,iVar2,0,1);
    return uVar1;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0xc0);
  FUN_005ba030(param_1,iVar2,0,1);
  return uVar1;
}


