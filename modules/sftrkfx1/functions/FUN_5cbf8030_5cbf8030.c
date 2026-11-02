/* Module: sftrkfx1.dll
   Function: FUN_5cbf8030
   Address: 5cbf8030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cbf8030(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


