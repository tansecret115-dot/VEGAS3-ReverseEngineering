/* Module: pncrt.dll
   Function: _open_osfhandle
   Address: 78011a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _open_osfhandle(intptr_t _OSFileHandle,int _Flags)

{
  DWORD DVar1;
  uint uVar2;
  int *piVar3;
  ulong *puVar4;
  byte bVar5;
  
                    /* 0x11a50  402  _open_osfhandle */
  bVar5 = 0;
  if ((_Flags & 8U) != 0) {
    bVar5 = 0x20;
  }
  if ((_Flags & 0x4000U) != 0) {
    bVar5 = bVar5 | 0x80;
  }
  DVar1 = GetFileType((HANDLE)_OSFileHandle);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_7800a870(DVar1);
    return -1;
  }
  if (DVar1 == 2) {
    bVar5 = bVar5 | 0x40;
  }
  else if (DVar1 == 3) {
    bVar5 = bVar5 | 8;
  }
  uVar2 = FUN_78011740();
  if (uVar2 == 0xffffffff) {
    piVar3 = _errno();
    *piVar3 = 0x18;
    puVar4 = __doserrno();
    *puVar4 = 0;
    return -1;
  }
  FUN_780118b0(uVar2,(HANDLE)_OSFileHandle);
  *(byte *)((&__pioinfo)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = bVar5 | 1;
  FUN_78011b70(uVar2);
  return uVar2;
}


