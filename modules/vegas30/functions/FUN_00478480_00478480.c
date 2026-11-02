/* Module: vegas30.exe
   Function: FUN_00478480
   Address: 00478480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478480(int param_1,int param_2,undefined4 param_3,int param_4,uint *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
  fVar1 = (float)_DAT_00610fd8;
  iVar3 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + -2;
  if (0 < iVar3) {
    fVar1 = (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x20)) / (float)iVar3;
  }
  fVar1 = (float)((*(int *)(param_1 + 0x2c) - param_4) + -1) * fVar1 + *(float *)(param_2 + 0x20);
  param_5[2] = (uint)fVar1;
  if (*(float *)(param_2 + 0x20) <= fVar1) {
    if (*(float *)(param_2 + 0x24) < fVar1) {
      fVar1 = *(float *)(param_2 + 0x24);
    }
  }
  else {
    fVar1 = *(float *)(param_2 + 0x20);
  }
  param_5[2] = (uint)fVar1;
  *param_5 = *(uint *)(param_1 + 0x30);
  param_5[1] = *(uint *)(param_1 + 0x34);
  if (0 < iVar4) {
    __alldiv(iVar4,iVar4 >> 0x1f,2,0);
    uVar5 = ftol();
    uVar2 = *param_5;
    *param_5 = uVar2 + (uint)uVar5;
    param_5[1] = param_5[1] + (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar2,(uint)uVar5);
  }
  return;
}


