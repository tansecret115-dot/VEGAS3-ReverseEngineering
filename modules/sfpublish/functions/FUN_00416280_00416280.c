/* Module: sfpublish.dll
   Function: FUN_00416280
   Address: 00416280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416280(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_004419f4,param_2,0x104);
    DAT_00441af7 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_00441af8,param_2,0x104);
    DAT_00441bfb = 0;
    return;
  }
  return;
}


