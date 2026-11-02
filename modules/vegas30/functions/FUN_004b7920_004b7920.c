/* Module: vegas30.exe
   Function: FUN_004b7920
   Address: 004b7920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004b7920(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
                    uint *param_6)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
    if (param_2 == 0) {
      if (*(uint *)(param_4 + 0x24) >> 1 < param_3) {
        param_2 = 1;
        param_3 = 0;
        *param_6 = 4;
        *param_5 = 1;
      }
      else {
        if ((0x10 < param_3) && ((param_3 & 1) != 0)) {
          param_3 = param_3 + 1;
        }
        if (param_3 < 2) {
          param_3 = 1;
        }
        *param_6 = param_3;
        *param_5 = 0;
      }
    }
    else {
      if (1 < param_3) {
        param_2 = param_2 + 1;
      }
      param_3 = 0;
      *param_6 = param_2;
      *param_5 = 1;
    }
  }
  else {
    if (1 < param_2) {
      param_1 = param_1 + 1;
    }
    param_3 = 0;
    param_2 = 0;
    uVar1 = FUN_004b7a20(param_1,param_6);
    *param_5 = 1;
  }
  return (((float10)param_2 +
          (float10)uVar1 * (float10)(*(uint *)(param_4 + 0x20) >> 0x10) +
          (float10)param_3 / (float10)*(uint *)(param_4 + 0x24)) /
         (float10)*(double *)(param_4 + 0x10)) * (float10)_DAT_00613640;
}


