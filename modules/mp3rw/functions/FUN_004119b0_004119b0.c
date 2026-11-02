/* Module: mp3rw.dll
   Function: FUN_004119b0
   Address: 004119b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004119b0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


