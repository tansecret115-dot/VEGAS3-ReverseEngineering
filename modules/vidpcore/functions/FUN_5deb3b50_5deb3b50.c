/* Module: vidpcore.dll
   Function: FUN_5deb3b50
   Address: 5deb3b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb3b50(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5df431a0,param_2,0x104);
    DAT_5df432a3 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5df432a4,param_2,0x104);
    DAT_5df433a7 = 0;
    return;
  }
  return;
}


