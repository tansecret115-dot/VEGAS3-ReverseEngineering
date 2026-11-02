/* Module: dsetup.dll
   Function: FUN_00405224
   Address: 00405224
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00405224(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0040ac64 != (code *)0x0) {
    iVar1 = (*DAT_0040ac64)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


