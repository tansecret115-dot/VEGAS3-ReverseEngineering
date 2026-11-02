/* Module: pncrt.dll
   Function: _locking
   Address: 7801e6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _locking(int _FileHandle,int _LockMode,long _NumOfBytes)

{
  int _FileHandle_00;
  DWORD DVar1;
  HANDLE pvVar2;
  int iVar3;
  int *piVar4;
  ulong *puVar5;
  DWORD DVar6;
  DWORD DVar7;
  DWORD dwFileOffsetHigh;
  DWORD DVar8;
  DWORD nNumberOfBytesToLockHigh;
  
                    /* 0x1e6f0  328  _locking */
  _FileHandle_00 = _FileHandle;
  if ((DAT_78042840 <= (uint)_FileHandle) ||
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) == 0)) {
    piVar4 = _errno();
    *piVar4 = 9;
    puVar5 = __doserrno();
    *puVar5 = 0;
    return -1;
  }
  FUN_78011b00(_FileHandle);
  DVar1 = FUN_780116c0(_FileHandle,0,1);
  if (DVar1 == 0xffffffff) {
    FUN_78011b70(_FileHandle);
    return -1;
  }
  if ((_LockMode == 1) || (_FileHandle = 0, _LockMode == 3)) {
    _FileHandle = 9;
  }
  while( true ) {
    DVar6 = 0;
    nNumberOfBytesToLockHigh = 0;
    dwFileOffsetHigh = 0;
    if (_LockMode == 0) {
      DVar7 = DVar1;
      DVar8 = _NumOfBytes;
      pvVar2 = (HANDLE)_get_osfhandle(_FileHandle_00);
      iVar3 = UnlockFile(pvVar2,DVar7,dwFileOffsetHigh,DVar8,nNumberOfBytesToLockHigh);
    }
    else {
      DVar7 = DVar1;
      DVar8 = _NumOfBytes;
      pvVar2 = (HANDLE)_get_osfhandle(_FileHandle_00);
      iVar3 = LockFile(pvVar2,DVar7,dwFileOffsetHigh,DVar8,nNumberOfBytesToLockHigh);
    }
    if (iVar3 == 0) {
      DVar6 = GetLastError();
    }
    if ((_FileHandle < 1) || (DVar6 == 0)) break;
    Sleep(1000);
    _FileHandle = _FileHandle + -1;
  }
  FUN_78011b70(_FileHandle_00);
  if (DVar6 != 0) {
    if ((_LockMode != 1) && (_LockMode != 3)) {
      FUN_7800a870(DVar6);
      return -1;
    }
    piVar4 = _errno();
    *piVar4 = 0x24;
    puVar5 = __doserrno();
    *puVar5 = DVar6;
    return -1;
  }
  return 0;
}


