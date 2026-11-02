/* Module: vfplugs.dll
   Function: FUN_00428b40
   Address: 00428b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428b40(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_00494d40,param_2,0x104);
    DAT_00494e43 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_00494e44,param_2,0x104);
    DAT_00494f47 = 0;
    return;
  }
  return;
}


