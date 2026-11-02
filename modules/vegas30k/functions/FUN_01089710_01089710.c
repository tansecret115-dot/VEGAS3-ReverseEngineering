/* Module: vegas30k.dll
   Function: FUN_01089710
   Address: 01089710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01089710(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = param_2;
  iVar1 = param_1;
  iVar5 = 0;
  while( true ) {
    piVar3 = *(int **)(iVar1 + 0x4c);
    if (piVar3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (iVar4 <= iVar5) break;
    if (piVar3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(piVar3[2] + iVar5 * 4);
    }
    param_1 = *piVar3;
    if ((param_1 != 0) && (*(char *)(param_1 + 4) == *pcVar2)) {
      *(char **)(param_1 + 0xc) = pcVar2;
      _SfList_AllocAndInsertItem_20(*(undefined4 *)(pcVar2 + 0x34),&param_1,4,0xffffffff,0);
      _SfList_Sort_12(*(undefined4 *)(pcVar2 + 0x34),0,&LAB_010896e0);
    }
    iVar5 = iVar5 + 1;
  }
  return 0;
}


