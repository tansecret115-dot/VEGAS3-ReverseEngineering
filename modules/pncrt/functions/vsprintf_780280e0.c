/* Module: pncrt.dll
   Function: vsprintf
   Address: 780280e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x280e0  742  vsprintf */
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._flag = 0x42;
  local_20._cnt = 0x7fffffff;
  iVar1 = FUN_7800e9b0(&local_20,_Format,(undefined4 *)_Args);
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}


