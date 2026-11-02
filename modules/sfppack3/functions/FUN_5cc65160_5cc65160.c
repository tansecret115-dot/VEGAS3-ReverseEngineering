/* Module: sfppack3.dll
   Function: FUN_5cc65160
   Address: 5cc65160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc65160(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5cc9865c,param_2,0x104);
    DAT_5cc9875f = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5cc98760,param_2,0x104);
    DAT_5cc98863 = 0;
    return;
  }
  return;
}


