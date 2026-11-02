/* Module: mcplug.dll
   Function: FUN_00468fe0
   Address: 00468fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00468fe0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


