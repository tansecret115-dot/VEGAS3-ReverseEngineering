/* Module: vegas30k.dll
   Function: SfDvdiRemoveVideoTitleSetInfo
   Address: 0108b870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiRemoveVideoTitleSetInfo(struct tagSFVMG_INFO *,struct tagSFVTS_INFO *) */

long SfDvdiRemoveVideoTitleSetInfo(tagSFVMG_INFO *param_1,tagSFVTS_INFO *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x8b870  377
                       ?SfDvdiRemoveVideoTitleSetInfo@@YGJPAUtagSFVMG_INFO@@PAUtagSFVTS_INFO@@@Z */
  if (param_1 != (tagSFVMG_INFO *)0x0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x24);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
      }
      if (*param_2 == *(tagSFVTS_INFO *)(iVar3 + 6)) {
        _SfList_DeleteList_16(piVar1,iVar4,1,1);
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    piVar1 = *(int **)(param_1 + 8);
    iVar4 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) goto LAB_0108b90c;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(piVar1[2] + iVar4 * 4);
      }
      if ((tagSFVTS_INFO *)*piVar2 == param_2) break;
      iVar4 = iVar4 + 1;
    }
    _SfList_DeleteList_16(piVar1,iVar4,1,1);
  }
LAB_0108b90c:
  iVar4 = 0;
  while( true ) {
    piVar1 = *(int **)(param_2 + 0x34);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar3 <= iVar4) break;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iRam00000000 + 0xc) = 0;
    }
    else {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(**(int **)(piVar1[2] + -4 + iVar4 * 4) + 0xc) = 0;
    }
  }
  return 0;
}


