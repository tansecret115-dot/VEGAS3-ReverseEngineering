/* Module: pncrt.dll
   Function: _filelengthi64
   Address: 7801dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl _filelengthi64(int _FileHandle)

{
  int *piVar1;
  ulong *puVar2;
  longlong lVar3;
  longlong lVar4;
  
                    /* 0x1dac0  231  _filelengthi64 */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    lVar3 = FUN_7801e8d0(_FileHandle,0,0,1);
    if (lVar3 == -1) {
      FUN_78011b70(_FileHandle);
      return -1;
    }
    lVar4 = FUN_7801e8d0(_FileHandle,0,0,2);
    if (lVar3 != lVar4) {
      FUN_7801e8d0(_FileHandle,(LONG)lVar3,(LONG)((ulonglong)lVar3 >> 0x20),0);
    }
    FUN_78011b70(_FileHandle);
    return lVar4;
  }
  piVar1 = _errno();
  *piVar1 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return -1;
}


