/* Module: pncrt.dll
   Function: FUN_7802f5f0
   Address: 7802f5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7802f5f0(int *param_1)

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


