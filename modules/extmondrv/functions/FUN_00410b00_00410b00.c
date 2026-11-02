/* Module: extmondrv.dll
   Function: FUN_00410b00
   Address: 00410b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410b00(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  CHAR CVar2;
  LPCSTR pCVar3;
  LPSTR pCVar4;
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
  pCVar3 = "Software\\Sonic Foundry\\%s\\%d.%d\\Metrics";
  cVar1 = s__Software_Sonic_Foundry__s__d__d_0044e98b[1];
  while ((cVar1 != '\0' && (cVar1 != '%'))) {
    pCVar3 = CharNextA(pCVar3);
    cVar1 = *pCVar3;
  }
  pCVar9 = local_104;
  pCVar3 = pCVar3 + param_2 + -0x44e884;
  CVar2 = *pCVar3;
  while ((CVar2 != '\0' && (CVar2 != '\\'))) {
    pCVar4 = CharNextA(pCVar3);
    for (pCVar8 = pCVar3; pCVar8 != pCVar4; pCVar8 = pCVar8 + 1) {
      *pCVar9 = *pCVar8;
      pCVar9 = pCVar9 + 1;
    }
    pCVar3 = CharNextA(pCVar3);
    CVar2 = *pCVar3;
  }
  *pCVar9 = '\0';
  if (*pCVar3 != '\0') {
    pCVar3 = CharNextA(pCVar3);
    pCVar9 = local_208;
    cVar1 = *pCVar3;
    while ((cVar1 != '\0' && (cVar1 != '.'))) {
      pCVar4 = CharNextA(pCVar3);
      for (pCVar8 = pCVar3; pCVar8 != pCVar4; pCVar8 = pCVar8 + 1) {
        *pCVar9 = *pCVar8;
        pCVar9 = pCVar9 + 1;
      }
      pCVar3 = CharNextA(pCVar3);
      cVar1 = *pCVar3;
    }
    *pCVar9 = '\0';
    iVar5 = FUN_0041e9c0(local_208,0);
    pCVar3 = CharNextA(pCVar3);
    pCVar9 = local_208;
    cVar1 = *pCVar3;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      pCVar4 = CharNextA(pCVar3);
      for (pCVar8 = pCVar3; pCVar8 != pCVar4; pCVar8 = pCVar8 + 1) {
        *pCVar9 = *pCVar8;
        pCVar9 = pCVar9 + 1;
      }
      pCVar3 = CharNextA(pCVar3);
      cVar1 = *pCVar3;
    }
    *pCVar9 = '\0';
    uVar6 = FUN_0041e9c0(local_208,0);
    uVar7 = FUN_004109d0(param_1,local_104,(uVar6 | iVar5 << 8) << 0x10,param_3);
    return uVar7;
  }
  return 0x80004005;
}


