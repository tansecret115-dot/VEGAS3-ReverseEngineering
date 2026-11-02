/* Module: vegas30.exe
   Function: FUN_004a7900
   Address: 004a7900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a7900(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0xa7bc) {
    uVar1 = 200;
  }
  else {
    if (param_1 == 0xa7bd) {
      return 0xc9;
    }
    if (param_1 == 0xa7bf) {
      return 0xca;
    }
  }
  return uVar1;
}


