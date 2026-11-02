/* Module: mcplug.dll
   Function: FUN_0042e0e0
   Address: 0042e0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e0e0(uchar *param_1,uchar *param_2,uint param_3)

{
  uchar *lpsz;
  uchar *puVar1;
  int local_108;
  uchar local_104 [260];
  
  puVar1 = (uchar *)0x0;
  local_108 = 0;
  if (*param_1 != '\0') {
    *param_2 = '\0';
    _mbscpy(local_104,param_1);
    lpsz = local_104;
    if (local_104[0] != '\0') {
      do {
        if ((local_104[0] == ':') || (local_104[0] == '\\')) {
          puVar1 = lpsz + 1;
        }
        lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
        local_104[0] = *lpsz;
      } while (local_104[0] != '\0');
      if (puVar1 != (uchar *)0x0) {
        *puVar1 = '\0';
        local_108 = lstrlenA((LPCSTR)local_104);
        if (local_108 + 1U <= param_3) {
          _mbscpy(param_2,local_104);
        }
      }
    }
    return local_108;
  }
  return 0;
}


