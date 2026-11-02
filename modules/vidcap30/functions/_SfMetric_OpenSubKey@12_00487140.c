/* Module: vidcap30.exe
   Function: _SfMetric_OpenSubKey@12
   Address: 00487140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_OpenSubKey_12(undefined4 param_1,int param_2,undefined4 param_3)

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
  
                    /* 0x87140  549  _SfMetric_OpenSubKey@12 */
  if (param_2 == 0) {
    return 0x80004005;
  }
  lpsz = "Software\\Sonic Foundry\\%s\\%d.%d\\Metrics";
  cVar1 = s_Software_Sonic_Foundry__s__d__d__00594af4[0];
  while ((cVar1 != '\0' && (cVar1 != '%'))) {
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  }
  pCVar9 = local_104;
  pCVar4 = lpsz + param_2 + -0x5949ec;
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
    iVar5 = _SfTextToDWordToken_8(local_208,0);
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
    uVar6 = _SfTextToDWordToken_8(local_208,0);
    uVar7 = _SfMetric_Open_16(param_1,local_104,(uVar6 | iVar5 << 8) << 0x10,param_3);
    return uVar7;
  }
  return 0x80004005;
}


