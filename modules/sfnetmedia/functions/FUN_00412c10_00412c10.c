/* Module: sfnetmedia.dll
   Function: FUN_00412c10
   Address: 00412c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412c10(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_00441adc,param_2,0x104);
    DAT_00441bdf = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_00441be0,param_2,0x104);
    DAT_00441ce3 = 0;
    return;
  }
  return;
}


