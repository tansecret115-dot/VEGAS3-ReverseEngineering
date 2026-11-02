/* Module: pncrt.dll
   Function: sprintf
   Address: 780278f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  FILE local_20;
  
                    /* 0x278f0  700  sprintf */
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._flag = 0x42;
  local_20._cnt = 0x7fffffff;
  iVar1 = FUN_7800e9b0(&local_20,_Format,(undefined4 *)&stack0x0000000c);
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  _flsbuf(0,&local_20);
  return iVar1;
}


