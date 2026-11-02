/* Module: vegas30.exe
   Function: FUN_005f06b0
   Address: 005f06b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f06b0(int param_1,int *param_2)

{
  char cVar1;
  CHAR CVar2;
  LPCSTR pCVar3;
  int iVar4;
  int *piVar5;
  LPCSTR pCVar6;
  longlong lVar7;
  int local_10;
  undefined **local_c;
  
  piVar5 = param_2;
  for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar4 = FUN_005f03a0(param_1);
  if (iVar4 == 0) {
    return 0x80070057;
  }
  iVar4 = lstrlenA("META:\\");
  pCVar6 = (LPCSTR)(iVar4 + param_1);
  cVar1 = *(char *)(iVar4 + param_1);
  pCVar3 = pCVar6;
  while ((cVar1 != '\0' && (cVar1 != '\\'))) {
    pCVar3 = CharNextA(pCVar3);
    cVar1 = *pCVar3;
  }
  if (*pCVar3 != '\0') {
    local_10 = 0;
    *param_2 = 0;
    local_c = &PTR_s_Video_Generator_00646dec;
    do {
      FUN_0060ac30();
      FUN_0060ac30();
      lstrcpynA(&stack0xffffffe0,*local_c,(int)(pCVar3 + (1 - (int)pCVar6)));
      pCVar3[(int)(&stack0xffffffe0 + -(int)pCVar6)] = '\0';
      pCVar3[(int)(&stack0xffffffe0 + -(int)pCVar6)] = '\0';
      FUN_005f3290(&stack0xffffffe0,pCVar6,pCVar3 + (1 - (int)pCVar6));
      pCVar3[(int)(&stack0xffffffe0 + -(int)pCVar6)] = '\0';
      iVar4 = lstrcmpA(&stack0xffffffe0,&stack0xffffffe0);
      if (iVar4 == 0) {
        *param_2 = (&DAT_00646de8)[local_10 * 2];
        break;
      }
      local_c = local_c + 2;
      local_10 = local_10 + 1;
    } while ((int)local_c < 0x646dfc);
    if (*param_2 == 1) {
      pCVar6 = pCVar3 + 1;
      CVar2 = pCVar3[1];
      pCVar3 = pCVar6;
      while ((CVar2 != '\0' && (CVar2 != '}'))) {
        pCVar3 = CharNextA(pCVar3);
        CVar2 = *pCVar3;
      }
      lstrcpynA((LPSTR)(param_2 + 1),pCVar6,(int)(pCVar3 + (2 - (int)pCVar6)));
      *(CHAR *)((int)param_2 + (int)(pCVar3 + (2 - (int)pCVar6) + 3)) = '\0';
      CVar2 = *pCVar3;
      while ((CVar2 != '\0' && (CVar2 != '('))) {
        pCVar3 = CharNextA(pCVar3);
        CVar2 = *pCVar3;
      }
      lVar7 = _atoi64(pCVar3 + 1);
      *(longlong *)(param_2 + 0x42) = lVar7;
      param_2[0x44] = -1;
      CVar2 = *pCVar3;
      while ((CVar2 != '\0' && (CVar2 != '['))) {
        pCVar3 = CharNextA(pCVar3);
        CVar2 = *pCVar3;
      }
      if (*pCVar3 != '\0') {
        pCVar6 = pCVar3 + 1;
        iVar4 = _ismbcspace((int)pCVar3[1]);
        while (iVar4 != 0) {
          pCVar6 = CharNextA(pCVar6);
          iVar4 = _ismbcspace((int)*pCVar6);
        }
        iVar4 = _SfTextToLongToken_8(pCVar6,0);
        param_2[0x44] = iVar4;
      }
      return 0;
    }
    if (*param_2 == 2) {
      CVar2 = pCVar3[1];
      pCVar6 = pCVar3 + 1;
      while ((CVar2 != '\0' && (CVar2 != '}'))) {
        pCVar6 = CharNextA(pCVar6);
        CVar2 = *pCVar6;
      }
      iVar4 = (int)pCVar6 - (int)(pCVar3 + 1);
      lstrcpynA((LPSTR)(param_2 + 1),pCVar3 + 2,iVar4);
      *(undefined1 *)((int)param_2 + iVar4 + 3) = 0;
      CVar2 = *pCVar6;
      while ((CVar2 != '\0' && (CVar2 != '('))) {
        pCVar6 = CharNextA(pCVar6);
        CVar2 = *pCVar6;
      }
      lVar7 = _atoi64(pCVar6 + 1);
      *(longlong *)(param_2 + 0x42) = lVar7;
      CVar2 = *pCVar6;
      pCVar3 = pCVar6;
      while ((CVar2 != '\0' && (CVar2 != '['))) {
        pCVar3 = CharNextA(pCVar3);
        CVar2 = *pCVar3;
      }
      if (*pCVar3 != '\0') {
        pCVar6 = pCVar3 + 1;
        iVar4 = _ismbcspace((int)pCVar3[1]);
        while (iVar4 != 0) {
          pCVar6 = CharNextA(pCVar6);
          iVar4 = _ismbcspace((int)*pCVar6);
        }
        iVar4 = _SfTextToLongToken_8(pCVar6,0);
        param_2[0x44] = iVar4;
      }
      CVar2 = *pCVar6;
      while ((CVar2 != '\0' && (CVar2 != '['))) {
        pCVar6 = CharNextA(pCVar6);
        CVar2 = *pCVar6;
      }
      if (*pCVar6 != '\0') {
        pCVar3 = pCVar6 + 1;
        iVar4 = _ismbcspace((int)pCVar6[1]);
        while (iVar4 != 0) {
          pCVar3 = CharNextA(pCVar3);
          iVar4 = _ismbcspace((int)*pCVar3);
        }
        iVar4 = _SfTextToLongToken_8(pCVar3,0);
        param_2[0x45] = iVar4;
      }
      return 0;
    }
  }
  return 0x80070057;
}


