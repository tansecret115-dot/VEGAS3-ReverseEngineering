/* Module: sfxpfx2.dll
   Function: FUN_5c8baa50
   Address: 5c8baa50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8baa50(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5c8e9754,param_2,0x104);
    DAT_5c8e9857 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5c8e9858,param_2,0x104);
    DAT_5c8e995b = 0;
    return;
  }
  return;
}


