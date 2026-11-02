/* Module: dsetup.dll
   Function: FUN_00406800
   Address: 00406800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00406800(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_0040ac84 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_0040adec);
    bVar1 = DAT_0040ade8 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_0040adec);
      this = (void *)0x13;
      FUN_00404fde(0x13);
    }
    param_1 = FUN_0040686f(this,param_1);
    if (bVar1) {
      FUN_0040503f(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_0040adec);
    }
  }
  return param_1;
}


