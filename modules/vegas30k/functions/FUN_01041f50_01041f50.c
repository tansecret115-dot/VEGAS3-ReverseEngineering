/* Module: vegas30k.dll
   Function: FUN_01041f50
   Address: 01041f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041f50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x8000ffff;
  }
  iVar1 = FUN_010411d0();
  if (iVar1 != 0) {
    uVar2 = FUN_01041250(param_2,param_3);
  }
  return uVar2;
}


