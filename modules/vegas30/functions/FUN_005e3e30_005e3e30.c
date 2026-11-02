/* Module: vegas30.exe
   Function: FUN_005e3e30
   Address: 005e3e30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_005e3e30(LPCWSTR param_1,int param_2)

{
  WCHAR WVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  uint uVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  LPSTR pCVar6;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
    pWVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      WVar1 = *pWVar5;
      pWVar5 = (LPCWSTR)((int)pWVar5 + 1);
    } while ((char)WVar1 != '\0');
    iVar2 = ~uVar3 - 1;
  }
  else {
    iVar2 = lstrlenW(param_1);
  }
  uVar4 = iVar2 + 1;
  lpMultiByteStr = calloc(1,uVar4);
  pCVar6 = lpMultiByteStr;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pCVar6[0] = '\0';
    pCVar6[1] = '\0';
    pCVar6[2] = '\0';
    pCVar6[3] = '\0';
    pCVar6 = pCVar6 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  if (param_2 != 0) {
    if ((param_1 == (LPCWSTR)0x0) || (*param_1 != L'\0')) {
      WideCharToMultiByte(0,0,param_1,-1,lpMultiByteStr,uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (lpMultiByteStr != (LPSTR)0x0) {
      *lpMultiByteStr = '\0';
      lpMultiByteStr[iVar2] = '\0';
      return lpMultiByteStr;
    }
    lpMultiByteStr[iVar2] = '\0';
    return lpMultiByteStr;
  }
  pCVar6 = lpMultiByteStr;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar6 = (CHAR)*param_1;
    param_1 = (LPCWSTR)((int)param_1 + 1);
    pCVar6 = pCVar6 + 1;
  }
  return lpMultiByteStr;
}


