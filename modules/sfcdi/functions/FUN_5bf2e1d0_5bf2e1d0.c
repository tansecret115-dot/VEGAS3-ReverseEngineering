/* Module: sfcdi.dll
   Function: FUN_5bf2e1d0
   Address: 5bf2e1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf2e1d0(LPCSTR param_1,LPCSTR param_2,int *param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPCSTR pCVar9;
  int *_Src;
  
  pCVar9 = param_2;
  for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pCVar9[0] = '\0';
    pCVar9[1] = '\0';
    pCVar9[2] = '\0';
    pCVar9[3] = '\0';
    pCVar9 = pCVar9 + 4;
  }
  for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pCVar9 = '\0';
    pCVar9 = pCVar9 + 1;
  }
  iVar3 = lstrlenA(param_1);
  iVar4 = 0;
  piVar6 = param_3;
  if (0 < (int)param_4) {
    do {
      *piVar6 = iVar4;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < (int)param_4);
  }
  lstrcpynA(param_2,param_1,param_4);
  iVar4 = iVar3 + 1;
  param_2[param_4 - 1] = '\0';
  bVar2 = false;
  if (iVar4 != 0) {
    iVar7 = 1 - iVar4;
    piVar6 = param_3 + iVar3 + 2;
    do {
      iVar8 = iVar4 + -1;
      iVar7 = iVar7 + 1;
      _Src = piVar6 + -1;
      iVar3 = _ismbcdigit((int)param_2[iVar4 + -1]);
      if (iVar3 != 0) {
        param_3[iVar8] = iVar8;
        break;
      }
      iVar3 = _ismbcdigit((int)param_2[iVar8]);
      if (((iVar3 == 0) && (param_2[iVar8] != ' ')) && (param_2[iVar8] != '\0')) {
        iVar3 = lstrlenA(param_2);
        memmove(param_2 + iVar4 + 2,param_2 + iVar4 + 2 + -2,iVar3 + iVar7);
        memmove(piVar6 + 1,_Src,(iVar3 + iVar7) * 4);
        param_2[iVar8] = ' ';
        param_2[iVar4] = '0';
        param_2[iVar4 + 1] = ' ';
        piVar6[-2] = iVar8;
        *_Src = iVar8;
        *piVar6 = iVar4;
        bVar2 = true;
      }
      else if ((param_2[iVar8] == ' ') && (!bVar2)) {
        piVar6[-2] = iVar8;
        param_2[iVar8] = '\0';
      }
      iVar4 = iVar8;
      piVar6 = _Src;
    } while (iVar8 != 0);
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    iVar3 = _ismbcdigit((int)*param_2);
    if (iVar3 == 0) {
      *param_2 = ' ';
    }
    param_2 = CharNextA(param_2);
    cVar1 = *param_2;
  }
  return;
}


