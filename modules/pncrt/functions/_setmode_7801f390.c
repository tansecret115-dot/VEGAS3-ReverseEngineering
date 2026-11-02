/* Module: pncrt.dll
   Function: _setmode
   Address: 7801f390
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _setmode(int _FileHandle,int _Mode)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x1f390  437  _setmode */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    iVar1 = FUN_7801f400(_FileHandle,_Mode);
    FUN_78011b70(_FileHandle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  return -1;
}


