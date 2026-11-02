/* Module: oggplug.dll
   Function: FUN_00409ad0
   Address: 00409ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409ad0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_00510c20,param_2,0x104);
    DAT_00510d23 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_00510d24,param_2,0x104);
    DAT_00510e27 = 0;
    return;
  }
  return;
}


