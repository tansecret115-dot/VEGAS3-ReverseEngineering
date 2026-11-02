/* Module: vegas30k.dll
   Function: SfPQList_AddItemSorted
   Address: 010145e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfPQList_AddItemSorted(struct tSFLIST *,struct cditemtag *,char *) */

int SfPQList_AddItemSorted(tSFLIST *param_1,cditemtag *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x145e0  475  ?SfPQList_AddItemSorted@@YGHPAUtSFLIST@@PAUcditemtag@@PAD@Z */
  if (param_1 == (tSFLIST *)0x0) {
    return -1;
  }
  iVar2 = *(int *)param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    piVar3 = *(int **)(param_1 + 8);
    while (*(uint *)(*piVar3 + 8) <= *(uint *)(param_2 + 8)) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      if (iVar2 <= iVar1) {
        iVar2 = SfPQList_InsertItem(param_1,-1,param_2,param_3);
        return iVar2;
      }
    }
    if (iVar1 < iVar2) {
      iVar2 = SfPQList_InsertItem(param_1,iVar1,param_2,param_3);
      return iVar2;
    }
  }
  iVar2 = SfPQList_InsertItem(param_1,-1,param_2,param_3);
  return iVar2;
}


