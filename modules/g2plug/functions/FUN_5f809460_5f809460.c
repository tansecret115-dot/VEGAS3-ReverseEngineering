/* Module: g2plug.dll
   Function: FUN_5f809460
   Address: 5f809460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f809460(char *param_1)

{
  int iVar1;
  LPCSTR lpszCurrent;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = 0;
  local_8 = 0;
  local_c = 0;
  local_4 = 0;
  local_10 = 0;
  iVar1 = sscanf(param_1,"%02u:%02u:%02u.%02u",&local_4,&local_c,&local_8,&local_10);
  if (iVar1 < 3) {
    iVar1 = sscanf(param_1,"%02u.%02u.%02u.%02u",&local_4,&local_c,&local_8,&local_10);
    if (iVar1 < 4) {
      local_4 = 0;
      local_10 = 0;
      iVar1 = sscanf(param_1,"%02u:%02u.%02u",&local_c,&local_8,&local_10);
      if (iVar1 < 2) {
        iVar1 = sscanf(param_1,"%02u.%02u.%02u",&local_c,&local_8,&local_10);
        if (iVar1 < 3) {
          local_c = 0;
          local_10 = 0;
          iVar1 = sscanf(param_1,"%02u.%02u",&local_8,&local_10);
          if (iVar1 < 1) {
            return -1;
          }
        }
      }
    }
  }
  iVar1 = lstrlenA(param_1);
  lpszCurrent = CharPrevA(param_1,param_1 + iVar1 + -1);
  if (lpszCurrent != param_1) {
    do {
      uVar2 = uVar2 + 1;
      if (*lpszCurrent == '.') break;
      lpszCurrent = CharPrevA(param_1,lpszCurrent);
    } while (lpszCurrent != param_1);
    if (1 < uVar2) {
      return (local_10 + (local_8 + (local_c + local_4 * 0x3c) * 0x3c) * 100) * 10;
    }
  }
  return (local_10 + (local_8 + (local_c + local_4 * 0x3c) * 0x3c) * 10) * 100;
}


