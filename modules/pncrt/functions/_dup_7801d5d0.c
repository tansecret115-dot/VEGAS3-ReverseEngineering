/* Module: pncrt.dll
   Function: _dup
   Address: 7801d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _dup(int _FileHandle)

{
  byte bVar1;
  int _FileHandle_00;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  int iVar6;
  LPHANDLE lpTargetHandle;
  DWORD DVar7;
  BOOL BVar8;
  DWORD dwOptions;
  
                    /* 0x1d5d0  203  _dup */
  _FileHandle_00 = _FileHandle;
  if ((uint)_FileHandle < DAT_78042840) {
    iVar2 = _FileHandle >> 5;
    iVar6 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&__pioinfo)[iVar2] + 4 + iVar6) & 1) != 0) {
      FUN_78011b00(_FileHandle);
      bVar1 = *(byte *)((&__pioinfo)[iVar2] + 4 + iVar6);
      uVar3 = FUN_78011740();
      if (uVar3 == 0xffffffff) {
        piVar4 = _errno();
        *piVar4 = 0x18;
        puVar5 = __doserrno();
        *puVar5 = 0;
        FUN_78011b70(_FileHandle_00);
        return -1;
      }
      dwOptions = 2;
      BVar8 = 1;
      lpTargetHandle = (LPHANDLE)&_FileHandle;
      DVar7 = 0;
      hTargetProcessHandle = GetCurrentProcess();
      hSourceHandle = (HANDLE)_get_osfhandle(_FileHandle_00);
      hSourceProcessHandle = GetCurrentProcess();
      BVar8 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle
                              ,DVar7,BVar8,dwOptions);
      if (BVar8 == 0) {
        DVar7 = GetLastError();
      }
      else {
        FUN_780118b0(uVar3,(HANDLE)_FileHandle);
        DVar7 = 0;
      }
      FUN_78011b70(uVar3);
      FUN_78011b70(_FileHandle_00);
      if (DVar7 != 0) {
        FUN_7800a870(DVar7);
        return -1;
      }
      *(byte *)((&__pioinfo)[(int)uVar3 >> 5] + 4 + (uVar3 & 0x1f) * 0x24) = bVar1 & 0xef;
      return uVar3;
    }
  }
  piVar4 = _errno();
  *piVar4 = 9;
  puVar5 = __doserrno();
  *puVar5 = 0;
  return -1;
}


