/* Module: pncrt.dll
   Function: _dup2
   Address: 7801d700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _dup2(int _FileHandleSrc,int _FileHandleDst)

{
  int _FileHandle;
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  uint uVar5;
  int iVar6;
  LPHANDLE lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL BVar7;
  DWORD dwOptions;
  
  iVar1 = _FileHandleDst;
                    /* 0x1d700  204  _dup2 */
  _FileHandle = _FileHandleSrc;
  if (DAT_78042840 <= (uint)_FileHandleSrc) goto LAB_7801d7ad;
  piVar3 = &__pioinfo + (_FileHandleSrc >> 5);
  iVar6 = (_FileHandleSrc & 0x1fU) * 0x24;
  if (((*(byte *)(*piVar3 + 4 + iVar6) & 1) == 0) || (0x7ff < (uint)_FileHandleDst))
  goto LAB_7801d7ad;
  if ((int)DAT_78042840 <= _FileHandleDst) {
    iVar2 = FUN_7801d8c0(_FileHandleDst);
    if (iVar2 != 0) {
      piVar3 = _errno();
      *piVar3 = 0xc;
      return -1;
    }
  }
  if (_FileHandle < iVar1) {
    FUN_78011b00(_FileHandle);
    uVar5 = iVar1;
LAB_7801d789:
    FUN_78011b00(uVar5);
  }
  else if (iVar1 < _FileHandle) {
    FUN_78011b00(iVar1);
    uVar5 = _FileHandle;
    goto LAB_7801d789;
  }
  if ((*(byte *)(*piVar3 + 4 + iVar6) & 1) != 0) {
    if (_FileHandle == iVar1) {
      FUN_78011b70(_FileHandle);
      FUN_78011b70(iVar1);
      return 0;
    }
    _FileHandleDst = (int)(&__pioinfo + (iVar1 >> 5));
    iVar2 = (iVar1 & 0x1fU) * 0x24;
    if ((*(byte *)((&__pioinfo)[iVar1 >> 5] + 4 + iVar2) & 1) != 0) {
      FUN_780115b0(iVar1);
    }
    dwOptions = 2;
    BVar7 = 1;
    lpTargetHandle = (LPHANDLE)&_FileHandleSrc;
    dwDesiredAccess = 0;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceHandle = (HANDLE)_get_osfhandle(_FileHandle);
    hSourceProcessHandle = GetCurrentProcess();
    BVar7 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                            dwDesiredAccess,BVar7,dwOptions);
    if (BVar7 == 0) {
      uVar5 = GetLastError();
    }
    else {
      FUN_780118b0(iVar1,(HANDLE)_FileHandleSrc);
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      FUN_7800a870(uVar5);
      FUN_78011b70(_FileHandle);
      FUN_78011b70(iVar1);
      return -1;
    }
    *(byte *)(*(int *)_FileHandleDst + 4 + iVar2) = *(byte *)(*piVar3 + 4 + iVar6) & 0xef;
    FUN_78011b70(_FileHandle);
    FUN_78011b70(iVar1);
    return 0;
  }
  FUN_78011b70(_FileHandle);
  FUN_78011b70(iVar1);
LAB_7801d7ad:
  piVar3 = _errno();
  *piVar3 = 9;
  puVar4 = __doserrno();
  *puVar4 = 0;
  return -1;
}


