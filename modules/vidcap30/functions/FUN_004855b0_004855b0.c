/* Module: vidcap30.exe
   Function: FUN_004855b0
   Address: 004855b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004855b0(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPSTR pCVar8;
  
  uVar3 = lstrlenA(param_1);
  pCVar8 = param_2;
  for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    pCVar8[0] = '\0';
    pCVar8[1] = '\0';
    pCVar8[2] = '\0';
    pCVar8[3] = '\0';
    pCVar8 = pCVar8 + 4;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pCVar8 = '\0';
    pCVar8 = pCVar8 + 1;
  }
  iVar6 = lstrlenA(param_1);
  lstrcpynA(param_2,param_1,iVar6 + 1);
  param_2[iVar6] = '\0';
  iVar6 = lstrlenA(param_1);
  bVar2 = false;
  iVar6 = iVar6 + 1;
  while (iVar6 != 0) {
    iVar4 = lstrlenA(param_2);
    iVar7 = iVar6 + -1;
    iVar5 = _ismbcdigit((int)param_2[iVar6 + -1]);
    if (iVar5 != 0) break;
    iVar5 = _ismbcdigit((int)param_2[iVar7]);
    if (((iVar5 == 0) && (param_2[iVar7] != ' ')) && (param_2[iVar7] != '\0')) {
      memmove(param_2 + iVar6 + 2,param_2 + iVar6,(iVar4 + 1) - iVar7);
      param_2[iVar7] = ' ';
      param_2[iVar6] = '0';
      param_2[iVar6 + 1] = ' ';
      bVar2 = true;
      iVar6 = iVar7;
    }
    else {
      iVar6 = iVar7;
      if ((param_2[iVar7] == ' ') && (!bVar2)) {
        param_2[iVar7] = '\0';
      }
    }
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    iVar6 = _ismbcdigit((int)*param_2);
    if (iVar6 == 0) {
      *param_2 = ' ';
    }
    param_2 = CharNextA(param_2);
    cVar1 = *param_2;
  }
  return;
}


