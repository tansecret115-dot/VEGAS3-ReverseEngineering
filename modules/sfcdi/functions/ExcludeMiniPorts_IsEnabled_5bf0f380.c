/* Module: sfcdi.dll
   Function: ExcludeMiniPorts_IsEnabled
   Address: 5bf0f380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ExcludeMiniPorts_IsEnabled(char *) */

int ExcludeMiniPorts_IsEnabled(char *param_1)

{
  LSTATUS LVar1;
  HKEY local_18c;
  DWORD local_188 [2];
  BYTE local_180 [128];
  uchar local_100 [256];
  
                    /* 0xf380  18  ?ExcludeMiniPorts_IsEnabled@@YGHPAD@Z */
  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
  }
  if (DAT_5bf65e20 != 0) {
    return 0;
  }
  FUN_5bf25750(local_100,(BYTE *)"%s\\%s");
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)local_100,0,1,&local_18c);
  if (LVar1 == 0) {
    local_188[0] = 1;
    local_188[1] = 0x80;
    LVar1 = RegQueryValueExA(local_18c,s_ExcludeMiniPorts_5bf64584,(LPDWORD)0x0,local_188,local_180,
                             local_188 + 1);
    RegCloseKey(local_18c);
    if (LVar1 == 0) {
      if (param_1 != (char *)0x0) {
        _mbscpy((uchar *)param_1,local_180);
      }
      if (local_180[0] == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


