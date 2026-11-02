/* Module: rmme3260.dll
   Function: FUN_6624f020
   Address: 6624f020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624f020(LPBYTE param_1)

{
  char cVar1;
  BYTE BVar2;
  LSTATUS LVar3;
  char *pcVar4;
  UINT UVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  LPBYTE pBVar11;
  undefined4 *puVar12;
  char *pcVar13;
  LPBYTE pBVar14;
  char *pcVar15;
  BYTE *pBVar16;
  DWORD local_28;
  HKEY local_24;
  HKEY local_20;
  undefined **local_1c;
  DWORD local_18;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  DWORD local_8;
  
  local_1c = &PTR_DAT_6627bb90;
LAB_6624f031:
  ppuVar10 = local_1c;
  DAT_6627eaa8 = DAT_6627bcf0;
  DAT_6627eaac = DAT_6627bcf4;
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_6626fdc0;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = *local_1c;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)&DAT_6627eaa8,0,0x20019,&local_24);
  if (LVar3 != 0) goto LAB_6624f459;
  local_18 = 0;
LAB_6624f0c2:
  puVar12 = &DAT_6627eca8;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_8 = 0x1ff;
  LVar3 = RegEnumKeyExA(local_24,local_18,(LPSTR)&DAT_6627eca8,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                        (LPDWORD)0x0,(PFILETIME)0x0);
  if (LVar3 != 0) goto LAB_6624f44f;
  DAT_6627eaa8 = DAT_6627bcf0;
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_6626fdc0;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  DAT_6627eaac = DAT_6627bcf4;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = *ppuVar10;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_6626fdc0;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = (char *)&DAT_6627eca8;
  do {
    pcVar15 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar6;
  pcVar15 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)&DAT_6627eaa8,0,0x20019,&local_20);
  if (LVar3 != 0) goto LAB_6624f447;
  local_14 = 0;
LAB_6624f1e1:
  puVar12 = &DAT_6627e668;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_8 = 0x1ff;
  LVar3 = RegEnumKeyExA(local_20,local_14,(LPSTR)&DAT_6627e668,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                        (LPDWORD)0x0,(PFILETIME)0x0);
  if (LVar3 != 0) goto LAB_6624f43a;
  uVar6 = 0xffffffff;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar4 = &DAT_6626fdc0;
  do {
    pcVar15 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar8;
  pcVar15 = pcVar13 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar4 = (char *)&DAT_6627e668;
  do {
    pcVar15 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar7 = -1;
  pcVar4 = (char *)&DAT_6627eaa8;
  do {
    pcVar13 = pcVar4;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar8;
  pcVar15 = pcVar13 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)&DAT_6627eaa8,0,0x20019,&local_10);
  if (LVar3 == 0) {
    DAT_6627e868 = 0;
    local_8 = 0x40;
    LVar3 = RegQueryValueExA(local_10,s_Class_6627bce8,(LPDWORD)0x0,&local_28,&DAT_6627e868,&local_8
                            );
    if (LVar3 == 0) {
      iVar7 = _stricmp(&DAT_6627e868,s_DISPLAY_66270530);
      if (iVar7 == 0) {
        puVar12 = &DAT_6627eeb0;
        for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_8 = 0x1ff;
        uVar8 = 0xffffffff;
        pcVar4 = *local_1c;
        do {
          pcVar15 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar4 = pcVar15 + -uVar8;
        pcVar15 = (char *)&DAT_6627e8a8;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar4 = &DAT_6626fdc0;
        do {
          pcVar15 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_6627e8a8;
        do {
          pcVar13 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar8;
        pcVar15 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar4 = (char *)&DAT_6627eca8;
        do {
          pcVar15 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_6627e8a8;
        do {
          pcVar13 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar8;
        pcVar15 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar4 = &DAT_6626fdc0;
        do {
          pcVar15 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_6627e8a8;
        do {
          pcVar13 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar8;
        pcVar15 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar4 = (char *)&DAT_6627e668;
        do {
          pcVar15 = pcVar4;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pcVar4 = (char *)&DAT_6627e8a8;
        do {
          pcVar13 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar8;
        pcVar15 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        LVar3 = RegQueryValueExA(local_10,s_Driver_6627bce0,(LPDWORD)0x0,&local_28,
                                 (LPBYTE)&DAT_6627eeb0,&local_8);
        if ((LVar3 == 0) && ((char)DAT_6627eeb0 != '0')) {
          iVar7 = FUN_6624f6c0(&DAT_6627e8a8);
          if (iVar7 != 0) {
            RegCloseKey(local_10);
            RegCloseKey(local_20);
            RegCloseKey(local_24);
            pcVar4 = strstr((char *)&DAT_6627e8a8,&DAT_6627bcd8);
            if (pcVar4 != (char *)0x0) {
              uVar6 = FUN_6624f730(pcVar4 + 4,4);
              *(uint *)(param_1 + 0x408) = uVar6;
            }
            pcVar4 = strstr((char *)&DAT_6627e8a8,&DAT_6627bcd0);
            if (pcVar4 != (char *)0x0) {
              uVar6 = FUN_6624f730(pcVar4 + 4,4);
              *(uint *)(param_1 + 0x40c) = uVar6;
            }
            pcVar4 = strstr((char *)&DAT_6627e8a8,&DAT_6627bcc8);
            if (pcVar4 != (char *)0x0) {
              uVar6 = FUN_6624f730(pcVar4 + 4,4);
              *(uint *)(param_1 + 0x414) = uVar6;
            }
            pcVar4 = s_System_CurrentControlSet_Service_6627bca0;
            puVar12 = &DAT_6627eaa8;
            for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar12 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              puVar12 = puVar12 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar4 = &DAT_6626fdc0;
            do {
              pcVar15 = pcVar4;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar15 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar15;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar7 = -1;
            pcVar4 = (char *)&DAT_6627eaa8;
            do {
              pcVar13 = pcVar4;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            pcVar4 = pcVar15 + -uVar6;
            pcVar15 = pcVar13 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar15 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar15 = pcVar15 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar4 = (char *)&DAT_6627eeb0;
            do {
              pcVar15 = pcVar4;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar15 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar15;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar7 = -1;
            pcVar4 = (char *)&DAT_6627eaa8;
            do {
              pcVar13 = pcVar4;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            pcVar4 = pcVar15 + -uVar6;
            pcVar15 = pcVar13 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar15 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar15 = pcVar15 + 1;
            }
            LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)&DAT_6627eaa8,0,0x20019,&local_c);
            if (LVar3 == 0) {
              local_8 = 0x200;
              RegQueryValueExA(local_c,s_DriverDesc_6627bc94,(LPDWORD)0x0,&local_28,param_1 + 0x200,
                               &local_8);
              RegCloseKey(local_c);
            }
            uVar6 = 0xffffffff;
            pcVar4 = s__DEFAULT_6627bc88;
            do {
              pcVar15 = pcVar4;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar15 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar15;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar7 = -1;
            pcVar4 = (char *)&DAT_6627eaa8;
            do {
              pcVar13 = pcVar4;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            pcVar4 = pcVar15 + -uVar6;
            pcVar15 = pcVar13 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar15 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar15 = pcVar15 + 1;
            }
            LVar3 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)&DAT_6627eaa8,0,0x20019,&local_c);
            if (LVar3 == 0) {
              local_8 = 0x200;
              RegQueryValueExA(local_c,&DAT_6627bc84,(LPDWORD)0x0,&local_28,param_1,&local_8);
              RegCloseKey(local_c);
              UVar5 = GetSystemDirectoryA((LPSTR)&DAT_6627e560,0x104);
              if (UVar5 != 0) {
                uVar6 = 0xffffffff;
                pcVar4 = &DAT_6626fdc0;
                do {
                  pcVar15 = pcVar4;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar15 = pcVar4 + 1;
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar15;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                iVar7 = -1;
                pcVar4 = (char *)&DAT_6627e560;
                do {
                  pcVar13 = pcVar4;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar13 = pcVar4 + 1;
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar13;
                } while (cVar1 != '\0');
                pcVar4 = pcVar15 + -uVar6;
                pcVar15 = pcVar13 + -1;
                for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
                  pcVar4 = pcVar4 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar15 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                uVar6 = 0xffffffff;
                pBVar11 = param_1;
                do {
                  pBVar14 = pBVar11;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pBVar14 = pBVar11 + 1;
                  BVar2 = *pBVar11;
                  pBVar11 = pBVar14;
                } while (BVar2 != '\0');
                uVar6 = ~uVar6;
                iVar7 = -1;
                pcVar4 = (char *)&DAT_6627e560;
                do {
                  pcVar15 = pcVar4;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar15 = pcVar4 + 1;
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar15;
                } while (cVar1 != '\0');
                pBVar11 = pBVar14 + -uVar6;
                pBVar16 = (BYTE *)(pcVar15 + -1);
                for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined4 *)pBVar16 = *(undefined4 *)pBVar11;
                  pBVar11 = pBVar11 + 4;
                  pBVar16 = pBVar16 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pBVar16 = *pBVar11;
                  pBVar11 = pBVar11 + 1;
                  pBVar16 = pBVar16 + 1;
                }
                FUN_6624ef70((LPCSTR)&DAT_6627e560,(DWORD)param_1);
              }
            }
            return 1;
          }
        }
      }
    }
    RegCloseKey(local_10);
  }
  uVar9 = 0x200 - (~uVar6 - 1);
  puVar12 = (undefined4 *)(&DAT_6627eaa7 + ~uVar6);
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  local_14 = local_14 + 1;
  goto LAB_6624f1e1;
LAB_6624f44f:
  RegCloseKey(local_24);
LAB_6624f459:
  local_1c = ppuVar10 + 1;
  if (0x6627bba7 < (int)local_1c) {
    return 0;
  }
  goto LAB_6624f031;
LAB_6624f43a:
  RegCloseKey(local_20);
  ppuVar10 = local_1c;
LAB_6624f447:
  local_18 = local_18 + 1;
  goto LAB_6624f0c2;
}


