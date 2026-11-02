/* Module: sftrkfx1.dll
   Function: FUN_5cba9930
   Address: 5cba9930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba9930(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x14);
  param_5[1] = (int)fVar3;
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != *(int *)(param_1 + 0x10) && -1 < iVar5 - *(int *)(param_1 + 0x10)) {
    param_5[1] = (int)((float)(param_4 - iVar5) * ((fVar1 - fVar2) / (float)(iVar4 - iVar6)) + fVar3
                      );
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  *param_5 = iVar4;
  if (0 < *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) {
    iVar6 = ftol();
    *param_5 = iVar6 + iVar4;
  }
  return;
}


