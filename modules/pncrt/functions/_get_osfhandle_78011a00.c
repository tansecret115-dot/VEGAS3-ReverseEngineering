/* Module: pncrt.dll
   Function: _get_osfhandle
   Address: 78011a00
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _get_osfhandle(int _FileHandle)

{
  int *piVar1;
  ulong *puVar2;
  
                    /* 0x11a00  255  _get_osfhandle */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    return *(intptr_t *)((&__pioinfo)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24);
  }
  piVar1 = _errno();
  *piVar1 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return -1;
}


