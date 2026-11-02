/* Module: sfppack1.dll
   Function: FUN_5cdd38e0
   Address: 5cdd38e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdd38e0(short *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_5ce2a0f4 = DAT_5ce2a0f4 + *(int *)(param_5 + 0xc);
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *param_1 = *param_1 + (short)iVar1;
    if (1 < param_3) {
      DAT_5ce2a0f8 = DAT_5ce2a0f8 + 1 + *(int *)(param_5 + 0x10);
      iVar1 = ftol();
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      else if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      param_1[1] = param_1[1] + (short)iVar1;
    }
    param_1 = param_1 + param_3;
  }
  return;
}


