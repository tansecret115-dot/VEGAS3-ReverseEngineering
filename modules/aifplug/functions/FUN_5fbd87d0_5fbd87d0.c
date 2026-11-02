/* Module: aifplug.dll
   Function: FUN_5fbd87d0
   Address: 5fbd87d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd87d0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5fc09698,param_2,0x104);
    DAT_5fc0979b = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5fc0979c,param_2,0x104);
    DAT_5fc0989f = 0;
    return;
  }
  return;
}


