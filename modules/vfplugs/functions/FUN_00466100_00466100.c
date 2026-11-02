/* Module: vfplugs.dll
   Function: FUN_00466100
   Address: 00466100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466100(uint param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1;
  bVar3 = ftol();
  piVar1 = (int *)(param_1 + 0xb4);
  param_1 = (uint)bVar3;
  if (*piVar1 != 0) {
    bVar3 = *(byte *)(param_1 + *piVar1);
  }
  *(byte *)(uVar2 + 0x3e) = bVar3;
  *(byte *)(uVar2 + 0x3d) = bVar3;
  *(byte *)(uVar2 + 0x3c) = bVar3;
  return;
}


