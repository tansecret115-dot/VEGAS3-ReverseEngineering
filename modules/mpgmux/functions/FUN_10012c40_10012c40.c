/* Module: mpgmux.dll
   Function: FUN_10012c40
   Address: 10012c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10012c40(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}


