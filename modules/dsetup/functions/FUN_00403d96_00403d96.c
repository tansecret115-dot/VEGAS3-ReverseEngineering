/* Module: dsetup.dll
   Function: FUN_00403d96
   Address: 00403d96
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00403d96(int param_1)

{
  undefined **ppuVar1;
  
  DAT_0040b044 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0040b044 != (HANDLE)0x0) {
    DAT_0040b048 = FUN_00403c4e();
    if (DAT_0040b048 == 3) {
      ppuVar1 = (undefined **)FUN_004040d4(0x3f8);
    }
    else {
      if (DAT_0040b048 != 2) {
        return 1;
      }
      ppuVar1 = FUN_00404925();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_0040b044);
  }
  return 0;
}


