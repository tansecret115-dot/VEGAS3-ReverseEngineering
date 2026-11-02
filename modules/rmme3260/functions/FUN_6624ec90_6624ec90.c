/* Module: rmme3260.dll
   Function: FUN_6624ec90
   Address: 6624ec90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624ec90(char *param_1,char *param_2)

{
  char cVar1;
  BYTE BVar2;
  HKEY hKey;
  LSTATUS LVar3;
  char *pcVar4;
  UINT UVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  char *pcVar10;
  char *pcVar11;
  BYTE *pBVar12;
  CHAR local_310 [260];
  BYTE local_20c [18];
  CHAR local_1fa [494];
  DWORD local_c;
  HKEY local_8;
  
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,s_Hardware_DEVICEMAP_VIDEO_6627bc68,0,0x20019,&local_8);
  if (LVar3 == 0) {
    pBVar9 = local_20c;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      pBVar9[0] = '\0';
      pBVar9[1] = '\0';
      pBVar9[2] = '\0';
      pBVar9[3] = '\0';
      pBVar9 = pBVar9 + 4;
    }
    local_c = 0x1ff;
    LVar3 = RegQueryValueExA(local_8,s__Device_Video0_6627bc58,(LPDWORD)0x0,(LPDWORD)0x0,local_20c,
                             &local_c);
    if (((LVar3 == 0) && (local_c != 0)) &&
       (pcVar4 = strstr((char *)local_20c,s__REGISTRY_Machine__6627bc44), pcVar4 != (char *)0x0)) {
      RegCloseKey(local_8);
      LVar3 = RegOpenKeyExA((HKEY)0x80000002,local_1fa,0,0x20019,&local_8);
      if (LVar3 != 0) {
        return 0;
      }
      pBVar9 = local_20c;
      for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
        pBVar9[0] = '\0';
        pBVar9[1] = '\0';
        pBVar9[2] = '\0';
        pBVar9[3] = '\0';
        pBVar9 = pBVar9 + 4;
      }
      local_c = 0x1ff;
      LVar3 = RegQueryValueExA(local_8,s_HardwareInformation_AdapterStrin_6627bc20,(LPDWORD)0x0,
                               (LPDWORD)0x0,local_20c,&local_c);
      if (LVar3 == 0) {
        FUN_6624ef40(param_1 + 0x200,(char *)local_20c,0x3f);
        pBVar9 = local_20c;
        for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
          pBVar9[0] = '\0';
          pBVar9[1] = '\0';
          pBVar9[2] = '\0';
          pBVar9[3] = '\0';
          pBVar9 = pBVar9 + 4;
        }
        local_c = 0x1ff;
        LVar3 = RegQueryValueExA(local_8,s_HardwareInformation_ChipType_6627bc00,(LPDWORD)0x0,
                                 (LPDWORD)0x0,local_20c,&local_c);
        if (LVar3 == 0) {
          FUN_6624ef40(param_2,(char *)local_20c,0x1f);
          hKey = local_8;
          local_c = 0x1ff;
          pBVar9 = local_20c;
          for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
            pBVar9[0] = '\0';
            pBVar9[1] = '\0';
            pBVar9[2] = '\0';
            pBVar9[3] = '\0';
            pBVar9 = pBVar9 + 4;
          }
          LVar3 = RegQueryValueExA(hKey,s_InstalledDisplayDrivers_6627bbe8,(LPDWORD)0x0,(LPDWORD)0x0
                                   ,local_20c,&local_c);
          if ((LVar3 == 0) && (local_c != 0)) {
            uVar7 = 0xffffffff;
            pcVar4 = &DAT_6627bbe0;
            do {
              pcVar11 = pcVar4;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar11 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar11;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar6 = -1;
            pBVar9 = local_20c;
            do {
              pBVar12 = pBVar9;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pBVar12 = pBVar9 + 1;
              BVar2 = *pBVar9;
              pBVar9 = pBVar12;
            } while (BVar2 != '\0');
            pBVar9 = (BYTE *)(pcVar11 + -uVar7);
            pBVar12 = pBVar12 + -1;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pBVar12 = *(undefined4 *)pBVar9;
              pBVar9 = pBVar9 + 4;
              pBVar12 = pBVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pBVar12 = *pBVar9;
              pBVar9 = pBVar9 + 1;
              pBVar12 = pBVar12 + 1;
            }
            strncpy(param_1,(char *)local_20c,0x1f);
            UVar5 = GetSystemDirectoryA(local_310,0x104);
            if (UVar5 != 0) {
              uVar7 = 0xffffffff;
              pcVar4 = &DAT_6626fdc0;
              do {
                pcVar11 = pcVar4;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pcVar11 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar11;
              } while (cVar1 != '\0');
              uVar7 = ~uVar7;
              iVar6 = -1;
              pcVar4 = local_310;
              do {
                pcVar10 = pcVar4;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar10 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar10;
              } while (cVar1 != '\0');
              pcVar4 = pcVar11 + -uVar7;
              pcVar11 = pcVar10 + -1;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar11 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar11 = pcVar11 + 1;
              }
              uVar7 = 0xffffffff;
              pBVar9 = local_20c;
              do {
                pBVar12 = pBVar9;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pBVar12 = pBVar9 + 1;
                BVar2 = *pBVar9;
                pBVar9 = pBVar12;
              } while (BVar2 != '\0');
              uVar7 = ~uVar7;
              iVar6 = -1;
              pcVar4 = local_310;
              do {
                pcVar11 = pcVar4;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar11 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar11;
              } while (cVar1 != '\0');
              pBVar9 = pBVar12 + -uVar7;
              pBVar12 = (BYTE *)(pcVar11 + -1);
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pBVar12 = *(undefined4 *)pBVar9;
                pBVar9 = pBVar9 + 4;
                pBVar12 = pBVar12 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pBVar12 = *pBVar9;
                pBVar9 = pBVar9 + 1;
                pBVar12 = pBVar12 + 1;
              }
              iVar6 = FUN_6624ef70(local_310,(DWORD)param_1);
              if (iVar6 != 0) {
                RegCloseKey(local_8);
                return 1;
              }
            }
          }
        }
      }
      RegCloseKey(local_8);
      return 0;
    }
    RegCloseKey(local_8);
  }
  return 0;
}


