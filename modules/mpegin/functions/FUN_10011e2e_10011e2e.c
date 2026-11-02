/* Module: mpegin.dll
   Function: FUN_10011e2e
   Address: 10011e2e
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10011e2e(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001c598 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001c6f4);
    bVar1 = DAT_1001c6f0 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001c6f4);
      this = (void *)0x13;
      FUN_10010ee5(0x13);
    }
    param_1 = FUN_10011e9d(this,param_1);
    if (bVar1) {
      FUN_10010f46(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001c6f4);
    }
  }
  return param_1;
}


