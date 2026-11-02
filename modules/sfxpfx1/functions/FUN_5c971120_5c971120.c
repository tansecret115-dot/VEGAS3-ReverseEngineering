/* Module: sfxpfx1.dll
   Function: FUN_5c971120
   Address: 5c971120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c971120(int param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  SIZE_T dwBytes;
  undefined4 uVar6;
  UINT uFlags;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  else if ((uVar1 & 0x40000000) == 0) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != *(DWORD *)(param_1 + 0x34)) {
      return 0x80004005;
    }
  }
  if (param_2 < 1) {
    param_2 = *(int *)(param_1 + 0x3c);
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  iVar5 = ((iVar5 + -1 + param_2) / iVar5) * iVar5;
  dwBytes = (iVar5 + *(int *)(param_1 + 0x38)) * *(int *)(param_1 + 4);
  pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
  GlobalUnlock(pvVar3);
  uFlags = 0x40;
  pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
  pvVar3 = GlobalReAlloc(pvVar3,dwBytes,uFlags);
  pvVar4 = GlobalLock(pvVar3);
  if (pvVar4 == (LPVOID)0x0) {
    uVar6 = 0x8007000e;
  }
  else {
    uVar6 = 0;
    *(LPVOID *)(param_1 + 8) = pvVar4;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar5;
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  return uVar6;
}


