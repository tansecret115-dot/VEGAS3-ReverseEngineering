/* Module: extmondrv.dll
   Function: FUN_004140c0
   Address: 004140c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004140c0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_0045b43c,param_2,0x104);
    DAT_0045b53f = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0045b540,param_2,0x104);
    DAT_0045b643 = 0;
    return;
  }
  return;
}


