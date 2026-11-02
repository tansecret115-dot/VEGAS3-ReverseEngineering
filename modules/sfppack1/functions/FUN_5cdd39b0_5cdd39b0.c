/* Module: sfppack1.dll
   Function: FUN_5cdd39b0
   Address: 5cdd39b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cdd39b0(int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    fVar1 = *(float *)(*(int *)(param_5 + 8) + (DAT_5ce2a0ec % *(uint *)(param_5 + 4)) * 4) *
            (float)_DAT_5ce13260;
    DAT_5ce2a0ec = DAT_5ce2a0ec + *(int *)(param_5 + 0xc);
    if ((float)_DAT_5ce13258 <= fVar1) {
      if (fVar1 <= (float)_DAT_5ce13250) {
        iVar2 = ftol();
      }
      else {
        iVar2 = 0x7fffffff;
      }
    }
    else {
      iVar2 = -0x80000000;
    }
    *param_1 = *param_1 + iVar2;
    if (1 < param_3) {
      fVar1 = *(float *)(*(int *)(param_5 + 8) + (DAT_5ce2a0f0 % *(uint *)(param_5 + 4)) * 4) *
              (float)_DAT_5ce13260;
      DAT_5ce2a0f0 = DAT_5ce2a0f0 + 1 + *(int *)(param_5 + 0x10);
      if ((float)_DAT_5ce13258 <= fVar1) {
        if (fVar1 <= (float)_DAT_5ce13250) {
          iVar2 = ftol();
        }
        else {
          iVar2 = 0x7fffffff;
        }
      }
      else {
        iVar2 = -0x80000000;
      }
      param_1[1] = param_1[1] + iVar2;
    }
    param_1 = param_1 + param_3;
  }
  return;
}


