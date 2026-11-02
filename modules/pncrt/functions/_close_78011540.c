/* Module: pncrt.dll
   Function: _close
   Address: 78011540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
                    /* 0x11540  189  _close */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    iVar1 = FUN_780115b0(_FileHandle);
    FUN_78011b70(_FileHandle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}


