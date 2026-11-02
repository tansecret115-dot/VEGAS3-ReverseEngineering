/* Module: vegas30k.dll
   Function: FUN_010179a0
   Address: 010179a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010179a0(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != (tagDIR_ENTRY *)0x0) {
    iVar1 = *(int *)(param_2 + 0x21c);
    iVar4 = *(int *)(param_2 + 0x220);
    DtUnprepareDirEntry(param_1,param_2);
    FUN_010178c0(param_1,param_2);
    if (*(int *)(param_2 + 0x21c) != 0) {
      _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x214),*(undefined4 *)(param_2 + 0x220),1,0);
      while( true ) {
        iVar3 = iVar4;
        piVar2 = *(int **)(iVar1 + 0x214);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if (iVar4 <= iVar3) break;
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
          iVar4 = iVar3 + 1;
          iRam00000220 = iVar3;
        }
        else {
          *(int *)(*(int *)(piVar2[2] + iVar3 * 4) + 0x220) = iVar3;
          iVar4 = iVar3 + 1;
        }
      }
    }
  }
  return;
}


