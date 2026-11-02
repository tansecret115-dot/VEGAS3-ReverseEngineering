/* Module: vegas30k.dll
   Function: SfDvdiRemoveTitleSearchPointer
   Address: 010871e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiRemoveTitleSearchPointer(struct tagSFVMG_INFO *,struct tagTT_SRP *) */

long SfDvdiRemoveTitleSearchPointer(tagSFVMG_INFO *param_1,tagTT_SRP *param_2)

{
  int *piVar1;
  int iVar2;
  tagTT_SRP *ptVar3;
  int iVar4;
  
                    /* 0x871e0  376
                       ?SfDvdiRemoveTitleSearchPointer@@YGJPAUtagSFVMG_INFO@@PAUtagTT_SRP@@@Z */
  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar4) {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar2 + -1 < iVar4)) {
      ptVar3 = (tagTT_SRP *)0x0;
    }
    else {
      ptVar3 = *(tagTT_SRP **)(piVar1[2] + iVar4 * 4);
    }
    if (param_2 == ptVar3) break;
    iVar4 = iVar4 + 1;
  }
  _SfList_DeleteList_16(piVar1,iVar4,1,1);
  return 0;
}


