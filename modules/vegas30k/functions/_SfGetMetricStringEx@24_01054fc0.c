/* Module: vegas30k.dll
   Function: _SfGetMetricStringEx@24
   Address: 01054fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfGetMetricStringEx_24
              (undefined4 param_1,DWORD param_2,LPBYTE param_3,uint param_4,LPCSTR param_5,
              int param_6)

{
  DWORD DVar1;
  LPBYTE lpString1;
  uint iMaxLength;
  HKEY hKey;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  LPBYTE pBVar5;
  DWORD local_24;
  CHAR local_20 [32];
  
                    /* 0x54fc0  963  _SfGetMetricStringEx@24 */
  DVar1 = param_2;
  hKey = (HKEY)FUN_01054aa0(param_1,param_2,1,local_20);
  iMaxLength = param_4;
  lpString1 = param_3;
  if (hKey == (HKEY)0x0) {
    pBVar5 = param_3;
    for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pBVar5[0] = '\0';
      pBVar5[1] = '\0';
      pBVar5[2] = '\0';
      pBVar5[3] = '\0';
      pBVar5 = pBVar5 + 4;
    }
    for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar5 = '\0';
      pBVar5 = pBVar5 + 1;
    }
    param_2 = 0;
  }
  else {
    param_2 = param_4;
    local_24 = 1;
    LVar2 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_2);
    if ((LVar2 != 0) || (local_24 != 1)) {
      param_2 = 0;
    }
    FUN_01054b40(param_1,DVar1,1,hKey);
  }
  if (param_2 < iMaxLength) {
    pBVar5 = lpString1 + param_2;
    for (uVar4 = iMaxLength - param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pBVar5[0] = '\0';
      pBVar5[1] = '\0';
      pBVar5[2] = '\0';
      pBVar5[3] = '\0';
      pBVar5 = pBVar5 + 4;
    }
    for (uVar4 = iMaxLength - param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar5 = '\0';
      pBVar5 = pBVar5 + 1;
    }
  }
  if (1 < param_2) {
    return param_2 - 1;
  }
  if (((param_2 == 0) || (param_6 == 0)) && (param_5 != (LPCSTR)0x0)) {
    lstrcpynA((LPSTR)lpString1,param_5,iMaxLength);
    lpString1[iMaxLength - 1] = '\0';
    iVar3 = lstrlenA((LPCSTR)lpString1);
    return iVar3;
  }
  return 0;
}


