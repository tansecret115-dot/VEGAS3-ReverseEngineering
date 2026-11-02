/* Module: mcplugrw.dll
   Function: FUN_0041c2f0
   Address: 0041c2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c2f0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_004a9678,param_2,0x104);
    DAT_004a977b = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_004a977c,param_2,0x104);
    DAT_004a987f = 0;
    return;
  }
  return;
}


