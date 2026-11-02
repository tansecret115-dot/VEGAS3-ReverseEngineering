/* Module: pncrt.dll
   Function: _commit
   Address: 780111e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  
                    /* 0x111e0  190  _commit */
  if (DAT_78042840 <= (uint)_FileHandle) {
LAB_7801126c:
    piVar4 = _errno();
    *piVar4 = 9;
    return -1;
  }
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + iVar5) & 1) == 0) goto LAB_7801126c;
  FUN_78011b00(_FileHandle);
  if ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    iVar5 = 0;
    if (DVar2 == 0) goto LAB_7801125d;
    puVar3 = __doserrno();
    *puVar3 = DVar2;
  }
  piVar4 = _errno();
  *piVar4 = 9;
  iVar5 = -1;
LAB_7801125d:
  FUN_78011b70(_FileHandle);
  return iVar5;
}


