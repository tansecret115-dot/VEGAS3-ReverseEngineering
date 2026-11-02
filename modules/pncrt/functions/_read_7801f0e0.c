/* Module: pncrt.dll
   Function: _read
   Address: 7801f0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
                    /* 0x1f0e0  418  _read */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    iVar1 = FUN_7801f160(_FileHandle,_DstBuf,_MaxCharCount);
    FUN_78011b70(_FileHandle);
    return iVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}


