/* Module: vegas30k.dll
   Function: FUN_01191db0
   Address: 01191db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01191db0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return -0x7fff0001;
  }
  if (param_2 == 0) {
    iVar1 = FUN_01191570();
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_01191360();
  }
  else {
    iVar1 = FUN_011910e0();
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_01191430();
  }
  if (-1 < iVar1) {
    *(int *)(param_1 + 8) = param_2;
  }
  return iVar1;
}


