/* Module: mcplug.dll
   Function: FUN_0040dba0
   Address: 0040dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040dba0(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  LRESULT LVar8;
  LRESULT bEnable;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  HWND pHVar12;
  code *pcVar13;
  LPSTR pCVar14;
  short sVar15;
  undefined8 *puVar16;
  char *pcVar17;
  CHAR *pCVar18;
  char *pcVar19;
  char *pcVar20;
  float10 fVar21;
  UINT UVar22;
  undefined4 uVar23;
  WPARAM WVar24;
  int iVar25;
  undefined4 uVar26;
  LPARAM LVar27;
  BOOL BVar28;
  undefined4 uVar29;
  int local_970;
  LRESULT local_96c;
  HWND local_968 [2];
  void *local_960;
  int local_95c;
  HWND local_958;
  undefined8 local_954;
  HWND local_94c;
  HWND local_948;
  HWND local_944;
  uchar local_940 [64];
  CHAR local_900 [256];
  char local_800 [2048];
  
  local_95c = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  local_960 = this;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      if (DAT_00486138 != 0) {
        Ordinal_17();
        DAT_00486138 = 0;
      }
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00410a10(this);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 != 0x53) {
        return 0;
      }
      FUN_00418240(0,param_1,0,param_4[2].unused,(int *)&DAT_00486140,(uchar *)0x0);
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return 0;
  }
  if (param_2 != 0x111) {
    if (param_2 != 0x114) {
      return 0;
    }
    uVar5 = FUN_004366b0(0x114,param_3,param_4,1,0x1f);
    FUN_0042f8b0(uVar5,(uchar *)local_968,0);
    SetDlgItemTextA(param_1,0x484,(LPCSTR)local_968);
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  }
  sVar15 = (short)(param_3 >> 0x10);
  switch(param_3 & 0xffff) {
  case 0x40c:
    FUN_004167c0(&local_958,param_1,(int *)&local_944,(int *)local_968,0,
                 *(undefined1 **)((int)this + 0x5c));
    FUN_00415880(param_1,*(int *)((int)this + 0x5c));
    break;
  case 0x417:
    if ((sVar15 == 5) || (sVar15 == 1)) goto switchD_0040dd04_caseD_42e;
    if (sVar15 != 4) {
      return 0;
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x430);
    pcVar13 = SendMessageA_exref;
    local_970 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x443);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (*(int *)((int)this + 0x5c) == 2) {
      local_970 = local_970 + 2;
    }
    FUN_0040d9b0(param_1,0x417,0,0,local_970,LVar7);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 != 1) {
      return 0;
    }
    pHVar6 = GetDlgItem(param_1,0x417);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    goto LAB_0040fd44;
  case 0x419:
    if ((sVar15 == 5) || (sVar15 == 1)) goto switchD_0040dd04_caseD_42e;
    if (sVar15 == 4) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar6 = GetDlgItem(param_1,0x430);
      local_970 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar6 = GetDlgItem(param_1,0x443);
      LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (*(int *)((int)this + 0x5c) == 2) {
        local_970 = local_970 + 2;
      }
      FUN_0040d9b0(param_1,0x419,0x41a,0x43c,local_970,LVar7);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf0;
      pHVar6 = GetDlgItem(param_1,0x427);
      LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (LVar7 == 1) {
        pHVar6 = GetDlgItem(param_1,0x419);
        GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
        fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
        if ((float10)_DAT_00476e10 < fVar21) {
          LVar27 = 0;
          WVar24 = 0;
          UVar22 = 0xf1;
          pHVar6 = GetDlgItem(param_1,0x427);
          SendMessageA(pHVar6,UVar22,WVar24,LVar27);
          return 0;
        }
      }
    }
    break;
  case 0x41a:
    if ((sVar15 == 5) || (sVar15 == 1)) goto switchD_0040dd04_caseD_42e;
    if (sVar15 != 4) {
      return 0;
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x430);
    pcVar13 = SendMessageA_exref;
    local_970 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x443);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (*(int *)((int)this + 0x5c) == 2) {
      local_970 = local_970 + 2;
    }
    FUN_0040d9b0(param_1,0x41a,0,0x419,local_970,LVar7);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 != 1) {
      return 0;
    }
    pHVar6 = GetDlgItem(param_1,0x41a);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
LAB_0040fd44:
    fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
    if ((float10)_DAT_00476e10 < fVar21) {
      uVar29 = 0;
      uVar26 = 0;
      uVar23 = 0xf1;
      pHVar6 = GetDlgItem(param_1,0x427);
      (*pcVar13)(pHVar6,uVar23,uVar26,uVar29);
      return 0;
    }
    break;
  case 0x420:
    if (sVar15 == 0) {
      pHVar6 = GetDlgItem(param_1,0x43c);
      local_954._4_4_ = pHVar6;
      local_94c = GetDlgItem(param_1,0x419);
      local_948 = GetDlgItem(param_1,0x41a);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf1;
      pHVar6 = GetDlgItem(param_1,0x421);
      SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x439);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x417);
      EnableWindow(pHVar6,BVar28);
      EnableWindow(local_954._4_4_,0);
      EnableWindow(local_94c,0);
      EnableWindow(local_948,0);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0x421:
    if (sVar15 == 0) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf1;
      pHVar6 = GetDlgItem(param_1,0x420);
      SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x439);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x43c);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x419);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x41a);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x417);
      EnableWindow(pHVar6,BVar28);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0x427:
    if (sVar15 != 0) {
      return 0;
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 != 1) goto LAB_0040f03a;
    pHVar6 = GetDlgItem(param_1,0x435);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
    local_954 = (double)fVar21;
    bVar2 = true;
    pHVar6 = GetDlgItem(param_1,0x436);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    pHVar6 = (HWND)FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    local_944 = pHVar6;
    pHVar12 = GetDlgItem(param_1,0x43f);
    GetWindowTextA(pHVar12,(LPSTR)local_940,0x40);
    local_958 = (HWND)FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    puVar10 = (undefined1 *)((int)&local_958[3].unused + 3);
    puVar11 = (undefined1 *)((int)&pHVar6[3].unused + 3);
    local_968[0] = (HWND)(((int)(puVar10 + ((int)puVar10 >> 0x1f & 0xf)) >> 4) *
                         ((int)(puVar11 + ((int)puVar11 >> 0x1f & 0xf)) >> 4));
    uVar5 = 0xffffffff;
    pcVar17 = 
    "In order for the MPEG to have constrained parameters, the following must be changed:\n\n";
    do {
      pcVar20 = pcVar17;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar17 = pcVar20 + -uVar5;
    pcVar20 = local_800;
    for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    if (0x300 < (int)local_944) {
      uVar5 = 0xffffffff;
      pcVar17 = "Width cannot be greater than 768\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    if (0x240 < (int)local_958) {
      uVar5 = 0xffffffff;
      pcVar17 = "Height cannot be greater than 576\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    if (0x18c < (int)local_968[0]) {
      uVar5 = 0xffffffff;
      pcVar17 = "Width * Height cannot be greater than 101376\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    if (_DAT_00476eb8 < (double)(int)local_968[0] * local_954) {
      uVar5 = 0xffffffff;
      pcVar17 = "Width * Height * (Frame rate) cannot be greater than 2534400\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    if (_DAT_00476f90 < local_954) {
      uVar5 = 0xffffffff;
      pcVar17 = "Frame rate cannot be greater than 30\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    if (*(int *)((int)local_960 + 0x5c) == 1) {
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      iVar25 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if (0x28 < iVar25) goto LAB_0040eeeb;
    }
    else if (0x14 < *(int *)(local_95c + 0xe4)) {
LAB_0040eeeb:
      uVar5 = 0xffffffff;
      pcVar17 = "VBV buffer size cannot be greater than 40 bytes\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      bVar2 = false;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x420);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 == 1) {
      pHVar6 = GetDlgItem(param_1,0x417);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
      if (fVar21 <= (float10)_DAT_00476e10) {
LAB_0040f005:
        if (bVar2) goto LAB_0040f03a;
      }
      else {
        uVar5 = 0xffffffff;
        pcVar17 = "Bitrate must be less than 1856000\n";
        do {
          pcVar20 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar20 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar25 = -1;
        pcVar17 = local_800;
        do {
          pcVar19 = pcVar17;
          if (iVar25 == 0) break;
          iVar25 = iVar25 + -1;
          pcVar19 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar19;
        } while (cVar1 != '\0');
        pcVar17 = pcVar20 + -uVar5;
        pcVar20 = pcVar19 + -1;
        for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar20 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar20 = pcVar20 + 1;
        }
      }
    }
    else {
      pHVar6 = GetDlgItem(param_1,0x43c);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
      if (fVar21 <= (float10)_DAT_00476e10) goto LAB_0040f005;
      uVar5 = 0xffffffff;
      pcVar17 = "Maximum Bitrate must be less than 1856000\n";
      do {
        pcVar20 = pcVar17;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar25 = -1;
      pcVar17 = local_800;
      do {
        pcVar19 = pcVar17;
        if (iVar25 == 0) break;
        iVar25 = iVar25 + -1;
        pcVar19 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar5;
      pcVar20 = pcVar19 + -1;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf1;
    pHVar6 = GetDlgItem(param_1,0x427);
    SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    FUN_00420130(param_1,local_800,"Parameters are not constrained",0x30);
LAB_0040f03a:
    *(undefined4 *)((int)local_960 + 0x24) = 1;
    return 0;
  case 0x429:
  case 0x433:
  case 0x445:
    if (sVar15 == 1) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0x42b:
    if (sVar15 == 1) {
      pHVar6 = GetDlgItem(param_1,0x429);
      local_968[0] = GetDlgItem(param_1,0x42b);
      pHVar12 = GetDlgItem(param_1,0x429);
      GetWindowTextA(local_968[0],(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      GetWindowTextA(pHVar12,(LPSTR)local_940,0x40);
      iVar25 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      local_968[0] = (HWND)(iVar25 / (int)uVar5);
      if ((int)local_968[0] < 1) {
        local_968[0] = (HWND)0x1;
      }
      SendMessageA(pHVar6,0x14b,0,0);
      for (uVar9 = uVar5; (int)uVar9 < 0x21; uVar9 = uVar9 + uVar5) {
        FUN_0042f8b0(uVar9,local_940,0);
        SendMessageA(pHVar6,0x143,0,(LPARAM)local_940);
      }
      SendMessageA(pHVar6,0x14e,(WPARAM)((int)&local_968[0][-1].unused + 3),0);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0x42e:
  case 0x431:
switchD_0040dd04_caseD_42e:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0x430:
    if (sVar15 != 1) {
      return 0;
    }
    pHVar6 = GetDlgItem(param_1,0x430);
    local_970 = SendMessageA(pHVar6,0x147,0,0);
    pHVar6 = GetDlgItem(param_1,0x427);
    local_954 = (double)CONCAT44(local_954._4_4_,pHVar6);
    pHVar6 = GetDlgItem(param_1,0x433);
    local_958 = GetDlgItem(param_1,0x445);
    if (*(int *)((int)local_960 + 0x5c) == 1) {
      local_96c = 0;
      iVar25 = 1;
    }
    else {
      local_944 = GetDlgItem(param_1,0x441);
      local_968[0] = GetDlgItem(param_1,0x443);
      local_96c = SendMessageA(local_968[0],0x147,0,0);
      iVar25 = *(int *)((int)local_960 + 0x5c);
      if (iVar25 == 2) {
        local_970 = local_970 + 2;
      }
    }
    iVar4 = local_95c;
    if (((local_970 == 0) || (local_970 == 1)) && (iVar25 != 2)) {
      iVar25 = *(int *)(local_95c + 0xe4);
      if (iVar25 < 10) {
        *(undefined4 *)(local_95c + 0xe4) = 10;
      }
      else {
        if (0x3ff < iVar25) {
          iVar25 = 0x3ff;
        }
        *(int *)(local_95c + 0xe4) = iVar25;
      }
    }
    else {
      switch(local_96c) {
      case 0:
        iVar25 = *(int *)(local_95c + 0xe4);
        if (iVar25 < 10) {
          *(undefined4 *)(local_95c + 0xe4) = 10;
        }
        else {
          if (0x255 < iVar25) {
            iVar25 = 0x255;
          }
          *(int *)(local_95c + 0xe4) = iVar25;
        }
        break;
      case 1:
        iVar25 = *(int *)(local_95c + 0xe4);
        if (iVar25 < 10) {
          *(undefined4 *)(local_95c + 0xe4) = 10;
        }
        else {
          if (0x1c0 < iVar25) {
            iVar25 = 0x1c0;
          }
          *(int *)(local_95c + 0xe4) = iVar25;
        }
        break;
      case 2:
        iVar25 = *(int *)(local_95c + 0xe4);
        if (iVar25 < 10) {
          *(undefined4 *)(local_95c + 0xe4) = 10;
        }
        else {
          if (0x70 < iVar25) {
            iVar25 = 0x70;
          }
          *(int *)(local_95c + 0xe4) = iVar25;
        }
        break;
      case 3:
        iVar25 = *(int *)(local_95c + 0xe4);
        if (iVar25 < 10) {
          *(undefined4 *)(local_95c + 0xe4) = 10;
        }
        else {
          if (0x1d < iVar25) {
            iVar25 = 0x1d;
          }
          *(int *)(local_95c + 0xe4) = iVar25;
        }
      }
    }
    switch(local_970) {
    case 0:
      *(undefined1 *)(local_95c + 0x3bc) = 3;
      *(undefined4 *)(local_95c + 0x74) = 0;
      *(undefined4 *)(local_95c + 0x84) = 1;
      *(undefined4 *)(local_95c + 0x8c) = 1;
      goto LAB_0040e405;
    case 1:
      *(undefined1 *)(local_95c + 0x3bc) = 5;
      *(undefined4 *)(local_95c + 0x74) = 0;
      *(undefined4 *)(local_95c + 0x84) = 1;
      *(undefined4 *)(local_95c + 0x8c) = 1;
LAB_0040e405:
      if (*(int *)((int)local_960 + 0x5c) == 2) break;
      *(undefined4 *)(local_95c + 0x218) = 5;
      *(undefined4 *)(local_95c + 0x94) = 0;
      *(undefined4 *)(local_95c + 0x230) = 0;
      *(undefined4 *)(local_95c + 0x21c) = 2;
      *(undefined4 *)(local_95c + 0x220) = 2;
      *(undefined4 *)(local_95c + 0x244) = 0;
      *(undefined4 *)(local_95c + 0x24c) = 1;
      *(undefined4 *)(local_95c + 0x250) = 1;
      *(undefined4 *)(local_95c + 0x254) = 1;
      *(undefined4 *)(local_95c + 0x264) = 0;
      *(undefined4 *)(local_95c + 0x268) = 0;
      *(undefined4 *)(local_95c + 0x26c) = 0;
      *(undefined4 *)(local_95c + 0x270) = 0;
      *(undefined4 *)(local_95c + 0x274) = 0;
      *(undefined4 *)(local_95c + 0x278) = 0;
      *(undefined4 *)(local_95c + 0x27c) = 0;
      *(undefined4 *)(local_95c + 0x280) = 0;
      *(undefined4 *)(local_95c + 0x284) = 0;
      *(undefined4 *)(local_95c + 0x288) = 0;
      *(undefined4 *)(local_95c + 0x28c) = 1;
      *(undefined4 *)(local_95c + 0x3e9) = 0;
      *(undefined4 *)(local_95c + 0x3ed) = 0;
      *(undefined4 *)(local_95c + 0x3f1) = 0;
      if (*(int *)((int)local_960 + 0x5c) == 0) {
        EnableWindow((HWND)local_954,1);
        EnableWindow(local_944,0);
        EnableWindow(local_968[0],0);
        EnableWindow(local_958,0);
      }
      SendMessageA(local_958,0x14e,2,0);
      LVar7 = SendMessageA(pHVar6,0x146,0,0);
      if (LVar7 == 4) {
        SendMessageA(pHVar6,0x14b,0,0);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x10fe);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x10ff);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1100);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1101);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1102);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1103);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1104);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1105);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1106);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1107);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1108);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1109);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x110a);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        uVar5 = 0x110b;
        goto LAB_0040e37f;
      }
      goto LAB_0040e398;
    case 2:
      *(undefined1 *)(local_95c + 0x3bc) = 3;
      *(undefined4 *)(local_95c + 0x74) = 0;
      goto LAB_0040e2bb;
    case 3:
      *(undefined1 *)(local_95c + 0x3bc) = 5;
      *(undefined4 *)(local_95c + 0x74) = 1;
LAB_0040e2bb:
      *(undefined4 *)(local_95c + 0x84) = 1;
      *(undefined4 *)(local_95c + 0x8c) = 1;
      break;
    case 4:
      *(undefined1 *)(local_95c + 0x3bc) = 5;
      *(undefined4 *)(local_95c + 0x74) = 0;
      *(undefined4 *)(local_95c + 0x84) = 0;
      *(undefined4 *)(local_95c + 0x8c) = 0;
      break;
    default:
      if ((local_970 == 0) || (local_970 == 1)) goto LAB_0040e405;
    }
    SendMessageA((HWND)local_954,0xf1,0,0);
    if (*(int *)((int)local_960 + 0x5c) == 0) {
      EnableWindow((HWND)local_954,0);
      EnableWindow(local_958,1);
      EnableWindow(local_944,1);
      EnableWindow(local_968[0],1);
    }
    LVar7 = SendMessageA(pHVar6,0x146,0,0);
    if (LVar7 == 0xe) {
      SendMessageA(pHVar6,0x14b,0,0);
      pCVar14 = FUN_00419470(DAT_00487a6c,0x1130);
      SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
      pCVar14 = FUN_00419470(DAT_00487a6c,0x1131);
      SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
      pCVar14 = FUN_00419470(DAT_00487a6c,0x1132);
      SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
      uVar5 = 0x1133;
LAB_0040e37f:
      pCVar14 = FUN_00419470(DAT_00487a6c,uVar5);
      SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
      SendMessageA(pHVar6,0x14e,0,0);
    }
LAB_0040e398:
    if (((local_970 == 0) || (local_970 == 1)) && (*(int *)((int)local_960 + 0x5c) != 2)) {
      uVar5 = *(uint *)(iVar4 + 0x34);
      if (uVar5 < 0x132) {
        uVar5 = 0x132;
      }
      else if (0x1000 < uVar5) {
        uVar5 = 0x1000;
      }
      *(uint *)(iVar4 + 0x34) = uVar5;
      uVar9 = *(uint *)(iVar4 + 0x38);
      uVar5 = (uVar5 - 0x21) / 0x106;
      if ((int)uVar9 < 1) {
        uVar9 = 1;
        goto LAB_0040e6dd;
      }
      if ((int)uVar9 <= (int)uVar5) goto LAB_0040e6dd;
    }
    else {
      uVar5 = *(uint *)(iVar4 + 0x34);
      if (uVar5 < 0x138) {
        uVar5 = 0x138;
      }
      else if (0x1000 < uVar5) {
        uVar5 = 0x1000;
      }
      *(uint *)(iVar4 + 0x34) = uVar5;
      uVar9 = *(uint *)(iVar4 + 0x38);
      uVar5 = (uVar5 - 0x23) / 0x108;
      if ((int)uVar9 < 1) {
        uVar9 = 1;
        goto LAB_0040e6dd;
      }
      if ((int)uVar9 <= (int)uVar5) goto LAB_0040e6dd;
    }
    uVar9 = uVar5;
LAB_0040e6dd:
    *(uint *)(iVar4 + 0x38) = uVar9;
    pHVar6 = GetDlgItem(param_1,0x417);
    local_954 = (double)CONCAT44(local_954._4_4_,pHVar6);
    pHVar6 = GetDlgItem(param_1,0x41a);
    local_954 = (double)CONCAT44(pHVar6,(HWND)local_954);
    local_94c = GetDlgItem(param_1,0x419);
    local_948 = GetDlgItem(param_1,0x43c);
    puVar16 = &local_954;
    pCVar18 = local_900;
    local_968[0] = (HWND)0x4;
    do {
      pHVar6 = *(HWND *)puVar16;
      GetWindowTextA(pHVar6,pCVar18,0x40);
      SendMessageA(pHVar6,0x14b,0,0);
      pCVar18 = pCVar18 + 0x40;
      puVar16 = (undefined8 *)((int)puVar16 + 4);
      local_968[0] = (HWND)((int)&local_968[0][-1].unused + 3);
    } while (local_968[0] != (HWND)0x0);
    local_968[0] = (HWND)0x0;
    switch(local_970) {
    case 0:
      puVar16 = &local_954;
      iVar25 = 4;
      do {
        pHVar6 = *(HWND *)puVar16;
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11c6);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11c7);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11c8);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        puVar16 = (undefined8 *)((int)puVar16 + 4);
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      break;
    case 1:
      puVar16 = &local_954;
      iVar25 = 4;
      do {
        pHVar6 = *(HWND *)puVar16;
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11f8);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11f9);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x11fa);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        puVar16 = (undefined8 *)((int)puVar16 + 4);
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      break;
    case 2:
      switch(local_96c) {
      case 0:
        puVar16 = &local_954;
        iVar25 = 4;
        do {
          pHVar6 = *(HWND *)puVar16;
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122a);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122b);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122c);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        break;
      case 1:
        puVar16 = &local_954;
        iVar25 = 4;
        do {
          pHVar6 = *(HWND *)puVar16;
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122d);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122e);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x122f);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        break;
      case 2:
        puVar16 = &local_954;
        iVar25 = 4;
        do {
          pHVar6 = *(HWND *)puVar16;
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1230);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1231);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1232);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        break;
      case 3:
        puVar16 = &local_954;
        iVar25 = 4;
        do {
          pHVar6 = *(HWND *)puVar16;
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1233);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1234);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x1235);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
      }
      break;
    case 3:
      puVar16 = &local_954;
      iVar25 = 4;
      do {
        pHVar6 = *(HWND *)puVar16;
        pCVar14 = FUN_00419470(DAT_00487a6c,0x125c);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x125d);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x125e);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        puVar16 = (undefined8 *)((int)puVar16 + 4);
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      break;
    case 4:
      puVar16 = &local_954;
      iVar25 = 4;
      do {
        pHVar6 = *(HWND *)puVar16;
        pCVar14 = FUN_00419470(DAT_00487a6c,0x128e);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x128f);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x1290);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        puVar16 = (undefined8 *)((int)puVar16 + 4);
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
      break;
    default:
      return 0x80004005;
    }
    puVar16 = &local_954;
    pCVar18 = local_900;
    iVar25 = 4;
    do {
      SetWindowTextA(*(HWND *)puVar16,pCVar18);
      pCVar18 = pCVar18 + 0x40;
      puVar16 = (undefined8 *)((int)puVar16 + 4);
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
    FUN_0040d9b0(param_1,0x417,0,0,local_970,local_96c);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x421);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 == 1) {
      FUN_0040d9b0(param_1,0x43c,0,0,local_970,local_96c);
      FUN_0040d9b0(param_1,0x41a,0,0x43c,local_970,local_96c);
      FUN_0040d9b0(param_1,0x419,0x41a,0x43c,local_970,local_96c);
      *(undefined4 *)((int)local_960 + 0x24) = 1;
      return 0;
    }
    SendMessageA(local_954._4_4_,0x14e,0,0);
    SendMessageA(local_94c,0x14e,1,0);
    SendMessageA(local_948,0x14e,2,0);
    *(undefined4 *)((int)local_960 + 0x24) = 1;
    return 0;
  case 0x435:
    if (sVar15 == 1) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf0;
      pHVar6 = GetDlgItem(param_1,0x427);
      LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (LVar7 == 1) {
        pHVar6 = GetDlgItem(param_1,0x435);
        GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
        fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
        if ((float10)_DAT_00476f90 < fVar21) {
          LVar27 = 0;
          WVar24 = 0;
          UVar22 = 0xf1;
          pHVar6 = GetDlgItem(param_1,0x427);
          SendMessageA(pHVar6,UVar22,WVar24,LVar27);
        }
      }
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0x436:
    if (sVar15 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar15 != 0x200) {
      return 0;
    }
    local_968[0] = GetDlgItem(param_1,0x436);
    GetWindowTextA(local_968[0],(LPSTR)local_940,0x40);
    iVar25 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    if (iVar25 < 0x20) {
      pHVar6 = (HWND)0x20;
    }
    else {
      pHVar6 = (HWND)(iVar25 + 0xfU & 0xfffffff0);
    }
    FUN_0042f8b0((uint)pHVar6,local_940,0);
    SetWindowTextA(local_968[0],(LPCSTR)local_940);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar12 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar12,UVar22,WVar24,LVar27);
    if (LVar7 != 1) {
      return 0;
    }
    pHVar12 = GetDlgItem(param_1,0x43f);
    GetWindowTextA(pHVar12,(LPSTR)local_940,0x40);
    local_968[0] = (HWND)FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    pHVar12 = GetDlgItem(param_1,0x435);
    GetWindowTextA(pHVar12,(LPSTR)local_940,0x40);
    fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
    if (0x300 < (int)pHVar6) goto LAB_0040f2aa;
    puVar11 = (undefined1 *)((int)&local_968[0][3].unused + 3);
    puVar11 = puVar11 + ((int)puVar11 >> 0x1f & 0xf);
    goto LAB_0040f275;
  case 0x439:
    if (sVar15 == 0x300) goto switchD_0040dd04_caseD_42e;
    if (sVar15 == 0x200) {
      pHVar6 = GetDlgItem(param_1,0x439);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 1) {
        uVar5 = 1;
      }
      else if (0x1f < (int)uVar5) {
        uVar5 = 0x1f;
      }
      FUN_0042f8b0(uVar5,local_940,0);
      SetWindowTextA(pHVar6,(LPCSTR)local_940);
      return 0;
    }
    break;
  case 0x43c:
    if ((sVar15 == 5) || (sVar15 == 1)) goto switchD_0040dd04_caseD_42e;
    if (sVar15 == 4) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar6 = GetDlgItem(param_1,0x430);
      local_970 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar6 = GetDlgItem(param_1,0x443);
      LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (*(int *)((int)this + 0x5c) == 2) {
        local_970 = local_970 + 2;
      }
      FUN_0040d9b0(param_1,0x43c,0x419,0,local_970,LVar7);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf0;
      pHVar6 = GetDlgItem(param_1,0x427);
      LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (LVar7 == 1) {
        pHVar6 = GetDlgItem(param_1,0x43c);
        GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
        fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
        if ((float10)_DAT_00476e10 < fVar21) {
          LVar27 = 0;
          WVar24 = 0;
          UVar22 = 0xf1;
          pHVar6 = GetDlgItem(param_1,0x427);
          SendMessageA(pHVar6,UVar22,WVar24,LVar27);
          return 0;
        }
      }
    }
    break;
  case 0x43f:
    if (sVar15 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar15 != 0x200) {
      return 0;
    }
    pHVar6 = GetDlgItem(param_1,0x43f);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    iVar25 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    if (iVar25 < 0x20) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = iVar25 + 0xfU & 0xfffffff0;
    }
    FUN_0042f8b0(uVar5,local_940,0);
    SetWindowTextA(pHVar6,(LPCSTR)local_940);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (LVar7 != 1) {
      return 0;
    }
    pHVar6 = GetDlgItem(param_1,0x436);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    local_968[0] = (HWND)FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    pHVar6 = GetDlgItem(param_1,0x435);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    fVar21 = FUN_00430830((LPCSTR)local_940,(undefined4 *)0x0);
    if (0x240 < (int)uVar5) goto LAB_0040f2aa;
    puVar11 = (undefined1 *)(uVar5 + 0xf + ((int)(uVar5 + 0xf) >> 0x1f & 0xfU));
    pHVar6 = local_968[0];
LAB_0040f275:
    puVar10 = (undefined1 *)((int)&pHVar6[3].unused + 3);
    local_958 = (HWND)(((int)puVar11 >> 4) * ((int)(puVar10 + ((int)puVar10 >> 0x1f & 0xf)) >> 4));
    if ((0x18c < (int)local_958) || ((float10)_DAT_00476eb8 < (float10)(int)local_958 * fVar21)) {
LAB_0040f2aa:
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf1;
      pHVar6 = GetDlgItem(param_1,0x427);
      SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      return 0;
    }
    break;
  case 0x441:
    if (sVar15 == 1) {
      pHVar6 = GetDlgItem(param_1,0x443);
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar12 = GetDlgItem(param_1,0x441);
      local_968[0] = (HWND)SendMessageA(pHVar12,UVar22,WVar24,LVar27);
      SendMessageA(pHVar6,0x14b,0,0);
      if (local_968[0] == (HWND)0x0) {
        pCVar14 = FUN_00419470(DAT_00487a6c,0x13ba);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        pCVar14 = FUN_00419470(DAT_00487a6c,0x13bb);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        uVar5 = 0x13bc;
LAB_0040f3ee:
        pCVar14 = FUN_00419470(DAT_00487a6c,uVar5);
        SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
        WVar24 = 2;
LAB_0040f409:
        SendMessageA(pHVar6,0x14e,WVar24,0);
      }
      else {
        if (local_968[0] == (HWND)0x1) {
          pCVar14 = FUN_00419470(DAT_00487a6c,0x13ba);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x13bb);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          pCVar14 = FUN_00419470(DAT_00487a6c,0x13bc);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          uVar5 = 0x13bd;
          goto LAB_0040f3ee;
        }
        if (local_968[0] == (HWND)0x2) {
          pCVar14 = FUN_00419470(DAT_00487a6c,0x13bd);
          SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
          WVar24 = 0;
          goto LAB_0040f409;
        }
      }
      *(undefined4 *)((int)local_960 + 0x24) = 1;
    }
  case 0x443:
    pvVar3 = local_960;
    if (sVar15 == 1) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0x147;
      pHVar6 = GetDlgItem(param_1,0x430);
      iVar25 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      if (*(int *)((int)pvVar3 + 0x5c) == 2) {
        iVar25 = iVar25 + 2;
      }
      if (iVar25 == 2) {
        LVar27 = 0;
        WVar24 = 0;
        UVar22 = 0x147;
        pHVar6 = GetDlgItem(param_1,0x441);
        LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
        if (-1 < LVar7) {
          if (LVar7 < 2) {
            LVar27 = 0;
            WVar24 = 0;
            UVar22 = 0x147;
            pHVar6 = GetDlgItem(param_1,0x443);
            local_96c = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
          }
          else if (LVar7 == 2) {
            local_96c = 3;
          }
        }
        pHVar6 = GetDlgItem(param_1,0x417);
        local_954 = (double)CONCAT44(local_954._4_4_,pHVar6);
        pHVar6 = GetDlgItem(param_1,0x41a);
        local_954 = (double)CONCAT44(pHVar6,(HWND)local_954);
        local_94c = GetDlgItem(param_1,0x419);
        local_948 = GetDlgItem(param_1,0x43c);
        puVar16 = &local_954;
        pCVar14 = local_900;
        local_968[0] = (HWND)0x4;
        do {
          pHVar6 = *(HWND *)puVar16;
          GetWindowTextA(pHVar6,pCVar14,0x40);
          SendMessageA(pHVar6,0x14b,0,0);
          pCVar14 = pCVar14 + 0x40;
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          local_968[0] = (HWND)((int)&local_968[0][-1].unused + 3);
        } while (local_968[0] != (HWND)0x0);
        local_968[0] = (HWND)0x0;
        switch(local_96c) {
        case 0:
          puVar16 = &local_954;
          iVar25 = 4;
          do {
            pHVar6 = *(HWND *)puVar16;
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122a);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122b);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122c);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            puVar16 = (undefined8 *)((int)puVar16 + 4);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          break;
        case 1:
          puVar16 = &local_954;
          iVar25 = 4;
          do {
            pHVar6 = *(HWND *)puVar16;
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122d);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122e);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x122f);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            puVar16 = (undefined8 *)((int)puVar16 + 4);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          break;
        case 2:
          puVar16 = &local_954;
          iVar25 = 4;
          do {
            pHVar6 = *(HWND *)puVar16;
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1230);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1231);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1232);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            puVar16 = (undefined8 *)((int)puVar16 + 4);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          break;
        case 3:
          puVar16 = &local_954;
          iVar25 = 4;
          do {
            pHVar6 = *(HWND *)puVar16;
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1233);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1234);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            pCVar14 = FUN_00419470(DAT_00487a6c,0x1235);
            SendMessageA(pHVar6,0x143,0,(LPARAM)pCVar14);
            puVar16 = (undefined8 *)((int)puVar16 + 4);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        puVar16 = &local_954;
        pCVar18 = local_900;
        iVar25 = 4;
        do {
          SetWindowTextA(*(HWND *)puVar16,pCVar18);
          pCVar18 = pCVar18 + 0x40;
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        FUN_0040d9b0(param_1,0x417,0,0,2,local_96c);
        FUN_0040d9b0(param_1,0x43c,0,0,2,local_96c);
        FUN_0040d9b0(param_1,0x41a,0,0x43c,2,local_96c);
        FUN_0040d9b0(param_1,0x419,0x41a,0x43c,2,local_96c);
        switch(local_96c) {
        case 0:
          iVar25 = *(int *)(local_95c + 0xe4);
          if (iVar25 < 10) {
            iVar25 = 10;
          }
          else if (0x255 < iVar25) {
            iVar25 = 0x255;
          }
          break;
        case 1:
          iVar25 = *(int *)(local_95c + 0xe4);
          if (iVar25 < 10) {
            iVar25 = 10;
          }
          else if (0x1c0 < iVar25) {
            iVar25 = 0x1c0;
          }
          break;
        case 2:
          iVar25 = *(int *)(local_95c + 0xe4);
          if (iVar25 < 10) {
            iVar25 = 10;
          }
          else if (0x70 < iVar25) {
            iVar25 = 0x70;
          }
          break;
        case 3:
          iVar25 = *(int *)(local_95c + 0xe4);
          if (iVar25 < 10) {
            iVar25 = 10;
          }
          else if (0x1d < iVar25) {
            iVar25 = 0x1d;
          }
          break;
        default:
          goto switchD_0040f748_default;
        }
        *(int *)(local_95c + 0xe4) = iVar25;
      }
switchD_0040f748_default:
      *(undefined4 *)((int)local_960 + 0x24) = 1;
      return 0;
    }
    break;
  case 0x471:
    if ((sVar15 == 5) || (sVar15 == 1)) goto switchD_0040dd04_caseD_42e;
    if (sVar15 != 4) {
      return 0;
    }
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x430);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (local_95c == 0) {
      return 0;
    }
    if (((LVar7 == 0) || (LVar7 == 1)) && (*(int *)((int)this + 0x5c) != 2)) {
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 0x14) {
        uVar5 = 0x14;
      }
      else if (0x7fe < (int)uVar5) {
        uVar5 = 0x7fe;
      }
      goto LAB_0041005b;
    }
    switch(*(undefined4 *)(local_95c + 0xfc)) {
    case 4:
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 0x14) {
        uVar5 = 0x14;
      }
      else if (0x4aa < (int)uVar5) {
        uVar5 = 0x4aa;
      }
      break;
    default:
      goto switchD_0040ff4d_caseD_5;
    case 6:
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 0x14) {
        uVar5 = 0x14;
      }
      else if (0x380 < (int)uVar5) {
        uVar5 = 0x380;
      }
      goto LAB_0041005b;
    case 8:
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 0x14) {
        uVar5 = 0x14;
      }
      else if (0xe0 < (int)uVar5) {
        uVar5 = 0xe0;
      }
      break;
    case 10:
      pHVar6 = GetDlgItem(param_1,0x471);
      GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
      uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
      if ((int)uVar5 < 0x14) {
        uVar5 = 0x14;
      }
      else if (0x3a < (int)uVar5) {
        uVar5 = 0x3a;
      }
LAB_0041005b:
      FUN_0042f8b0(uVar5,local_940,0);
      goto LAB_0041006d;
    }
    FUN_0042f8b0(uVar5,local_940,0);
LAB_0041006d:
    SetWindowTextA(pHVar6,(LPCSTR)local_940);
switchD_0040ff4d_caseD_5:
    pHVar6 = GetDlgItem(param_1,0x471);
    GetWindowTextA(pHVar6,(LPSTR)local_940,0x40);
    uVar5 = FUN_00430020((LPCSTR)local_940,(undefined4 *)0x0);
    uVar5 = uVar5 + (uVar5 & 1);
    FUN_0042f8b0(uVar5,local_940,0);
    SetWindowTextA(pHVar6,(LPCSTR)local_940);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x427);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if ((LVar7 == 1) && (0x28 < (int)uVar5)) {
      LVar27 = 0;
      WVar24 = 0;
      UVar22 = 0xf1;
      pHVar6 = GetDlgItem(param_1,0x427);
      SendMessageA(pHVar6,UVar22,WVar24,LVar27);
      return 0;
    }
    break;
  case 0x482:
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0x147;
    pHVar6 = GetDlgItem(param_1,0x430);
    LVar7 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x420);
    LVar8 = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    LVar27 = 0;
    WVar24 = 0;
    UVar22 = 0xf0;
    pHVar6 = GetDlgItem(param_1,0x482);
    bEnable = SendMessageA(pHVar6,UVar22,WVar24,LVar27);
    if (bEnable == 0) {
      pHVar6 = GetDlgItem(param_1,0x430);
      pcVar13 = EnableWindow_exref;
      EnableWindow(pHVar6,bEnable);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x433);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x435);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x427);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x431);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x436);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x43f);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x429);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x42b);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x441);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x443);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x445);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x481);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x420);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x417);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x421);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x439);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x43c);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x419);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x41a);
      EnableWindow(pHVar6,BVar28);
      if (*(int *)((int)local_960 + 0x5c) != 1) goto LAB_0040e07f;
      BVar28 = 0;
      pHVar6 = GetDlgItem(param_1,0x42e);
      EnableWindow(pHVar6,BVar28);
      uVar5 = 0;
      iVar25 = 0x471;
    }
    else {
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x427);
      pcVar13 = EnableWindow_exref;
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x431);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x430);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x433);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x435);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x436);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x43f);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x429);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x42b);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x441);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x443);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x445);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x481);
      EnableWindow(pHVar6,BVar28);
      if (*(int *)((int)local_960 + 0x5c) == 1) {
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x42e);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x471);
        EnableWindow(pHVar6,BVar28);
      }
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x420);
      EnableWindow(pHVar6,BVar28);
      BVar28 = 1;
      pHVar6 = GetDlgItem(param_1,0x421);
      EnableWindow(pHVar6,BVar28);
      if (*(int *)((int)local_960 + 0x5c) == 0) {
        if ((LVar7 == 0) || (LVar7 == 1)) {
          BVar28 = 0;
          pHVar6 = GetDlgItem(param_1,0x441);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 0;
          pHVar6 = GetDlgItem(param_1,0x443);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 0;
          pHVar6 = GetDlgItem(param_1,0x445);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 1;
        }
        else {
          BVar28 = 1;
          pHVar6 = GetDlgItem(param_1,0x441);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 1;
          pHVar6 = GetDlgItem(param_1,0x443);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 1;
          pHVar6 = GetDlgItem(param_1,0x445);
          EnableWindow(pHVar6,BVar28);
          BVar28 = 0;
        }
        pHVar6 = GetDlgItem(param_1,0x427);
        EnableWindow(pHVar6,BVar28);
      }
      if (LVar8 != 1) {
        BVar28 = 0;
        pHVar6 = GetDlgItem(param_1,0x417);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x439);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x43c);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x419);
        EnableWindow(pHVar6,BVar28);
      }
      else {
        BVar28 = 1;
        pHVar6 = GetDlgItem(param_1,0x417);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 0;
        pHVar6 = GetDlgItem(param_1,0x439);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 0;
        pHVar6 = GetDlgItem(param_1,0x43c);
        EnableWindow(pHVar6,BVar28);
        BVar28 = 0;
        pHVar6 = GetDlgItem(param_1,0x419);
        EnableWindow(pHVar6,BVar28);
      }
      uVar5 = (uint)(LVar8 != 1);
      iVar25 = 0x41a;
    }
    pHVar6 = GetDlgItem(param_1,iVar25);
    (*pcVar13)(pHVar6,uVar5);
LAB_0040e07f:
    *(undefined4 *)((int)local_960 + 0x24) = 1;
    return 0;
  }
  return 0;
}


