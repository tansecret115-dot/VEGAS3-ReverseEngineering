/* Module: pncrt.dll
   Function: _eof
   Address: 7801d950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _eof(int _FileHandle)

{
  DWORD DVar1;
  DWORD DVar2;
  int *piVar3;
  ulong *puVar4;
  
                    /* 0x1d950  209  _eof */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    DVar1 = FUN_780116c0(_FileHandle,0,1);
    if (DVar1 != 0xffffffff) {
      DVar2 = FUN_780116c0(_FileHandle,0,2);
      if (DVar2 != 0xffffffff) {
        if (DVar1 == DVar2) {
          FUN_78011b70(_FileHandle);
          return 1;
        }
        FUN_780116c0(_FileHandle,DVar1,0);
        FUN_78011b70(_FileHandle);
        return 0;
      }
    }
    FUN_78011b70(_FileHandle);
    return -1;
  }
  piVar3 = _errno();
  *piVar3 = 9;
  puVar4 = __doserrno();
  *puVar4 = 0;
  return -1;
}


