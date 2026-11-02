/* Module: mpegin.dll
   Function: FUN_10014da5
   Address: 10014da5
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10014da5(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001c598 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
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
    param_1 = FUN_10014e14(this,param_1);
    if (bVar1) {
      FUN_10010f46(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001c6f4);
    }
  }
  return param_1;
}


