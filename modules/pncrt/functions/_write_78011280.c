/* Module: pncrt.dll
   Function: _write
   Address: 78011280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
                    /* 0x11280  545  _write */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    iVar1 = FUN_78011300(_FileHandle,_Buf,_MaxCharCount);
    FUN_78011b70(_FileHandle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}


