/* Module: sftrkfx1.dll
   Function: FUN_5cba9850
   Address: 5cba9850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba9850(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_2 + 0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  fVar2 = *(float *)(param_2 + 0x14);
  param_4[1] = iVar4;
  if ((fVar1 - fVar2) / (float)(iVar4 - iVar3) != (float)_DAT_5cc04098) {
    iVar4 = ftol();
    param_4[1] = iVar4 + *(int *)(param_1 + 0x18);
  }
  *param_4 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x20) != 0) && (0 < *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc))) {
    iVar4 = ftol();
    *param_4 = *param_4 + iVar4;
  }
  iVar4 = *param_4;
  if (iVar4 < -0x4000) {
    iVar4 = -0x4000;
  }
  else if (0x3fff < iVar4) {
    iVar4 = 0x3fff;
  }
  *param_4 = iVar4;
  iVar4 = param_4[1];
  if (-0x4001 < iVar4) {
    if (0x3fff < iVar4) {
      iVar4 = 0x3fff;
    }
    param_4[1] = iVar4;
    return;
  }
  param_4[1] = -0x4000;
  return;
}


