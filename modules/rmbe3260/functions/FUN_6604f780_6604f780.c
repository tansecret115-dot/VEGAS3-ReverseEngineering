/* Module: rmbe3260.dll
   Function: FUN_6604f780
   Address: 6604f780
   Source: Ghidra pseudocode (Stage 10 batch) */


HKEY __cdecl FUN_6604f780(char *param_1)

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
  CHAR local_1038 [2048];
  CHAR local_838 [2048];
  LPCSTR local_38 [3];
  LPCSTR local_2c;
  undefined4 uStackY_28;
  HKEY pHVar12;
  HKEY phkResult;
  char *pcVar13;
  
  FUN_66060bf0();
  bVar10 = false;
  bVar11 = false;
  lstrcpyA(local_1038,(LPCSTR)0x0);
  LVar2 = RegOpenKeyA((HKEY)0x80000000,local_1038,(PHKEY)&stack0xfffffff8);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueA(unaff_EBX,(LPCSTR)0x0,local_838,(PLONG)&stack0xfffffff4);
    bVar10 = LVar2 == 0;
    RegCloseKey(unaff_EBX);
  }
  if (!bVar10) {
    lstrcpyA(local_1038,s__HTML_6606efac);
    pHVar12 = (HKEY)0x6604f81c;
    LVar2 = RegOpenKeyA((HKEY)0x80000000,local_1038,(PHKEY)&stack0xfffffff8);
    bVar10 = false;
    if (LVar2 == 0) {
      pHVar12 = unaff_EBX;
      LVar2 = RegQueryValueA(unaff_EBX,(LPCSTR)0x0,local_838,(PLONG)&stack0xfffffff4);
      bVar10 = LVar2 == 0;
      RegCloseKey(unaff_EBX);
    }
    if (!bVar10) goto LAB_6604f8b0;
  }
  lstrcpyA(local_1038,local_838);
  pHVar12 = (HKEY)0x6604f876;
  LVar2 = RegOpenKeyA((HKEY)0x80000000,local_1038,(PHKEY)&stack0xfffffff8);
  if (LVar2 == 0) {
    pHVar12 = unaff_EBX;
    LVar2 = RegQueryValueA(unaff_EBX,s_shell_open_command_6606ef98,local_838,(PLONG)&stack0xfffffff4
                          );
    bVar11 = LVar2 == 0;
    RegCloseKey(unaff_EBX);
  }
LAB_6604f8b0:
  if (!bVar11) {
    lstrcpyA(local_1038,s_HtmlDefBrowser_6606ef88);
    phkResult = (HKEY)&stack0xfffffff8;
    pHVar12 = (HKEY)0x6604f8d7;
    LVar2 = RegOpenKeyA((HKEY)0x80000000,local_1038,(PHKEY)phkResult);
    bVar10 = false;
    if (LVar2 == 0) {
      pHVar12 = unaff_EBX;
      LVar2 = RegQueryValueA(unaff_EBX,s_shell_open_command_6606ef98,local_838,
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
  pcVar13 = &DAT_6606ef84;
  pcVar3 = FUN_66052140(local_838,&DAT_6606ef84);
  if (pcVar3 == (char *)0x0) {
    pcVar13 = s__nohome_6606ef7c;
    pcVar3 = FUN_66052140(local_838,s__nohome_6606ef7c);
    if (pcVar3 == (char *)0x0) {
      return (HKEY)pcVar13;
    }
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_6606ef78;
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
    FUN_6605b650((undefined4 *)&stack0xffffffe0);
    uVar7 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((~uVar7 - 1 < 0xf0) || (iVar4 = FUN_66060c40(param_1,(int *)&stack0xffffffe0), iVar4 < 0)) {
      FUN_6605b970(&stack0xffffffe0,param_1);
    }
    FUN_6605b650(&local_2c);
    FUN_6605bc10(&local_2c,pHVar12[-2].unused + 0x1fe);
    FUN_6605bc90(&local_2c,0);
    uStackY_28 = 0x6604fa19;
    FUN_6605bfd0(&local_2c,local_838);
    UVar5 = WinExec(local_2c,10);
    if (UVar5 < 0x20) {
      FUN_6605b650(local_38);
      FUN_6605bfd0(local_38,local_838);
      WinExec(local_38[0],10);
      FUN_6605b770((int *)local_38);
    }
    FUN_6605b770((int *)&local_2c);
    pcVar13 = (char *)0x6604fa84;
    FUN_6605b770((int *)&stack0xffffffe0);
  }
  return (HKEY)pcVar13;
}


