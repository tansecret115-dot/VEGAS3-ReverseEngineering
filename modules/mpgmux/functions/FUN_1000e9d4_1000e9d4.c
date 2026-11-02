/* Module: mpgmux.dll
   Function: FUN_1000e9d4
   Address: 1000e9d4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000e9d4(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001affc != (code *)0x0) {
    iVar1 = (*DAT_1001affc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


