/* Module: sfxpfx1.dll
   Function: FUN_5c94bf90
   Address: 5c94bf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c94bf90(short *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_5c99f06c = DAT_5c99f06c + *(int *)(param_5 + 0xc);
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *param_1 = *param_1 + (short)iVar1;
    if (1 < param_3) {
      DAT_5c99f070 = DAT_5c99f070 + 1 + *(int *)(param_5 + 0x10);
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


