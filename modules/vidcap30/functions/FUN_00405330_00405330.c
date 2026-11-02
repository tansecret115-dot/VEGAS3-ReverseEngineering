/* Module: vidcap30.exe
   Function: FUN_00405330
   Address: 00405330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405330(undefined4 param_1,HGLOBAL param_2)

{
  char cVar1;
  WCHAR WVar2;
  int *piVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  LPCWSTR lpWideCharStr;
  char *pcVar7;
  char *pcVar8;
  CHAR local_104 [259];
  undefined1 local_1;
  
  iVar6 = 1;
  piVar3 = GlobalLock(param_2);
  if (piVar3 == (int *)0x0) {
    return -0x7fff0001;
  }
  if (piVar3[4] == 0) {
    pcVar7 = (char *)(*piVar3 + (int)piVar3);
    cVar1 = *pcVar7;
    while ((cVar1 != '\0' && (iVar6 = FUN_00417770(param_1,pcVar7,0,0xffffffff,0), -1 < iVar6))) {
      uVar5 = 0xffffffff;
      pcVar8 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      cVar1 = pcVar7[~uVar5];
      pcVar7 = pcVar7 + ~uVar5;
    }
  }
  else {
    lpWideCharStr = (LPCWSTR)(*piVar3 + (int)piVar3);
    WVar2 = *lpWideCharStr;
    while (WVar2 != L'\0') {
      if ((lpWideCharStr == (LPCWSTR)0x0) || (WVar2 != L'\0')) {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x104) {
        local_104[0] = '\0';
      }
      local_1 = 0;
      iVar6 = FUN_00417770(param_1,local_104,0,0xffffffff,0);
      if (iVar6 < 0) break;
      sVar4 = wcslen(lpWideCharStr);
      lpWideCharStr = lpWideCharStr + sVar4 + 1;
      WVar2 = *lpWideCharStr;
    }
  }
  GlobalUnlock(param_2);
  return iVar6;
}


