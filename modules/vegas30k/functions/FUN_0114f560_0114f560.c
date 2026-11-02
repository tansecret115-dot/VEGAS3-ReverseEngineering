/* Module: vegas30k.dll
   Function: FUN_0114f560
   Address: 0114f560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114f560(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar2 = 0;
  if (0xff00 < param_2) {
    param_2 = 0;
    iVar2 = -*(int *)(param_1 + 0x70);
  }
  if (param_3 < 0xff01) {
    uVar1 = param_2 - param_3;
    if (param_2 < param_3) {
      iVar4 = param_3 - param_2;
      psVar5 = (short *)(*(int *)(param_1 + 0x1c0) + 2 + param_2 * 0x10);
      do {
        iVar2 = iVar2 - *psVar5;
        psVar5 = psVar5 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return iVar2;
    }
  }
  else {
    param_3 = 0;
    iVar2 = iVar2 + *(int *)(param_1 + 0x70);
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    iVar3 = param_2 - param_3;
    iVar4 = *(int *)(param_1 + 0x1c0) + 2 + param_2 * 0x10;
    do {
      psVar5 = (short *)(iVar4 + -0x10);
      iVar4 = iVar4 + -0x10;
      iVar2 = iVar2 + *psVar5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}


