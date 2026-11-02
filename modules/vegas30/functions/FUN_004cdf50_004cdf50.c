/* Module: vegas30.exe
   Function: FUN_004cdf50
   Address: 004cdf50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004cdf50(int param_1)

{
  int iVar1;
  
  if (DAT_0064aeb4 != 0) {
    iVar1 = ftol();
    return iVar1;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = ((param_1 >> 0x17 & 0xffU) - 0x7a) * 0x100 + (param_1 >> 0xf & 0xffU);
  if (param_1 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}


