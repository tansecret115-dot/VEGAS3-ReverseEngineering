/* Module: vegas30.exe
   Function: FUN_0059e430
   Address: 0059e430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0059e430(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *pMem;
  HGLOBAL pvVar4;
  
  pMem = DAT_0065ad10;
  if (DAT_0065ad10 != (int *)0x0) {
    piVar1 = (int *)*DAT_0065ad10;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        piVar3 = *(int **)(piVar1[2] + iVar2 * 4);
        (**(code **)(*piVar3 + 8))(piVar3);
        _SfList_DeleteList_16(piVar1,iVar2,1,0);
      }
      _SfList_Destroy_4(piVar1);
      *pMem = 0;
    }
    piVar1 = (int *)pMem[1];
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        piVar3 = *(int **)(piVar1[2] + iVar2 * 4);
        (**(code **)(*piVar3 + 8))(piVar3);
        _SfList_DeleteList_16(piVar1,iVar2,1,0);
      }
      _SfList_Destroy_4(piVar1);
      pMem[1] = 0;
    }
    if (pMem[2] != 0) {
      _SfList_Destroy_4(pMem[2]);
    }
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
    DAT_0065ad10 = (int *)0x0;
    if (DAT_0065ac78 != 0) {
      FUN_005a6e00(&DAT_0065ac78);
    }
  }
  return 0;
}


