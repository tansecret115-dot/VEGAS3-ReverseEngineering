/* Module: vidcap30.exe
   Function: FUN_00426b50
   Address: 00426b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426b50(int *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  if (*param_1 == 8) {
    if ((param_1[0x53] & 0x40U) != 0) {
      *param_2 = 2;
    }
    if ((param_1[0x53] & 0x80U) != 0) {
      *param_2 = *param_2 | 1;
    }
    if (param_1[0x210] != 0) {
      *param_2 = *param_2 | 4;
    }
    if ((param_1[0x52] & 0x8000000U) != 0) {
      if ((param_1[0x53] & 4U) != 0) {
        *param_2 = *param_2 | 8;
      }
      uVar1 = *param_2;
      if ((uVar1 & 4) == 0) {
        uVar1 = uVar1 | 0x70;
      }
      else {
        uVar1 = uVar1 | 0x40;
      }
      *param_2 = uVar1;
      if (param_1[0x146] != 0) {
        if ((param_1[0x52] & 0x10000U) != 0) {
          *param_2 = *param_2 | 0x100;
        }
        if ((param_1[0x146] != 0) && (((param_1[0x53] & 0x10U) != 0 || (param_1[0x101] != 0)))) {
          *param_2 = *param_2 | 0x80;
        }
      }
    }
  }
  return;
}


