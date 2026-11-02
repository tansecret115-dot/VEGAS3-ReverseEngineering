/* Module: vegas30.exe
   Function: FUN_0052b980
   Address: 0052b980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052b980(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 == 0) {
    return DAT_0064ab94;
  }
  if (((param_1 < 3) || (0x1c < param_1)) && ((param_1 < 0x40 || (0x5f < param_1)))) {
    if (param_1 == 1) {
      return DAT_0064ab98;
    }
    if (param_1 == 0x1d) {
      return DAT_0064ab8c;
    }
    if (param_1 == 0x1e) {
      uVar1 = DAT_0064ab84;
    }
  }
  return uVar1;
}


