/* Module: vegas30.exe
   Function: FUN_004ca940
   Address: 004ca940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ca940(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0x10001) {
    uVar1 = 7;
  }
  else {
    if (param_1 == 0x10011) {
      return 6;
    }
    if (param_1 == 0x10012) {
      return 5;
    }
    if ((param_1 & 0x10040) != 0) {
      return 8;
    }
    if ((param_1 & 0x10000) != 0) {
      return 9;
    }
  }
  return uVar1;
}


