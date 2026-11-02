/* Module: mp3plug.dll
   Function: FUN_5f698970
   Address: 5f698970
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_5f698970(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  HGLOBAL hMem;
  LPWSTR lpWideCharStr;
  uint uVar3;
  LPCSTR pCVar4;
  
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    return param_1;
  }
  uVar3 = 0xffffffff;
  pCVar4 = pcVar2 + 1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  hMem = GlobalAlloc(0x42,uVar3 * 2);
  lpWideCharStr = GlobalLock(hMem);
  *param_2 = lpWideCharStr;
  if (lpWideCharStr != (LPWSTR)0x0) {
    MultiByteToWideChar(0,1,pcVar2 + 1,-1,lpWideCharStr,uVar3);
    lpWideCharStr[uVar3 - 1] = L'\0';
    return (char *)0x0;
  }
  return (char *)0x8007000e;
}


