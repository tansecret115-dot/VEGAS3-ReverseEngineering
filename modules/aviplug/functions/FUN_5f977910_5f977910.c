/* Module: aviplug.dll
   Function: FUN_5f977910
   Address: 5f977910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f977910(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5f9f56fc,param_2,0x104);
    DAT_5f9f57ff = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5f9f5800,param_2,0x104);
    DAT_5f9f5903 = 0;
    return;
  }
  return;
}


