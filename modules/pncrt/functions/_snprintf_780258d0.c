/* Module: pncrt.dll
   Function: _snprintf
   Address: 780258d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x258d0  440  _snprintf */
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._cnt = _Count;
  local_20._flag = 0x42;
  iVar1 = FUN_7800e9b0(&local_20,_Format,(undefined4 *)&stack0x00000010);
  local_20._cnt = local_20._cnt - 1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}


