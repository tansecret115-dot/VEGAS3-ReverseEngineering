/* Module: sftrans1.dll
   Function: FUN_005310b0
   Address: 005310b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005310b0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


