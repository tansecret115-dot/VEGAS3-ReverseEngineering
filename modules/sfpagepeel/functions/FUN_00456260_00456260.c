/* Module: sfpagepeel.dll
   Function: FUN_00456260
   Address: 00456260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456260(int param_1)

{
  int iVar1;
  float fVar2;
  undefined2 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x40) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x3e) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x3c) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x42) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x48) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x46) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x44) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x4a) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x50) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x4e) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x4c) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x52) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x58) = uVar3;
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x56) = uVar3;
  uVar3 = ftol();
  fVar2 = *(float *)(iVar1 + 0x3c) * _DAT_00475b30;
  *(undefined2 *)(param_1 + 0x54) = uVar3;
  if (fVar2 < _DAT_00470ebc) {
    uVar3 = ftol();
    *(undefined2 *)(param_1 + 0x5a) = uVar3;
    *(int *)(param_1 + 0x5c) = iVar1 + 0x40;
    return;
  }
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x5a) = uVar3;
  *(int *)(param_1 + 0x5c) = iVar1 + 0x40;
  return;
}


