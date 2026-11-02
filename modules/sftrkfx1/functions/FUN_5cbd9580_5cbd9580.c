/* Module: sftrkfx1.dll
   Function: FUN_5cbd9580
   Address: 5cbd9580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd9580(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_5cc1185c,param_2,0x104);
    DAT_5cc1195f = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_5cc11960,param_2,0x104);
    DAT_5cc11a63 = 0;
    return;
  }
  return;
}


