/* Module: sfxpfx1.dll
   Function: FUN_5c94c060
   Address: 5c94c060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c94c060(int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    fVar1 = *(float *)(*(int *)(param_5 + 8) + (DAT_5c99f064 % *(uint *)(param_5 + 4)) * 4) *
            (float)_DAT_5c98ba00;
    DAT_5c99f064 = DAT_5c99f064 + *(int *)(param_5 + 0xc);
    if ((float)_DAT_5c98b9f8 <= fVar1) {
      if (fVar1 <= (float)_DAT_5c98b9f0) {
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
      fVar1 = *(float *)(*(int *)(param_5 + 8) + (DAT_5c99f068 % *(uint *)(param_5 + 4)) * 4) *
              (float)_DAT_5c98ba00;
      DAT_5c99f068 = DAT_5c99f068 + 1 + *(int *)(param_5 + 0x10);
      if ((float)_DAT_5c98b9f8 <= fVar1) {
        if (fVar1 <= (float)_DAT_5c98b9f0) {
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


