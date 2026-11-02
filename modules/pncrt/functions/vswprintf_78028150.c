/* Module: pncrt.dll
   Function: vswprintf
   Address: 78028150
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vswprintf(wchar_t *_String,size_t _Count,wchar_t *_Format,va_list _Ap)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x28150  743  vswprintf */
  local_20._base = (char *)_String;
  local_20._ptr = (char *)_String;
  local_20._flag = 0x42;
  local_20._cnt = 0x7fffffff;
  iVar1 = FUN_780285a0(&local_20,(short *)_Count,(undefined4 *)_Format);
  local_20._cnt = local_20._cnt + -1;
  if (local_20._cnt < 0) {
    _flsbuf(0,&local_20);
  }
  else {
    *local_20._ptr = 0;
    local_20._ptr = (char *)((int)local_20._ptr + 1);
  }
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = 0;
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}


