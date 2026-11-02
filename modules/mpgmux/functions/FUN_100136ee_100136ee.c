/* Module: mpgmux.dll
   Function: FUN_100136ee
   Address: 100136ee
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_100136ee(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001b180 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001b2f4);
    bVar1 = DAT_1001b2f0 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001b2f4);
      this = (void *)0x13;
      FUN_1000e78d(0x13);
    }
    param_1 = FUN_1001375d(this,param_1);
    if (bVar1) {
      FUN_1000e7ee(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001b2f4);
    }
  }
  return param_1;
}


