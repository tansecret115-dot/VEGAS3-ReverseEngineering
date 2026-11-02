/* Module: sfpublish.dll
   Function: FUN_00422970
   Address: 00422970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00422970(HKEY param_1,LPBYTE param_2,uint param_3)

{
  char cVar1;
  LPCSTR lpSubKey;
  LSTATUS LVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  BYTE *pBVar7;
  LPBYTE lpData;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  
  iVar6 = -0x7ff8ffa9;
  lpSubKey = FUN_00416730((LPCSTR)param_1);
  uVar5 = param_3;
  lpData = param_2;
  if (lpSubKey != (LPCSTR)0x0) {
    if (*lpSubKey != '\0') {
      param_1 = (HKEY)0x0;
      LVar2 = RegOpenKeyExA((HKEY)0x80000000,lpSubKey,0,0x20019,&param_1);
      if (LVar2 == 0) {
        param_2 = (LPBYTE)0x0;
        param_3 = uVar5;
        LVar2 = RegQueryValueExA(param_1,"Content Type",(LPDWORD)0x0,(LPDWORD)&param_2,lpData,
                                 &param_3);
        if (LVar2 == 0) {
          iVar6 = 0;
        }
        RegCloseKey(param_1);
        if (-1 < iVar6) {
          return iVar6;
        }
      }
    }
    uVar4 = 0xffffffff;
    pcVar10 = "application/octet-stream";
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (uVar5 <= ~uVar4 - 1) {
      return -0x7ffb1fc4;
    }
    uVar5 = 0xffffffff;
    pcVar10 = "application/octet-stream";
    do {
      pcVar8 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = "Using generic application/octet-stream for content-type on request";
    uVar9 = 0xa86;
    pBVar7 = (BYTE *)(pcVar8 + -uVar5);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)lpData = *(undefined4 *)pBVar7;
      pBVar7 = pBVar7 + 4;
      lpData = lpData + 4;
    }
    pcVar8 = "sfinternet.cpp";
    uVar4 = 4;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *lpData = *pBVar7;
      pBVar7 = pBVar7 + 1;
      lpData = lpData + 1;
    }
    iVar6 = 0;
    puVar3 = FUN_004012b0();
    FUN_00415b60((int)puVar3,uVar4,pcVar8,uVar9,pcVar10);
  }
  return iVar6;
}


