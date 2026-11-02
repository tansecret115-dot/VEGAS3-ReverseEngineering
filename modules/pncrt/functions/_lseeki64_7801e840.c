/* Module: pncrt.dll
   Function: _lseeki64
   Address: 7801e840
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong __cdecl _lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  longlong lVar3;
  LONG in_stack_00000008;
  
                    /* 0x1e840  335  _lseeki64 */
  if (((uint)_FileHandle < DAT_78042840) &&
     ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    FUN_78011b00(_FileHandle);
    lVar3 = FUN_7801e8d0(_FileHandle,in_stack_00000008,(LONG)_Offset,_Offset._4_4_);
    FUN_78011b70(_FileHandle);
    return lVar3;
  }
  piVar1 = _errno();
  *piVar1 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return -1;
}


