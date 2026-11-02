/* Module: vidcap30.exe
   Function: FUN_00512210
   Address: 00512210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00512210(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar4 = iVar1 + -1;
  uVar3 = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
  piVar5 = (int *)(iVar2 + iVar4 * 8);
  iVar6 = iVar1;
  if (1 < iVar4) {
    iVar4 = iVar1 + -2;
    do {
      if (*(int *)(param_1 + 0x20) < *piVar5) {
        iVar6 = iVar6 + -1;
      }
      piVar5 = piVar5 + -2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar6 != iVar1) {
    if (*(int *)(iVar2 + -8 + iVar6 * 8) < *(int *)(param_1 + 0x20)) {
      iVar6 = iVar6 + 1;
    }
    *(int *)(param_1 + 0xa0) = iVar6;
  }
  iVar4 = *(int *)(param_1 + 0xa0) + -1;
  *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + iVar4 * 8) = *(undefined4 *)(param_1 + 0x20);
  return;
}


