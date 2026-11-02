/* Module: mpgmux.dll
   Function: FUN_1000d77e
   Address: 1000d77e
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000d77e(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1001c680 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1001c680 != (HANDLE)0x0) {
    DAT_1001c684 = FUN_1000d636();
    if (DAT_1001c684 == 3) {
      ppuVar1 = (undefined **)FUN_1000d883(0x3f8);
    }
    else {
      if (DAT_1001c684 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000e0d4();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1001c680);
  }
  return 0;
}


