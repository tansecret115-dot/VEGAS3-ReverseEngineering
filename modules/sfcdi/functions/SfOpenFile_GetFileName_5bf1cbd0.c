/* Module: sfcdi.dll
   Function: SfOpenFile_GetFileName
   Address: 5bf1cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfOpenFile_GetFileName(char const *,unsigned int,unsigned int,char
   *,unsigned int) */

uint SfOpenFile_GetFileName(char *param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  LPSTR pCVar2;
  LPCSTR lpsz;
  LPSTR pCVar3;
  CHAR *pCVar4;
  uint uVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPSTR pCVar8;
  
                    /* 0x1cbd0  92  ?SfOpenFile_GetFileName@@YGIPBDIIPADI@Z */
  uVar5 = param_5 - 1;
  uVar6 = param_2 - 1;
  if (uVar5 < param_2 - 1) {
    uVar6 = uVar5;
  }
  pCVar2 = FUN_5bf1cb10(param_4,param_1,uVar6);
  if (uVar6 == uVar5) {
    *pCVar2 = '\0';
    return uVar6;
  }
  pCVar2 = CharPrevA(param_4,pCVar2);
  if (*pCVar2 == '\\') {
    pCVar2 = CharNextA(pCVar2);
  }
  else {
    pCVar7 = CharNextA(pCVar2);
    pCVar2 = pCVar7 + 1;
    *pCVar7 = '\\';
    *pCVar2 = '\0';
  }
  pCVar7 = (LPSTR)(uVar6 + 1);
  lpsz = (LPCSTR)FUN_5bf1cb40((int)param_1,param_2);
  uVar5 = 0;
  param_2 = 0;
  while( true ) {
    while( true ) {
      pCVar8 = pCVar2;
      if (uVar5 == param_3) {
        pCVar3 = CharNextA(lpsz);
        for (pCVar4 = lpsz; pCVar4 != pCVar3; pCVar4 = pCVar4 + 1) {
          *pCVar8 = *pCVar4;
          pCVar8 = pCVar8 + 1;
        }
        pCVar7 = pCVar8 + ((int)pCVar7 - (int)pCVar2);
        uVar5 = param_2;
        if (param_5 <= pCVar7) {
          *pCVar8 = '\0';
          return (int)pCVar8 - (int)param_4;
        }
      }
      pCVar2 = pCVar8;
      if (*lpsz == '\0') break;
      lpsz = CharNextA(lpsz);
    }
    if (uVar5 == param_3) break;
    pcVar1 = lpsz + 1;
    uVar5 = uVar5 + 1;
    lpsz = lpsz + 1;
    param_2 = uVar5;
    if (*pcVar1 == '\0') {
LAB_5bf1ccb4:
      if (uVar5 != param_3) {
        *param_4 = '\0';
      }
      uVar5 = lstrlenA(param_4);
      return uVar5;
    }
  }
  *pCVar8 = '\0';
  goto LAB_5bf1ccb4;
}


