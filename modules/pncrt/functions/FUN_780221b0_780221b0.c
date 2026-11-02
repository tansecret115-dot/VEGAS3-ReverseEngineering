/* Module: pncrt.dll
   Function: FUN_780221b0
   Address: 780221b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_780221b0(LPCSTR param_1)

{
  char cVar1;
  uchar *puVar2;
  int iVar3;
  wchar_t *lpWideCharStr;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  uchar *puVar9;
  
  uVar4 = 0xffffffff;
  pCVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar7;
    pCVar7 = pCVar7 + 1;
  } while (cVar1 != '\0');
  puVar2 = malloc(~uVar4);
  if (puVar2 == (uchar *)0x0) {
    return 0xffffffff;
  }
  uVar4 = 0xffffffff;
  pCVar7 = param_1;
  do {
    pcVar8 = pCVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (uchar *)(pcVar8 + -uVar4);
  puVar9 = puVar2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
    puVar6 = puVar6 + 4;
    puVar9 = puVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar3 = FUN_78016860(puVar2,1);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  if (_wenviron != 0) {
    iVar3 = MultiByteToWideChar(1,0,param_1,-1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    lpWideCharStr = malloc(iVar3 * 2);
    if (lpWideCharStr == (wchar_t *)0x0) {
      return 0xffffffff;
    }
    iVar3 = MultiByteToWideChar(1,0,param_1,-1,lpWideCharStr,iVar3);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_7800e170(lpWideCharStr,0);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}


