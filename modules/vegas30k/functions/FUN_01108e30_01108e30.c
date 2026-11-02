/* Module: vegas30k.dll
   Function: FUN_01108e30
   Address: 01108e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01108e30(uint param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = param_1;
  bVar3 = ftol();
  piVar1 = (int *)(param_1 + 0xb4);
  param_1 = (uint)bVar3;
  if (*piVar1 != 0) {
    bVar3 = *(byte *)(param_1 + *piVar1);
  }
  *(byte *)(iVar2 + 0x3e) = bVar3;
  *(byte *)(iVar2 + 0x3d) = bVar3;
  *(byte *)(iVar2 + 0x3c) = bVar3;
  return;
}


