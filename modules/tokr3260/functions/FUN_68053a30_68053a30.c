/* Module: tokr3260.dll
   Function: FUN_68053a30
   Address: 68053a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68053a30(int param_1)

{
  if ((param_1 < 8) && (-1 < param_1)) {
    return *(undefined4 *)(&DAT_6805c1f0 + param_1 * 4);
  }
  return 0xfff0bdc1;
}


