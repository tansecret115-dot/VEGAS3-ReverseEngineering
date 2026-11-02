/* Module: sftrans1.dll
   Function: FUN_0051e340
   Address: 0051e340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051e340(uint param_1)

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


