/* Module: pncrt.dll
   Function: _lseek
   Address: 78011640
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl _lseek(int _FileHandle,long _Offset,int _Origin)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
                    /* 0x11640  334  _lseek */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    DVar1 = FUN_780116c0(_FileHandle,_Offset,_Origin);
    FUN_78011b70(_FileHandle);
    return DVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}


