/* Module: vegas30.exe
   Function: FUN_0050c130
   Address: 0050c130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050c130(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0064762c + 0xa4);
  if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0xa8) & 1) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x98);
    if (*param_1 == 1) {
      iVar1 = param_1[1];
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x148) & 1) != 0)) {
        return iVar1 + 0x144;
      }
    }
    else if (((*param_1 == 2) && (iVar1 = param_1[1], iVar1 != 0)) &&
            ((*(byte *)(iVar1 + 0x84) & 1) != 0)) {
      return iVar1 + 0x80;
    }
  }
  return iVar2;
}


