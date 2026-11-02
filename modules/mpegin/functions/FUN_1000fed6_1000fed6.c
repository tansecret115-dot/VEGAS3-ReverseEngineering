/* Module: mpegin.dll
   Function: FUN_1000fed6
   Address: 1000fed6
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000fed6(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1001da90 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1001da90 != (HANDLE)0x0) {
    DAT_1001da94 = FUN_1000fd8e();
    if (DAT_1001da94 == 3) {
      ppuVar1 = (undefined **)FUN_1000ffdb(0x3f8);
    }
    else {
      if (DAT_1001da94 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1001082c();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1001da90);
  }
  return 0;
}


