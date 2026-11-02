/* Module: sftrans1.dll
   Function: FUN_00531080
   Address: 00531080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00531080(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


