/* Module: vegas30.exe
   Function: FUN_005942b0
   Address: 005942b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005942b0(int param_1,int param_2,uint param_3,int param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_00610f20;
  if (param_2 == 0x22) {
    fVar1 = (float10)*(float *)(param_1 + 0x60 + param_4 * 8);
    if ((*(byte *)(param_1 + 0x5c + param_4 * 8) & 4) != 0) {
      if ((*(uint *)(param_1 + 0x10) & 0x20000) != 0) {
        return (float10)_DAT_00610f20;
      }
      return fVar1 * (float10)*(float *)(param_1 + 0x48);
    }
  }
  else {
    if ((param_3 & 0x3f) != 0) {
      return (float10)*(float *)(param_1 + 0x48);
    }
    if (param_2 == 0x20) {
      if (*(int *)(param_1 + 0x44) == param_4) {
        if (((*(uint *)(param_1 + 0x10) & 0x20000) != 0) || ((param_3 & 0x4000000) != 0)) {
LAB_00594396:
          return (float10)_DAT_00610f20;
        }
        fVar1 = (float10)*(float *)(param_1 + 0x48);
        if ((param_4 != 0) && (*(float *)(param_1 + 0x158 + param_4 * 8) != (float)_DAT_00610fd8)) {
          if ((*(byte *)(param_1 + 0x154 + param_4 * 8) & 4) != 0) {
            return fVar1 * (float10)*(float *)(param_1 + 0x48);
          }
          return fVar1 + (float10)*(float *)(param_1 + 0x48);
        }
      }
      else if ((param_4 != 0) && (*(float *)(param_1 + 0x158 + param_4 * 8) != (float)_DAT_00610fd8)
              ) {
        if ((*(byte *)(param_1 + 0x154 + param_4 * 8) & 4) != 0) {
          if ((*(uint *)(param_1 + 0x10) & 0x20000) == 0) {
            return (float10)*(float *)(param_1 + 0x48) *
                   (float10)*(float *)(param_1 + 0x158 + param_4 * 8);
          }
          goto LAB_00594396;
        }
        fVar1 = (float10)*(float *)(param_1 + 0x158 + param_4 * 8);
      }
    }
  }
  return fVar1;
}


