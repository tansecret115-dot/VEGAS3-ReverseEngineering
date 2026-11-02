/* Module: mcplug.dll
   Function: FUN_00469010
   Address: 00469010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00469010(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


