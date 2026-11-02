/* Module: sfpaplug.dll
   Function: FUN_004035b0
   Address: 004035b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004035b0(int param_1)

{
  SIZE_T dwBytes;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  dwBytes = *(int *)(param_1 + 0x48) * 2;
  if (80000 < (int)dwBytes) {
    DAT_0045c058 = 1;
    return 0xffffffff;
  }
  pvVar1 = GlobalAlloc(0x42,dwBytes);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    DAT_0045c058 = 1;
    return 0xffffffff;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined1 *)(iVar3 + (int)pvVar2) = *(undefined1 *)(*(int *)(param_1 + 0x40) + -1 + iVar4);
      iVar3 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x48));
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) << 1;
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40));
  GlobalFree(pvVar1);
  *(LPVOID *)(param_1 + 0x40) = pvVar2;
  return 0;
}


