/* Module: vegas30.exe
   Function: FUN_004a2bd0
   Address: 004a2bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a2bd0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 10) {
    if (param_1 != 9) {
      switch(param_1) {
      case 1:
        return 1;
      case 2:
        return 2;
      default:
        goto switchD_004a2be5_caseD_3;
      case 4:
      case 5:
      case 6:
      case 7:
        break;
      }
    }
  }
  else if ((param_1 < 0xe) || ((0xf < param_1 && (param_1 != 0x300)))) {
switchD_004a2be5_caseD_3:
    if ((param_1 & 1) != 0) {
      return 1;
    }
    if ((param_1 & 2) != 0) {
      return 2;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 8) != 0) {
        uVar1 = 4;
      }
      return uVar1;
    }
    return 3;
  }
  return 3;
}


