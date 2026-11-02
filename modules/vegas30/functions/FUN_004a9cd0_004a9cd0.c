/* Module: vegas30.exe
   Function: FUN_004a9cd0
   Address: 004a9cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a9cd0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    return *(undefined4 *)(&DAT_006132f8 + param_1 * 4);
  }
  return 0;
}


