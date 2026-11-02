/* Module: vegas30.exe
   Function: FUN_005e3da0
   Address: 005e3da0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_005e3da0(LPCSTR param_1,int param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  LPWSTR pWVar5;
  
  iVar1 = lstrlenA(param_1);
  uVar4 = iVar1 + 1;
  uVar3 = uVar4 * 2;
  if (param_2 == 0) {
    uVar3 = uVar4;
  }
  lpWideCharStr = calloc(1,uVar3);
  pWVar5 = lpWideCharStr;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pWVar5[0] = L'\0';
    pWVar5[1] = L'\0';
    pWVar5 = pWVar5 + 2;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (LPWSTR)((int)pWVar5 + 1);
  }
  if (param_2 != 0) {
    MultiByteToWideChar(0,1,param_1,-1,lpWideCharStr,uVar4);
    lpWideCharStr[iVar1] = L'\0';
    return lpWideCharStr;
  }
  pWVar5 = lpWideCharStr;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pWVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pWVar5 = pWVar5 + 2;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(CHAR *)pWVar5 = *param_1;
    param_1 = param_1 + 1;
    pWVar5 = (LPWSTR)((int)pWVar5 + 1);
  }
  return lpWideCharStr;
}


