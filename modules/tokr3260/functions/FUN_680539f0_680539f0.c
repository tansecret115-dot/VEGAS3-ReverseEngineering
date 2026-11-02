/* Module: tokr3260.dll
   Function: FUN_680539f0
   Address: 680539f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_680539f0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    return *(undefined4 *)(&DAT_6805c190 + param_1 * 4);
  }
  return 0xfff0bdc1;
}


