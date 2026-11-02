/* Module: mpegin.dll
   Function: FUN_1001112c
   Address: 1001112c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1001112c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001c404 != (code *)0x0) {
    iVar1 = (*DAT_1001c404)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


