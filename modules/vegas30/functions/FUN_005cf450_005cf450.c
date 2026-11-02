/* Module: vegas30.exe
   Function: FUN_005cf450
   Address: 005cf450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005cf450(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x24);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar4 * 4);
      if ((((*(int *)(iVar2 + 4) == 3) && (*(int *)(iVar2 + 0x50) != 0)) &&
          (piVar3 = *(int **)(iVar2 + 0xf4), piVar3 != (int *)0x0)) &&
         ((*(byte *)(*(int *)(*(int *)(iVar2 + 0x50) + 0x18) + 0x134) & 0x80) != 0)) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(iVar2 + 0xf4) = 0;
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x200000;
          *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x2000;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


