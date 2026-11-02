/* Module: sfs4rw.dll
   Function: FUN_00411900
   Address: 00411900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411900(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


