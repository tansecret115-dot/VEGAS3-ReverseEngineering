/* Module: vidcap30.exe
   Function: FUN_004fa580
   Address: 004fa580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fa580(int param_1,LPCSTR param_2)

{
  char *pcVar1;
  CHAR CVar2;
  char cVar3;
  LPCSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  LPCSTR pCVar7;
  uint uVar8;
  LPCSTR pCVar9;
  char *pcVar10;
  CHAR *pCVar11;
  undefined4 *puVar12;
  int local_434;
  undefined4 local_430 [5];
  undefined4 *local_41c;
  char *local_418;
  CHAR local_410 [258];
  CHAR aCStack_30e [2];
  undefined4 local_30c [130];
  char local_104 [260];
  
  local_434 = 0;
  if ((param_2 == (LPCSTR)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  if (*param_2 == '\\') {
    if ((param_2[1] == '\\') && (pCVar7 = param_2 + 2, param_2[2] != '\0')) {
      pCVar4 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108a);
      lstrcpynA(local_410,pCVar4,0x104);
      aCStack_30e[1] = 0;
      iVar5 = lstrlenA(local_410);
      pCVar11 = local_410 + iVar5;
      uVar6 = _SfGetString2_8(DAT_005c16d8,0x108b);
      FUN_00524500("{208D2C60-3AEA-1069-A2D7-08002B30309D}",uVar6,pCVar11);
      wsprintfA((LPSTR)local_30c,"%s\\%s",local_410,pCVar7);
      local_434 = FUN_004f8100(param_1,local_30c,0,0);
      if (local_434 == 0) {
        CVar2 = *pCVar7;
        pCVar4 = pCVar7;
        while ((CVar2 != '\0' && (CVar2 != '\\'))) {
          pCVar4 = CharNextA(pCVar4);
          CVar2 = *pCVar4;
        }
        pCVar4 = pCVar4 + (-2 - (int)param_2);
        pCVar9 = pCVar7;
        pCVar11 = (CHAR *)local_30c;
        for (uVar8 = (uint)pCVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pCVar11 = *(undefined4 *)pCVar9;
          pCVar9 = pCVar9 + 4;
          pCVar11 = pCVar11 + 4;
        }
        for (uVar8 = (uint)pCVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pCVar11 = *pCVar9;
          pCVar9 = pCVar9 + 1;
          pCVar11 = pCVar11 + 1;
        }
        aCStack_30e[(int)(pCVar4 + 2)] = '\0';
        puVar12 = local_430;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_41c = local_30c;
        local_418 = local_104;
        local_430[0] = 0x405;
        (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_430);
        if (local_104[0] != '\0') {
          wsprintfA((LPSTR)local_30c,"%s\\Entire Network\\%s\\%s",local_410,local_104,pCVar7);
          iVar5 = FUN_004f8100(param_1,local_30c,0,0);
          return iVar5;
        }
      }
    }
  }
  else {
    iVar5 = lstrcmpA("..",param_2);
    if (iVar5 == 0) {
      pcVar1 = (char *)(param_1 + 0x250);
      cVar3 = *pcVar1;
      pCVar7 = pcVar1;
      pcVar10 = pcVar1;
      while (cVar3 != '\0') {
        if (cVar3 == '\\') {
          pcVar10 = pCVar7;
        }
        pCVar7 = CharNextA(pCVar7);
        cVar3 = *pCVar7;
      }
      if (*pcVar10 == '\\') {
        *pcVar10 = '\0';
        iVar5 = FUN_004f8100(param_1,pcVar1,0,0);
        return iVar5;
      }
      FUN_004f93e0(param_1);
      return 0;
    }
    cVar3 = *param_2;
    pCVar7 = param_2;
    pcVar1 = param_2;
    while (pCVar4 = pCVar7, cVar3 != '\0') {
      pCVar7 = CharNextA(pCVar4);
      cVar3 = *pCVar7;
      pcVar1 = pCVar4;
    }
    if (*pcVar1 == '\\') {
      *pcVar1 = '\0';
    }
    if (param_2[1] == ':') {
      pCVar7 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108a);
      lstrcpynA(local_410,pCVar7,0x104);
      aCStack_30e[1] = 0;
      iVar5 = lstrlenA(local_410);
      pCVar11 = local_410 + iVar5;
      uVar6 = _SfGetString2_8(DAT_005c16d8,0x108c);
      FUN_00524500("{20D04FE0-3AEA-1069-A2D8-08002B30309D}",uVar6,pCVar11);
      wsprintfA((LPSTR)local_30c,"%s\\%s",local_410,param_2);
      iVar5 = lstrcmpiA((LPCSTR)local_30c,(LPCSTR)(param_1 + 0x250));
      if (iVar5 == 0) {
        FUN_004f93e0(param_1);
        return 0;
      }
    }
    else {
      wsprintfA((LPSTR)local_30c,"%s\\%s",param_1 + 0x250,param_2);
    }
    local_434 = FUN_004f8100(param_1,local_30c,0,0);
  }
  return local_434;
}


