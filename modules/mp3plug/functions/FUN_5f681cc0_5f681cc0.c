/* Module: mp3plug.dll
   Function: FUN_5f681cc0
   Address: 5f681cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f681cc0(int param_1,int param_2,int *param_3)

{
  if (param_1 < 0x5623) {
    if (param_1 != 0x5622) {
      if ((param_1 != 8000) && (param_1 != 0x2b11)) goto LAB_5f681d0d;
      if (param_2 < 0x2ee1) {
        *param_3 = 0x5622;
        return 1;
      }
    }
  }
  else if ((param_1 != 0xac44) && (param_1 != 48000)) {
LAB_5f681d0d:
    if (param_1 < 8000) {
      *param_3 = 8000;
      return 1;
    }
    if (param_1 < 0x2b11) {
      *param_3 = 0x2b11;
      return 1;
    }
    if (param_1 < 0x5622) {
      *param_3 = 0x5622;
      return 1;
    }
    *param_3 = ((0xac43 < param_1) - 1 & 0xfffff0c4) + 48000;
    return 1;
  }
  return 0;
}


