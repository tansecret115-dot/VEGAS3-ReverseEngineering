/* Module: vegas30.exe
   Function: FUN_005b95b0
   Address: 005b95b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b95b0(int param_1)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  HGLOBAL pvVar3;
  
  piVar1 = *(int **)(param_1 + 0xc34);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(piVar1[2] + iVar2 * 4);
      FUN_005ba110(param_1,iVar2);
      DeleteCriticalSection(lpCriticalSection);
      pvVar3 = GlobalHandle(lpCriticalSection);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpCriticalSection);
      GlobalFree(pvVar3);
      *(undefined4 *)(piVar1[2] + iVar2 * 4) = 0;
      _SfList_DeleteList_16(piVar1,iVar2,1,0);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0xc34));
    *(undefined4 *)(param_1 + 0xc34) = 0;
    return 0;
  }
  return 0;
}


