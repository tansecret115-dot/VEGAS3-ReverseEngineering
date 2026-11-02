/* Module: sfs4rw.dll
   Function: FUN_00411930
   Address: 00411930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411930(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


