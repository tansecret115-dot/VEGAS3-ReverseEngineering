/* Module: vegas30k.dll
   Function: FUN_0114f6c0
   Address: 0114f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114f6c0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < param_3) {
    iVar2 = *(int *)(param_1 + 0x16c);
    if ((int)(0x2000 / (longlong)iVar2) < (int)(param_3 - param_2)) {
      return -0x2000;
    }
    iVar1 = param_2 - param_3;
  }
  else {
    iVar1 = param_2 - param_3;
    iVar2 = *(int *)(param_1 + 0x16c);
    if ((int)(0x2000 / (longlong)iVar2) < iVar1) {
      return 0x2000;
    }
  }
  return iVar1 * iVar2;
}


