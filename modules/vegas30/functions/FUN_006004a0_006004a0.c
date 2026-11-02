/* Module: vegas30.exe
   Function: FUN_006004a0
   Address: 006004a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_006004a0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


