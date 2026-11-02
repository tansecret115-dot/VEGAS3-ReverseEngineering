/* Module: pncrt.dll
   Function: _vsnwprintf
   Address: 78025d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x25d00  492  _vsnwprintf */
  local_20._base = (char *)_Dest;
  local_20._ptr = (char *)_Dest;
  local_20._flag = 0x42;
  local_20._cnt = _Count * 2;
  iVar1 = FUN_780285a0(&local_20,_Format,(undefined4 *)_Args);
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


