/* Module: vegas30.exe
   Function: FUN_006004d0
   Address: 006004d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_006004d0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


