/* Module: wavplug.dll
   Function: FUN_5f3bd580
   Address: 5f3bd580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f3bd580(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x1c);
}


