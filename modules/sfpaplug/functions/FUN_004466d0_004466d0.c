/* Module: sfpaplug.dll
   Function: FUN_004466d0
   Address: 004466d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004466d0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  CHAR CVar2;
  char *lpsz;
  LPSTR pCVar3;
  LPCSTR pCVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  LPCSTR pCVar8;
  CHAR *pCVar9;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  if (param_2 == 0) {
    return 0x80004005;
  }
  lpsz = "Software\\Sonic Foundry\\%s\\%d.%d\\Metrics";
  cVar1 = s_Software_Sonic_Foundry__s__d__d__0045527c[0];
  while ((cVar1 != '\0' && (cVar1 != '%'))) {
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  }
  pCVar9 = local_104;
  pCVar4 = lpsz + param_2 + -0x455174;
  CVar2 = *pCVar4;
  while ((CVar2 != '\0' && (CVar2 != '\\'))) {
    pCVar3 = CharNextA(pCVar4);
    for (pCVar8 = pCVar4; pCVar8 != pCVar3; pCVar8 = pCVar8 + 1) {
      *pCVar9 = *pCVar8;
      pCVar9 = pCVar9 + 1;
    }
    pCVar4 = CharNextA(pCVar4);
    CVar2 = *pCVar4;
  }
  *pCVar9 = '\0';
  if (*pCVar4 != '\0') {
    pCVar4 = CharNextA(pCVar4);
    pCVar9 = local_208;
    cVar1 = *pCVar4;
    while ((cVar1 != '\0' && (cVar1 != '.'))) {
      pCVar3 = CharNextA(pCVar4);
      for (pCVar8 = pCVar4; pCVar8 != pCVar3; pCVar8 = pCVar8 + 1) {
        *pCVar9 = *pCVar8;
        pCVar9 = pCVar9 + 1;
      }
      pCVar4 = CharNextA(pCVar4);
      cVar1 = *pCVar4;
    }
    *pCVar9 = '\0';
    iVar5 = FUN_0043e0a0(local_208,0);
    pCVar4 = CharNextA(pCVar4);
    pCVar9 = local_208;
    cVar1 = *pCVar4;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      pCVar3 = CharNextA(pCVar4);
      for (pCVar8 = pCVar4; pCVar8 != pCVar3; pCVar8 = pCVar8 + 1) {
        *pCVar9 = *pCVar8;
        pCVar9 = pCVar9 + 1;
      }
      pCVar4 = CharNextA(pCVar4);
      cVar1 = *pCVar4;
    }
    *pCVar9 = '\0';
    uVar6 = FUN_0043e0a0(local_208,0);
    uVar7 = FUN_004465a0(param_1,local_104,(uVar6 | iVar5 << 8) << 0x10,param_3);
    return uVar7;
  }
  return 0x80004005;
}


