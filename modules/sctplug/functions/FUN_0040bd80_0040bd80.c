/* Module: sctplug.dll
   Function: FUN_0040bd80
   Address: 0040bd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bd80(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_0043cab8,param_2,0x104);
    DAT_0043cbbb = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0043cbbc,param_2,0x104);
    DAT_0043ccbf = 0;
    return;
  }
  return;
}


