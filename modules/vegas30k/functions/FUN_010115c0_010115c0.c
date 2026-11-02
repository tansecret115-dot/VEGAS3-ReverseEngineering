/* Module: vegas30k.dll
   Function: FUN_010115c0
   Address: 010115c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010115c0(LPCVOID param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (LPCVOID)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)((int)param_1 + 4);
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
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(piVar1[2] + iVar4 * 4);
      }
      if (*piVar1 == 0) {
        _SfList_Destroy_4(piVar1[5]);
LAB_01011620:
        iVar4 = iVar4 + 1;
      }
      else {
        if (*piVar1 != 1) goto LAB_01011620;
        _SfList_Destroy_4(piVar1[7]);
        iVar4 = iVar4 + 1;
      }
    }
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 4));
  }
  pvVar2 = GlobalHandle(param_1);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(param_1);
  GlobalFree(pvVar2);
  return;
}


