/* Module: vegas30.exe
   Function: FUN_004baba0
   Address: 004baba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004baba0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  piVar2 = *(int **)(param_2 + 0x3c);
  if ((piVar2 == (int *)0x0) && (piVar2 = *(int **)(param_1 + 0xc38), piVar2 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (0 < iVar4) {
    piVar2 = (int *)piVar2[2];
    iVar5 = iVar4;
    do {
      iVar1 = *(int *)(*piVar2 + 0x10);
      if ((0 < iVar1) && (iVar1 < 0x22)) {
        uVar3 = uVar3 | 1 << ((char)iVar1 - 1U & 0x1f);
      }
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((uVar3 & uVar3 + 1) != 0) {
    iVar5 = 1;
    if (1 < iVar4 + 1) {
      do {
        if ((uVar3 & 1) == 0) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
        uVar3 = uVar3 >> 1;
      } while (iVar5 < iVar4 + 1);
    }
    return iVar5;
  }
  return iVar4 + 1;
}


