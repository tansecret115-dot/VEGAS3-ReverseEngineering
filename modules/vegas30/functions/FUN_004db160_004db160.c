/* Module: vegas30.exe
   Function: FUN_004db160
   Address: 004db160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004db160(undefined4 param_1)

{
  int iVar1;
  HWND hWnd;
  int *piVar2;
  
  piVar2 = (int *)FUN_005b8760(param_1);
  if (piVar2 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 3));
    iVar1 = *piVar2;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      _SfList_DeleteList_16(piVar2,iVar1,1,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 3));
    _SfList_Destroy_4(piVar2);
    FUN_005b8780(param_1,0);
    if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x70) != 0)) &&
       (hWnd = *(HWND *)(*(int *)(DAT_0064762c + 0x70) + 0xf1c), hWnd != (HWND)0x0)) {
      SendMessageA(hWnd,0x14b,0,0);
    }
  }
  return;
}


