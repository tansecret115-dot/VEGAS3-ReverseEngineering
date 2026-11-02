/* Module: mp3plug.dll
   Function: FUN_5f71fcb0
   Address: 5f71fcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f71fcb0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


