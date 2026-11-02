/* Module: vegas30.exe
   Function: FUN_00529c80
   Address: 00529c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00529c80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 4);
  if (iVar4 != *(int *)(*(int *)(param_1 + 0x88) + 4)) {
    return 1;
  }
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x88) + 8) + 8);
    puVar5 = (undefined4 *)(iVar1 + iVar4 * 4);
    do {
      pcVar7 = *(char **)((*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 8) + 8) - iVar1) +
                         (int)puVar5);
      pcVar9 = (char *)*puVar5;
      if (*pcVar7 != *pcVar9) {
        return 1;
      }
      iVar3 = *(int *)(pcVar7 + 0x114);
      if (iVar3 != *(int *)(pcVar9 + 0x114)) {
        return 1;
      }
      iVar2 = *(int *)(pcVar7 + 0x11c);
      if (iVar2 != *(int *)(pcVar9 + 0x11c)) {
        return 1;
      }
      if (*(char **)(pcVar7 + 0x120) != (char *)0x0) {
        bVar10 = true;
        pcVar6 = *(char **)(pcVar7 + 0x120);
        pcVar8 = *(char **)(pcVar9 + 0x120);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar10 = *pcVar6 == *pcVar8;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          return 1;
        }
      }
      if (*(char **)(pcVar7 + 0x118) != (char *)0x0) {
        bVar10 = true;
        pcVar7 = *(char **)(pcVar7 + 0x118);
        pcVar9 = *(char **)(pcVar9 + 0x118);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar10 = *pcVar7 == *pcVar9;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (!bVar10) {
          return 1;
        }
      }
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}


