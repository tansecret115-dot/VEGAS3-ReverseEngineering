/* Module: pncrt.dll
   Function: _vsnprintf
   Address: 78025c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x25c90  491  _vsnprintf */
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._cnt = _Count;
  local_20._flag = 0x42;
  iVar1 = FUN_7800e9b0(&local_20,_Format,(undefined4 *)_Args);
  local_20._cnt = local_20._cnt - 1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}


