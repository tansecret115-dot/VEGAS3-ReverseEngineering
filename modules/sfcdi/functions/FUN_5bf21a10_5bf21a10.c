/* Module: sfcdi.dll
   Function: FUN_5bf21a10
   Address: 5bf21a10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf21a10(int param_1,uint param_2,LPBYTE param_3,uint param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  uint uVar3;
  LPBYTE pBVar4;
  DWORD local_24;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_5bf21720(param_1,param_2,3,local_20);
  uVar2 = param_4;
  pBVar4 = param_3;
  if (hKey != (HKEY)0x0) {
    param_2 = param_4;
    local_24 = 3;
    LVar1 = RegQueryValueExA(hKey,local_20,(LPDWORD)0x0,&local_24,param_3,&param_2);
    if ((LVar1 != 0) || (local_24 != 3)) {
      param_2 = 0;
    }
    if (param_2 < uVar2) {
      uVar2 = uVar2 - param_2;
      pBVar4 = pBVar4 + param_2;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        pBVar4[0] = '\0';
        pBVar4[1] = '\0';
        pBVar4[2] = '\0';
        pBVar4[3] = '\0';
        pBVar4 = pBVar4 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pBVar4 = '\0';
        pBVar4 = pBVar4 + 1;
      }
    }
    FUN_5bf217c0();
    return param_2;
  }
  for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_3[0] = '\0';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
    param_3 = param_3 + 4;
  }
  for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_3 = '\0';
    param_3 = param_3 + 1;
  }
  return 0;
}


