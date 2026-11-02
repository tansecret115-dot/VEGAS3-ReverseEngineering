/* Module: sfppack2.dll
   Function: FUN_5cd28640
   Address: 5cd28640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd28640(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5cd67f60,param_2,0x104);
    DAT_5cd68063 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5cd68064,param_2,0x104);
    DAT_5cd68167 = 0;
    return;
  }
  return;
}


