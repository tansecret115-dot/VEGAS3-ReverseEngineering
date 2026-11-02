/* Module: sfxpfx1.dll
   Function: FUN_5c971340
   Address: 5c971340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c971340(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  uint dwBytes;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  UINT uFlags;
  undefined4 local_4;
  
  local_4 = 0;
  uVar1 = param_1[10];
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return 0x80004005;
  }
  if (param_2 < 0) {
    param_2 = param_1[0xe] - *param_1;
  }
  iVar2 = param_1[0xf];
  iVar8 = ((iVar2 + -1 + param_2) / iVar2) * iVar2;
  iVar7 = param_1[0xe] - *param_1;
  if (iVar8 - iVar7 != 0 && iVar7 <= iVar8) {
    iVar8 = iVar8 - iVar2;
  }
  if (0 < iVar8) {
    uVar3 = param_1[1];
    dwBytes = (param_1[0xe] - iVar8) * uVar3;
    if (dwBytes < uVar3 || dwBytes - uVar3 == 0) {
      dwBytes = uVar3;
    }
    pvVar5 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar5);
    uFlags = 0x40;
    pvVar5 = GlobalHandle((LPCVOID)param_1[2]);
    pvVar5 = GlobalReAlloc(pvVar5,dwBytes,uFlags);
    pvVar6 = GlobalLock(pvVar5);
    if (pvVar6 == (LPVOID)0x0) {
      local_4 = 0x8007000e;
    }
    else {
      param_1[2] = (int)pvVar6;
      param_1[0xe] = param_1[0xe] - iVar8;
    }
  }
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return local_4;
}


