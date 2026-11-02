/* Module: sfpagepeel.dll
   Function: FUN_00423b20
   Address: 00423b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423b20(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_0047dcb8,param_2,0x104);
    DAT_0047ddbb = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0047ddbc,param_2,0x104);
    DAT_0047debf = 0;
    return;
  }
  return;
}


