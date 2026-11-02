/* Module: vegas30.exe
   Function: FUN_004df180
   Address: 004df180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df180(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x24);
    uVar4 = (param_2 & 1) << 4;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffef | uVar4;
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        if (piVar1 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar1;
        }
        if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
        }
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xffffffef | uVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  return;
}


