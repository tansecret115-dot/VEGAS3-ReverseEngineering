/* Module: pncrt.dll
   Function: _isatty
   Address: 78011510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _isatty(int _FileHandle)

{
                    /* 0x11510  286  _isatty */
  if (DAT_78042840 <= (uint)_FileHandle) {
    return 0;
  }
  return *(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 0x40;
}


