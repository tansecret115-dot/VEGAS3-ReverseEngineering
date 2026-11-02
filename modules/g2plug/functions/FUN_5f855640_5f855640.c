/* Module: g2plug.dll
   Function: FUN_5f855640
   Address: 5f855640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f855640(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x40) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x3e) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x42) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x48) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x46) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x4a) = uVar2;
  iVar3 = iVar3 + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x5c) = iVar3;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x4e) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x4c) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x52) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x58) = uVar2;
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x56) = uVar2;
  uVar2 = ftol();
  fVar1 = *(float *)(iVar3 + 0x1c) * _DAT_5f86fd64;
  *(undefined2 *)(param_1 + 0x54) = uVar2;
  if (fVar1 < _DAT_5f86fd70) {
    uVar2 = ftol();
    *(undefined2 *)(param_1 + 0x5a) = uVar2;
    return;
  }
  uVar2 = ftol();
  *(undefined2 *)(param_1 + 0x5a) = uVar2;
  return;
}


