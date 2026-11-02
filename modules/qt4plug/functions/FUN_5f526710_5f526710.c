/* Module: qt4plug.dll
   Function: FUN_5f526710
   Address: 5f526710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f526710(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5f5a3ee0,param_2,0x104);
    DAT_5f5a3fe3 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5f5a3fe4,param_2,0x104);
    DAT_5f5a40e7 = 0;
    return;
  }
  return;
}


