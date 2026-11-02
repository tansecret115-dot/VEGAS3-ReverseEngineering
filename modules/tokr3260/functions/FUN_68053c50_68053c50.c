/* Module: tokr3260.dll
   Function: FUN_68053c50
   Address: 68053c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053c50(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    return *(undefined4 *)(&DAT_6805c210 + param_1 * 4);
  }
  return 0xfff0bdc1;
}


