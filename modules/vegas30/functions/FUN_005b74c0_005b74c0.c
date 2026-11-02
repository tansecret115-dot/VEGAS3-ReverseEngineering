/* Module: vegas30.exe
   Function: FUN_005b74c0
   Address: 005b74c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b74c0(uint *param_1)

{
  uint uVar1;
  
  if (param_1[3] == 1) {
    uVar1 = *param_1;
    if (uVar1 < 0x6362786e) {
      if (((uVar1 != 0x6362786d) && (uVar1 != 0x2062786d)) && (uVar1 != 0x2064656d)) {
        return 0;
      }
    }
    else if ((uVar1 != 0x6366786d) && (uVar1 != 0x6b617274)) {
      return 0;
    }
    param_1[3] = 2;
  }
  else if (param_1[3] == 2) {
    uVar1 = *param_1;
    if (uVar1 < 0x6362786e) {
      if (((uVar1 != 0x6362786d) && (uVar1 != 0x2062786d)) && (uVar1 != 0x2064656d)) {
        return 0;
      }
    }
    else if ((uVar1 != 0x6366786d) && (uVar1 != 0x6b617274)) {
      return 0;
    }
    param_1[3] = 1;
    return 0;
  }
  return 0;
}


