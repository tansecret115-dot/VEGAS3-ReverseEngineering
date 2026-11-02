/* Module: sftrans1.dll
   Function: FUN_004c55e0
   Address: 004c55e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c55e0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_0057bb34,param_2,0x104);
    DAT_0057bc37 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0057bc38,param_2,0x104);
    DAT_0057bd3b = 0;
    return;
  }
  return;
}


