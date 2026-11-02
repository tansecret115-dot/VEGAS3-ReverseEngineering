/* Module: sftrans1.dll
   Function: FUN_0051a490
   Address: 0051a490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a490(int param_1)

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
  fVar2 = *(float *)(iVar1 + 0xc) * _DAT_0055c088;
  *(undefined2 *)(param_1 + 0x3c) = uVar3;
  if (fVar2 < _DAT_00557840) {
    uVar3 = ftol();
    *(undefined2 *)(param_1 + 0x42) = uVar3;
    *(int *)(param_1 + 0x5c) = iVar1 + 0x10;
    return;
  }
  uVar3 = ftol();
  *(undefined2 *)(param_1 + 0x42) = uVar3;
  *(int *)(param_1 + 0x5c) = iVar1 + 0x10;
  return;
}


