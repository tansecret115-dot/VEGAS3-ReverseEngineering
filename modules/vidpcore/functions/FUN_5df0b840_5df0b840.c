/* Module: vidpcore.dll
   Function: FUN_5df0b840
   Address: 5df0b840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5df0b840(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


