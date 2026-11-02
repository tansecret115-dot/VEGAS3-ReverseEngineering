/* Module: vegas30k.dll
   Function: _SfWheel_ExcludeIntelliPointScrolling@0
   Address: 01098b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_ExcludeIntelliPointScrolling_0(void)

{
  char cVar1;
  uchar uVar2;
  BYTE BVar3;
  DWORD dwIndex;
  LSTATUS LVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uchar *puVar13;
  BYTE *pBVar14;
  HKEY local_534;
  DWORD local_530;
  HKEY local_52c;
  BYTE local_528 [4];
  DWORD local_524;
  DWORD local_520;
  BYTE local_51c [27];
  char cStack_501;
  undefined4 local_500 [64];
  uchar local_400 [256];
  BYTE local_300 [256];
  CHAR local_200 [256];
  uchar local_100 [256];
  
  pcVar11 = "Sonic Foundry Application";
  pBVar14 = local_51c;
                    /* 0x98b40  1296  _SfWheel_ExcludeIntelliPointScrolling@0 */
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pBVar14 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pBVar14 = pBVar14 + 4;
  }
  local_530 = 0x100;
  iVar7 = 1000;
  *(undefined2 *)pBVar14 = *(undefined2 *)pcVar11;
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_300,0x100);
  _splitpath((char *)local_300,(char *)0x0,(char *)0x0,(char *)local_400,(char *)local_100);
  _mbscat(local_400,local_100);
  LVar4 = RegOpenKeyExA((HKEY)&DAT_80000001,
                        "Control Panel\\Microsoft Input Devices\\Mouse\\Exceptions",0,0x20019,
                        &local_534);
  if (LVar4 == 0) {
    iVar5 = RegEnumKeyExA(local_534,0,local_200,&local_530,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    dwIndex = 1;
    while (iVar5 == 0) {
      iVar5 = atoi(local_200);
      if (iVar5 < 0x3e9) {
LAB_01098ca7:
        if ((iVar5 < 2000) && (iVar7 < iVar5)) {
          iVar7 = iVar5;
        }
      }
      else if (iVar5 < 2000) {
        LVar4 = RegOpenKeyExA(local_534,local_200,0,1,&local_52c);
        if (LVar4 == 0) {
          local_524 = 0x100;
          LVar4 = RegQueryValueExA(local_52c,"Filename",(LPDWORD)0x0,&local_520,local_300,&local_524
                                  );
          if ((LVar4 == 0) && (iVar6 = _mbsicmp(local_300,local_400), iVar6 == 0)) {
            RegCloseKey(local_534);
            RegCloseKey(local_52c);
            return;
          }
          RegCloseKey(local_52c);
        }
        goto LAB_01098ca7;
      }
      local_530 = 0x100;
      iVar5 = RegEnumKeyExA(local_534,dwIndex,local_200,&local_530,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      dwIndex = dwIndex + 1;
    }
    RegCloseKey(local_534);
  }
  uVar8 = 0xffffffff;
  pcVar11 = "Control Panel\\Microsoft Input Devices\\Mouse\\Exceptions";
  do {
    pcVar12 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  local_528[0] = 0xff;
  local_528[1] = 0xff;
  local_528[2] = 0xff;
  local_528[3] = 0xff;
  pcVar11 = pcVar12 + -uVar8;
  pcVar12 = (char *)local_500;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar11 = (char *)local_500;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar9 = 0xffffffff;
  pcVar11 = "\\";
  do {
    pcVar12 = pcVar11;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar11 = pcVar12 + -uVar9;
  pcVar12 = (char *)((int)local_500 + (~uVar8 - 1));
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar11 = (char *)local_500;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  _itoa(iVar7 + 1,(char *)((int)local_500 + (~uVar8 - 1)),10);
  LVar4 = RegCreateKeyExA((HKEY)&DAT_80000001,(LPCSTR)local_500,0,(LPSTR)0x0,0,2,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_534,&local_520);
  if (LVar4 == 0) {
    uVar8 = 0xffffffff;
    puVar13 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      uVar2 = *puVar13;
      puVar13 = puVar13 + 1;
    } while (uVar2 != '\0');
    LVar4 = RegSetValueExA(local_534,"Filename",0,1,local_400,~uVar8 - 1);
    if (LVar4 == 0) {
      uVar8 = 0xffffffff;
      pBVar14 = local_51c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        BVar3 = *pBVar14;
        pBVar14 = pBVar14 + 1;
      } while (BVar3 != '\0');
      LVar4 = RegSetValueExA(local_534,"Description",0,1,local_51c,~uVar8 - 1);
      if (LVar4 == 0) {
        RegSetValueExA(local_534,"Version",0,4,local_528,4);
      }
    }
    RegCloseKey(local_534);
  }
  return;
}


