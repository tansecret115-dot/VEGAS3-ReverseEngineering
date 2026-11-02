/* Module: rmto3260.dll
   Function: FUN_662f6210
   Address: 662f6210
   Source: Ghidra pseudocode (Stage 10 batch) */


HKEY FUN_662f6210(char *param_1)

{
  char cVar1;
  LSTATUS LVar2;
  char *pcVar3;
  int iVar4;
  UINT UVar5;
  uint uVar6;
  uint uVar7;
  HKEY unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  CHAR aCStackY_1038 [2048];
  CHAR aCStackY_838 [2048];
  LPCSTR apCStackY_38 [3];
  LPCSTR pCStackY_2c;
  undefined4 uStackY_28;
  HKEY pHVar12;
  HKEY phkResult;
  char *pcVar13;
  
  FUN_663024f0();
  bVar10 = false;
  bVar11 = false;
  lstrcpyA(aCStackY_1038,(LPCSTR)0x0);
  LVar2 = RegOpenKeyA((HKEY)0x80000000,aCStackY_1038,(PHKEY)&stack0xfffffff8);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueA(unaff_EBX,(LPCSTR)0x0,aCStackY_838,(PLONG)&stack0xfffffff4);
    bVar10 = LVar2 == 0;
    RegCloseKey(unaff_EBX);
  }
  if (!bVar10) {
    lstrcpyA(aCStackY_1038,s__HTML_6630b9d4);
    pHVar12 = (HKEY)0x662f62ac;
    LVar2 = RegOpenKeyA((HKEY)0x80000000,aCStackY_1038,(PHKEY)&stack0xfffffff8);
    bVar10 = false;
    if (LVar2 == 0) {
      pHVar12 = unaff_EBX;
      LVar2 = RegQueryValueA(unaff_EBX,(LPCSTR)0x0,aCStackY_838,(PLONG)&stack0xfffffff4);
      bVar10 = LVar2 == 0;
      RegCloseKey(unaff_EBX);
    }
    if (!bVar10) goto LAB_662f6340;
  }
  lstrcpyA(aCStackY_1038,aCStackY_838);
  pHVar12 = (HKEY)0x662f6306;
  LVar2 = RegOpenKeyA((HKEY)0x80000000,aCStackY_1038,(PHKEY)&stack0xfffffff8);
  if (LVar2 == 0) {
    pHVar12 = unaff_EBX;
    LVar2 = RegQueryValueA(unaff_EBX,s_shell_open_command_6630b9c0,aCStackY_838,
                           (PLONG)&stack0xfffffff4);
    bVar11 = LVar2 == 0;
    RegCloseKey(unaff_EBX);
  }
LAB_662f6340:
  if (!bVar11) {
    lstrcpyA(aCStackY_1038,s_HtmlDefBrowser_6630b9b0);
    phkResult = (HKEY)&stack0xfffffff8;
    pHVar12 = (HKEY)0x662f6367;
    LVar2 = RegOpenKeyA((HKEY)0x80000000,aCStackY_1038,(PHKEY)phkResult);
    bVar10 = false;
    if (LVar2 == 0) {
      pHVar12 = unaff_EBX;
      LVar2 = RegQueryValueA(unaff_EBX,s_shell_open_command_6630b9c0,aCStackY_838,
                             (PLONG)&stack0xfffffff4);
      bVar10 = LVar2 == 0;
      RegCloseKey(unaff_EBX);
      phkResult = unaff_EBX;
    }
    if (!bVar10) {
      return phkResult;
    }
  }
  if (param_1 == (char *)0x0) {
    return (HKEY)0x1;
  }
  pcVar13 = &DAT_6630b9ac;
  pcVar3 = FUN_662f45d0(aCStackY_838,&DAT_6630b9ac);
  if (pcVar3 == (char *)0x0) {
    pcVar13 = s__nohome_6630b9a4;
    pcVar3 = FUN_662f45d0(aCStackY_838,s__nohome_6630b9a4);
    if (pcVar3 == (char *)0x0) {
      return (HKEY)pcVar13;
    }
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_6630a020;
    do {
      pcVar9 = pcVar8;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar8 = pcVar9 + -uVar7;
    pcVar9 = pcVar3;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    pcVar3 = pcVar3 + 1;
    *pcVar3 = 's';
  }
  if (pcVar3 != (char *)0x0) {
    FUN_662eefd0((undefined4 *)&stack0xffffffe0);
    uVar7 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((~uVar7 - 1 < 0xf0) || (iVar4 = FUN_66302530(param_1,(int *)&stack0xffffffe0), iVar4 < 0)) {
      FUN_662ef2f0(&stack0xffffffe0,param_1);
    }
    FUN_662eefd0(&pCStackY_2c);
    FUN_662ef590(&pCStackY_2c,pHVar12[-2].unused + 0x1fe);
    FUN_662ef610(&pCStackY_2c,0);
    uStackY_28 = 0x662f64a9;
    FUN_662ef850(&pCStackY_2c,aCStackY_838);
    UVar5 = WinExec(pCStackY_2c,10);
    if (UVar5 < 0x20) {
      FUN_662eefd0(apCStackY_38);
      FUN_662ef850(apCStackY_38,aCStackY_838);
      WinExec(apCStackY_38[0],10);
      FUN_662ef0f0((int *)apCStackY_38);
    }
    FUN_662ef0f0((int *)&pCStackY_2c);
    pcVar13 = (char *)0x662f6514;
    FUN_662ef0f0((int *)&stack0xffffffe0);
  }
  return (HKEY)pcVar13;
}


