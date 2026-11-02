/* Module: vidcap30.exe
   Function: FUN_004e6bc0
   Address: 004e6bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6bc0(int param_1)

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
  fVar2 = *(float *)(iVar1 + 0xc) * _DAT_00595418;
  *(undefined2 *)(param_1 + 0x3c) = uVar3;
  if (fVar2 < _DAT_00595424) {
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


