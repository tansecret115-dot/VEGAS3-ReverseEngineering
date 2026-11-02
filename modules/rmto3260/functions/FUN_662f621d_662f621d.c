/* Module: rmto3260.dll
   Function: FUN_662f621d
   Address: 662f621d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f621d(void)

{
  char cVar1;
  char *pcVar2;
  LSTATUS LVar3;
  char *pcVar4;
  int iVar5;
  UINT UVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  
  bVar11 = false;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0xc) = 0;
  lstrcpyA((LPSTR)(unaff_EBP + -0x1034),&DAT_6630b9dc);
  LVar3 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)(unaff_EBP + -0x1034),(PHKEY)(unaff_EBP + -4));
  if (LVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -8) = 0x104;
    LVar3 = RegQueryValueA(*(HKEY *)(unaff_EBP + -4),(LPCSTR)0x0,(LPSTR)(unaff_EBP + -0x834),
                           (PLONG)(unaff_EBP + -8));
    bVar11 = LVar3 == 0;
    RegCloseKey(*(HKEY *)(unaff_EBP + -4));
  }
  if (bVar11) {
LAB_662f62e4:
    lstrcpyA((LPSTR)(unaff_EBP + -0x1034),(LPCSTR)(unaff_EBP + -0x834));
    LVar3 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)(unaff_EBP + -0x1034),(PHKEY)(unaff_EBP + -4));
    if (LVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -8) = 0x104;
      LVar3 = RegQueryValueA(*(HKEY *)(unaff_EBP + -4),s_shell_open_command_6630b9c0,
                             (LPSTR)(unaff_EBP + -0x834),(PLONG)(unaff_EBP + -8));
      if (LVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0xc) = 1;
      }
      RegCloseKey(*(HKEY *)(unaff_EBP + -4));
    }
  }
  else {
    lstrcpyA((LPSTR)(unaff_EBP + -0x1034),s__HTML_6630b9d4);
    LVar3 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)(unaff_EBP + -0x1034),(PHKEY)(unaff_EBP + -4));
    bVar11 = false;
    if (LVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -8) = 0x104;
      LVar3 = RegQueryValueA(*(HKEY *)(unaff_EBP + -4),(LPCSTR)0x0,(LPSTR)(unaff_EBP + -0x834),
                             (PLONG)(unaff_EBP + -8));
      bVar11 = LVar3 == 0;
      RegCloseKey(*(HKEY *)(unaff_EBP + -4));
    }
    if (bVar11) goto LAB_662f62e4;
  }
  if (*(int *)(unaff_EBP + -0xc) == 0) {
    lstrcpyA((LPSTR)(unaff_EBP + -0x1034),s_HtmlDefBrowser_6630b9b0);
    LVar3 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)(unaff_EBP + -0x1034),(PHKEY)(unaff_EBP + -4));
    if (LVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -8) = 0x104;
      LVar3 = RegQueryValueA(*(HKEY *)(unaff_EBP + -4),s_shell_open_command_6630b9c0,
                             (LPSTR)(unaff_EBP + -0x834),(PLONG)(unaff_EBP + -8));
      if (LVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0xc) = 1;
      }
      RegCloseKey(*(HKEY *)(unaff_EBP + -4));
    }
    if (*(int *)(unaff_EBP + -0xc) == 0) goto LAB_662f6514;
  }
  pcVar2 = *(char **)(unaff_EBP + 8);
  if (pcVar2 == (char *)0x0) {
    return 1;
  }
  pcVar4 = FUN_662f45d0((LPCSTR)(unaff_EBP + -0x834),&DAT_6630b9ac);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = FUN_662f45d0((LPCSTR)(unaff_EBP + -0x834),s__nohome_6630b9a4);
    if (pcVar4 == (char *)0x0) goto LAB_662f6514;
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_6630a020;
    do {
      pcVar10 = pcVar9;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar9 = pcVar10 + -uVar8;
    pcVar10 = pcVar4;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  else {
    pcVar4 = pcVar4 + 1;
    *pcVar4 = 's';
  }
  if (pcVar4 != (char *)0x0) {
    FUN_662eefd0((undefined4 *)(unaff_EBP + -0x1c));
    uVar8 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((~uVar8 - 1 < 0xf0) || (iVar5 = FUN_66302530(pcVar2,(int *)(unaff_EBP + -0x1c)), iVar5 < 0))
    {
      FUN_662ef2f0((void *)(unaff_EBP + -0x1c),pcVar2);
    }
    FUN_662eefd0((undefined4 *)(unaff_EBP + -0x28));
    FUN_662ef590((void *)(unaff_EBP + -0x28),*(int *)(*(int *)(unaff_EBP + -0x1c) + -8) + 0x1fe);
    FUN_662ef610((void *)(unaff_EBP + -0x28),0);
    FUN_662ef850((void *)(unaff_EBP + -0x28),(char *)(unaff_EBP + -0x834));
    UVar6 = WinExec(*(LPCSTR *)(unaff_EBP + -0x28),10);
    if (UVar6 < 0x20) {
      FUN_662eefd0((undefined4 *)(unaff_EBP + -0x34));
      FUN_662ef850((void *)(unaff_EBP + -0x34),(char *)(unaff_EBP + -0x834));
      UVar6 = WinExec(*(LPCSTR *)(unaff_EBP + -0x34),10);
      if (0x1f < UVar6) {
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
      }
      FUN_662ef0f0((int *)(unaff_EBP + -0x34));
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
    }
    FUN_662ef0f0((int *)(unaff_EBP + -0x28));
    FUN_662ef0f0((int *)(unaff_EBP + -0x1c));
  }
LAB_662f6514:
  return *(undefined4 *)(unaff_EBP + -0x10);
}


