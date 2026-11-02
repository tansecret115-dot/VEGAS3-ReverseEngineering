/* Module: Setup.exe
   Function: _SfGetMetricMultiStringEx@24
   Address: 004210a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetMetricMultiStringEx_24
              (int param_1,uint param_2,LPBYTE param_3,uint param_4,LPCSTR param_5,int param_6)

{
  LPBYTE lpString1;
  uint iMaxLength;
  HKEY hKey;
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  LPBYTE pBVar4;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x210a0  158  _SfGetMetricMultiStringEx@24 */
  hKey = (HKEY)FUN_004209e0(param_1,param_2,7,local_20);
  iMaxLength = param_4;
  lpString1 = param_3;
  if (hKey == (HKEY)0x0) {
    pBVar4 = param_3;
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pBVar4[0] = '\0';
      pBVar4[1] = '\0';
      pBVar4[2] = '\0';
      pBVar4[3] = '\0';
      pBVar4 = pBVar4 + 4;
    }
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pBVar4 = '\0';
      pBVar4 = pBVar4 + 1;
    }
    param_2 = 0;
  }
  else {
    param_2 = param_4;
    local_24 = 7;
    LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_2);
    if ((LVar1 != 0) || (local_24 != 7)) {
      param_2 = 0;
    }
    FUN_00420a80();
  }
  if (param_2 < iMaxLength) {
    pBVar4 = lpString1 + param_2;
    for (uVar3 = iMaxLength - param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pBVar4[0] = '\0';
      pBVar4[1] = '\0';
      pBVar4[2] = '\0';
      pBVar4[3] = '\0';
      pBVar4 = pBVar4 + 4;
    }
    for (uVar3 = iMaxLength - param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pBVar4 = '\0';
      pBVar4 = pBVar4 + 1;
    }
  }
  if (1 < param_2) {
    return param_2 - 1;
  }
  if (((param_2 == 0) || (param_6 == 0)) && (param_5 != (LPCSTR)0x0)) {
    lstrcpynA((LPSTR)lpString1,param_5,iMaxLength);
    lpString1[iMaxLength - 1] = '\0';
    iVar2 = lstrlenA((LPCSTR)lpString1);
    return iVar2;
  }
  return 0;
}


