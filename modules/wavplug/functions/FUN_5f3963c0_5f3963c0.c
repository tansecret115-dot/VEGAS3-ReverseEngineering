/* Module: wavplug.dll
   Function: FUN_5f3963c0
   Address: 5f3963c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3963c0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5f3db108,param_2,0x104);
    DAT_5f3db20b = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5f3db20c,param_2,0x104);
    DAT_5f3db30f = 0;
    return;
  }
  return;
}


