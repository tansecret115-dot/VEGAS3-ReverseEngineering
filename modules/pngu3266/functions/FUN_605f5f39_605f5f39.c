/* Module: pngu3266.dll
   Function: FUN_605f5f39
   Address: 605f5f39
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_605f5f39(int param_1)

{
  undefined4 uStack_4;
  
  if (param_1 == 1) {
    return 0;
  }
  if (param_1 == 4) {
    uStack_4 = 2;
  }
  else {
    if (param_1 < 5) {
      return 0xffffffff;
    }
    if (param_1 < 7) {
      uStack_4 = 1;
    }
    else {
      if (param_1 != 8) {
        return 0xffffffff;
      }
      uStack_4 = 5;
    }
  }
  return uStack_4;
}


