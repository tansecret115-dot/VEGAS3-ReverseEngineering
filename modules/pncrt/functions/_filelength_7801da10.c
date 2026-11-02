/* Module: pncrt.dll
   Function: _filelength
   Address: 7801da10
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl _filelength(int _FileHandle)

{
  DWORD DVar1;
  DWORD DVar2;
  int *piVar3;
  ulong *puVar4;
  
                    /* 0x1da10  230  _filelength */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    DVar1 = FUN_780116c0(_FileHandle,0,1);
    if (DVar1 == 0xffffffff) {
      FUN_78011b70(_FileHandle);
      return -1;
    }
    DVar2 = FUN_780116c0(_FileHandle,0,2);
    if (DVar1 != DVar2) {
      FUN_780116c0(_FileHandle,DVar1,0);
    }
    FUN_78011b70(_FileHandle);
    return DVar2;
  }
  piVar3 = _errno();
  *piVar3 = 9;
  puVar4 = __doserrno();
  *puVar4 = 0;
  return -1;
}


