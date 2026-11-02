/* Module: mpegin.dll
   Function: FUN_100037b0
   Address: 100037b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_100037b0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0xfff80000) != 0xfff80000) {
    return true;
  }
  if (0xe000 < (param_2 & 0xf000)) {
    return true;
  }
  return 0x800 < (param_2 & 0xc00);
}


