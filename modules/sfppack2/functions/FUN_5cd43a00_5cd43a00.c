/* Module: sfppack2.dll
   Function: FUN_5cd43a00
   Address: 5cd43a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cd43a00(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


