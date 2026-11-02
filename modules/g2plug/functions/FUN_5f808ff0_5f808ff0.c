/* Module: g2plug.dll
   Function: FUN_5f808ff0
   Address: 5f808ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f808ff0(int param_1,int param_2,undefined4 *param_3)

{
  uchar uVar1;
  CHAR CVar2;
  uchar *puVar3;
  LPCSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CHAR local_118 [8];
  double local_110;
  double local_108;
  uchar local_100 [256];
  
  uVar6 = *(undefined4 *)(param_1 + 0x3fb);
  iVar7 = 0;
  param_3[3] = *(undefined4 *)(param_1 + 0x3ff);
  puVar3 = (uchar *)(param_2 + 0x227);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = uVar6;
  if (*puVar3 != '\0') {
    local_110 = (double)*(int *)(param_1 + 0x3fb) / (double)*(int *)(param_1 + 0x403);
    local_108 = (double)*(int *)(param_1 + 0x3ff) / (double)*(int *)(param_1 + 0x407);
    uVar1 = *puVar3;
    while ((uVar1 != '\0' && (uVar1 != '('))) {
      puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
      uVar1 = *puVar3;
    }
    if (*puVar3 != '\0') {
      _mbscpy(local_100,puVar3);
      puVar3 = local_100;
      while ((local_100[0] != '\0' && (local_100[0] != ' '))) {
        puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
        local_100[0] = *puVar3;
      }
      if (*puVar3 != '\0') {
        *puVar3 = '\0';
      }
      pCVar4 = CharNextA((LPCSTR)local_100);
      local_118[0] = '\0';
      iVar5 = _ismbcdigit((int)*pCVar4);
      while (iVar5 != 0) {
        local_118[iVar7] = *pCVar4;
        pCVar4 = CharNextA(pCVar4);
        iVar7 = iVar7 + 1;
        iVar5 = _ismbcdigit((int)*pCVar4);
      }
      local_118[iVar7] = '\0';
      uVar6 = FUN_5f81a1f0(local_118,0);
      *param_3 = uVar6;
      uVar6 = ftol();
      *param_3 = uVar6;
      CVar2 = *pCVar4;
      while ((CVar2 != '\0' && (CVar2 != ','))) {
        pCVar4 = CharNextA(pCVar4);
        CVar2 = *pCVar4;
      }
      pCVar4 = CharNextA(pCVar4);
      iVar7 = _ismbcspace((int)*pCVar4);
      while (iVar7 != 0) {
        pCVar4 = CharNextA(pCVar4);
        iVar7 = _ismbcspace((int)*pCVar4);
      }
      local_118[0] = '\0';
      iVar7 = 0;
      iVar5 = _ismbcdigit((int)*pCVar4);
      while (iVar5 != 0) {
        local_118[iVar7] = *pCVar4;
        pCVar4 = CharNextA(pCVar4);
        iVar7 = iVar7 + 1;
        iVar5 = _ismbcdigit((int)*pCVar4);
      }
      local_118[iVar7] = '\0';
      uVar6 = FUN_5f81a1f0(local_118,0);
      param_3[1] = uVar6;
      uVar6 = ftol();
      param_3[1] = uVar6;
      CVar2 = *pCVar4;
      while ((CVar2 != '\0' && (CVar2 != ','))) {
        pCVar4 = CharNextA(pCVar4);
        CVar2 = *pCVar4;
      }
      pCVar4 = CharNextA(pCVar4);
      iVar7 = _ismbcspace((int)*pCVar4);
      while (iVar7 != 0) {
        pCVar4 = CharNextA(pCVar4);
        iVar7 = _ismbcspace((int)*pCVar4);
      }
      local_118[0] = '\0';
      iVar7 = 0;
      iVar5 = _ismbcdigit((int)*pCVar4);
      while (iVar5 != 0) {
        local_118[iVar7] = *pCVar4;
        pCVar4 = CharNextA(pCVar4);
        iVar7 = iVar7 + 1;
        iVar5 = _ismbcdigit((int)*pCVar4);
      }
      local_118[iVar7] = '\0';
      uVar6 = FUN_5f81a1f0(local_118,0);
      param_3[2] = uVar6;
      uVar6 = ftol();
      param_3[2] = uVar6;
      CVar2 = *pCVar4;
      while ((CVar2 != '\0' && (CVar2 != ','))) {
        pCVar4 = CharNextA(pCVar4);
        CVar2 = *pCVar4;
      }
      pCVar4 = CharNextA(pCVar4);
      iVar7 = _ismbcspace((int)*pCVar4);
      while (iVar7 != 0) {
        pCVar4 = CharNextA(pCVar4);
        iVar7 = _ismbcspace((int)*pCVar4);
      }
      local_118[0] = '\0';
      iVar7 = 0;
      iVar5 = _ismbcdigit((int)*pCVar4);
      while (iVar5 != 0) {
        local_118[iVar7] = *pCVar4;
        pCVar4 = CharNextA(pCVar4);
        iVar7 = iVar7 + 1;
        iVar5 = _ismbcdigit((int)*pCVar4);
      }
      local_118[iVar7] = '\0';
      uVar6 = FUN_5f81a1f0(local_118,0);
      param_3[3] = uVar6;
      uVar6 = ftol();
      param_3[3] = uVar6;
      return 0;
    }
  }
  return 1;
}


