/* Module: mcplug.dll
   Function: FUN_004180f0
   Address: 004180f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004180f0(int param_1,LPCSTR param_2)

{
  if (param_1 == 0) {
    lstrcpynA(&DAT_00487c5c,param_2,0x104);
    DAT_00487d5f = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_00487d60,param_2,0x104);
    DAT_00487e63 = 0;
    return;
  }
  return;
}


