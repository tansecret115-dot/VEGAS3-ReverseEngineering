/* Module: mcplugrw.dll
   Function: FUN_00411980
   Address: 00411980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411980(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}


