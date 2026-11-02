/* Module: sfxpfx1.dll
   Function: FUN_5c969120
   Address: 5c969120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c969120(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5c998afc,param_2,0x104);
    DAT_5c998bff = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5c998c00,param_2,0x104);
    DAT_5c998d03 = 0;
    return;
  }
  return;
}


