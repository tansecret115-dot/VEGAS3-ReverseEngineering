/* Module: wmfdist2.exe
   Function: FUN_01003296
   Address: 01003296
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01003296(int param_1)

{
  uint uVar1;
  short sVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  LPCSTR pCVar10;
  BYTE *pBVar11;
  UINT UVar12;
  BYTE local_1b4 [260];
  _OSVERSIONINFOA local_b0;
  uint auStack_1c [4];
  uint local_c;
  UINT local_8;
  
  local_8 = 0;
  local_b0.dwOSVersionInfoSize = 0x94;
  BVar3 = GetVersionExA(&local_b0);
  uVar4 = local_c;
  iVar5 = param_1;
  if (BVar3 == 0) {
    local_8 = 0x4b4;
  }
  else {
    if (local_b0.dwPlatformId == 1) {
      DAT_0100bc04 = 0;
      DAT_0100a2f8 = 1;
      DAT_0100a2fc = 1;
      sVar2 = DAT_0100bc04;
    }
    else {
      if (local_b0.dwPlatformId != 2) {
        local_8 = 0x4ca;
        goto LAB_010032d3;
      }
      DAT_0100bc04 = 2;
      DAT_0100a2f8 = 1;
      DAT_0100a2fc = 1;
      if (local_b0.dwMajorVersion < 4) {
        DAT_0100bc04 = 1;
        if ((local_b0.dwMajorVersion < 3) ||
           ((sVar2 = 1, local_b0.dwMajorVersion == 3 && (local_b0.dwMinorVersion < 0x33)))) {
          DAT_0100a2f8 = 0;
          DAT_0100a2fc = 0;
          sVar2 = DAT_0100bc04;
        }
      }
      else {
        sVar2 = DAT_0100bc04;
        if (4 < local_b0.dwMajorVersion) {
          DAT_0100bc04 = 3;
          sVar2 = DAT_0100bc04;
        }
      }
    }
    DAT_0100bc04 = sVar2;
    if ((DAT_0100aab4 == 0) && (param_1 != 0)) {
      if (DAT_0100bc04 == 0) {
        iVar5 = param_1 + 0x40;
      }
      else {
        iVar5 = param_1 + 4;
      }
      local_c = 0;
      do {
        uVar6 = FUN_01002768(local_b0.dwMajorVersion,local_b0.dwMinorVersion,
                             *(uint *)(iVar5 + local_c * 0x18),*(uint *)(iVar5 + 4 + local_c * 0x18)
                            );
        uVar4 = local_c;
        auStack_1c[local_c + 2] = uVar6;
        uVar6 = FUN_01002768(local_b0.dwMajorVersion,local_b0.dwMinorVersion,
                             *(uint *)(iVar5 + uVar4 * 0x18 + 0xc),
                             *(uint *)(iVar5 + 0x10 + uVar4 * 0x18));
        uVar4 = local_c;
        iVar7 = local_c + 2;
        auStack_1c[local_c] = uVar6;
        if (((int)auStack_1c[iVar7] < 0) || (0 < (int)uVar6)) {
          if (uVar4 == 1) goto LAB_0100352a;
        }
        else {
          if (auStack_1c[iVar7] == 0) {
            if (uVar6 == 0) {
              uVar6 = local_b0.dwBuildNumber & 0xffff;
              if (*(uint *)(iVar5 + 8 + uVar4 * 0x18) <= uVar6) {
                uVar1 = *(uint *)(iVar5 + uVar4 * 0x18 + 0x14);
                bVar8 = uVar6 < uVar1;
                bVar9 = uVar6 == uVar1;
                goto LAB_0100350f;
              }
            }
            else if (*(uint *)(iVar5 + 8 + uVar4 * 0x18) <= (local_b0.dwBuildNumber & 0xffff))
            break;
          }
          else {
            if (uVar6 != 0) break;
            uVar6 = *(uint *)(iVar5 + 0x14 + uVar4 * 0x18);
            bVar8 = (local_b0.dwBuildNumber & 0xffff) < uVar6;
            bVar9 = (local_b0.dwBuildNumber & 0xffff) == uVar6;
LAB_0100350f:
            if (bVar8 || bVar9) break;
          }
          if (uVar4 != 0) {
LAB_0100352a:
            local_8 = 0x54c;
            break;
          }
        }
        uVar4 = uVar4 + 1;
        local_c = uVar4;
      } while ((int)uVar4 < 2);
      if (((local_8 == 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
         (iVar7 = FUN_010025d4(param_1,local_1b4,0x104,(int *)(auStack_1c + 4)), uVar4 = local_c,
         iVar7 == 0)) {
        local_8 = 0x54d;
      }
    }
  }
LAB_010032d3:
  if ((local_8 == 0x54d) || (local_8 == 0x54c)) {
    pBVar11 = (BYTE *)0x0;
    if (local_8 == 0x54d) {
      pBVar11 = local_1b4;
      iVar5 = uVar4 * 0x3c + *(int *)(param_1 + 0x80) + 0x84 + param_1;
    }
    pCVar10 = (LPCSTR)(*(int *)(iVar5 + 0x34) + 0x84 + param_1);
    uVar4 = FUN_0100274b(*(uint *)(iVar5 + 0x30));
    if ((((byte)DAT_0100aab8 & 1) == 0) && (*pCVar10 != '\0')) {
      MessageBeep(0);
      iVar5 = FUN_01005dd2();
      if ((iVar5 == 0) || (iVar5 = FUN_01005d84(DAT_0100b6dc,(LPCSTR)0x10,(LPCSTR)0x1), iVar5 == 0))
      {
        uVar6 = 0;
      }
      else {
        uVar6 = 0x180000;
      }
      iVar5 = MessageBoxA((HWND)0x0,pCVar10,&DAT_0100adf4,uVar4 | uVar6 | 0x30);
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 1) == 0) goto LAB_010033b8;
        bVar8 = iVar5 == 1;
      }
      else {
        bVar8 = iVar5 == 6;
      }
      if (bVar8) {
        local_8 = 0;
      }
      goto LAB_010033b8;
    }
    UVar12 = 0x30;
    pCVar10 = &DAT_0100adf4;
  }
  else {
    if (local_8 == 0) goto LAB_010033b8;
    UVar12 = 0x10;
    pBVar11 = (BYTE *)0x0;
    pCVar10 = (LPCSTR)0x0;
  }
  FUN_01003e44((HWND)0x0,local_8,pCVar10,(LPCSTR)pBVar11,UVar12,0);
LAB_010033b8:
  return local_8 == 0;
}


