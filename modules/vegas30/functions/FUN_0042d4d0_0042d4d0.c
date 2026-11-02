/* Module: vegas30.exe
   Function: FUN_0042d4d0
   Address: 0042d4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d4d0(int param_1,HMENU param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  UINT UVar5;
  uint uVar6;
  uint uVar7;
  HWND pHVar8;
  int iVar9;
  int *piVar10;
  UINT UVar11;
  int iVar12;
  undefined4 uVar13;
  code *pcVar14;
  bool bVar15;
  longlong lVar16;
  uint local_130;
  int local_12c;
  uint local_128;
  int local_124;
  UINT local_120 [2];
  UINT local_114 [2];
  UINT local_10c;
  UINT local_108;
  CHAR local_104 [260];
  
  uVar3 = DAT_0064b138;
  local_130 = DAT_0064b138;
  uVar2 = FUN_0042e5c0(param_2);
  switch(uVar2) {
  case 0:
    iVar9 = FUN_0057cc00(0);
    EnableMenuItem(param_2,0xc609,(uint)(iVar9 != 0));
    iVar9 = Transport_IsRecording();
    DeleteMenu(param_2,0xc604,0);
    EnableMenuItem(param_2,0x9cb0,(uint)(iVar9 != 0));
    iVar12 = FUN_005b87b0(uVar3);
    iVar9 = 0;
    if (iVar12 != 0) {
      piVar10 = (int *)FUN_005b87b0(uVar3);
      iVar9 = *piVar10;
    }
    EnableMenuItem(param_2,0x9ca9,(uint)(iVar9 == 0));
    return;
  case 2:
    FUN_0042e650(param_1,param_2,uVar3);
    return;
  case 3:
    CheckMenuItem(param_2,0x9de9,(*(int *)(param_1 + 0x60) < 1) - 1 & 8);
    CheckMenuItem(param_2,0x9dee,-(uint)(DAT_0064b184 != 0) & 8);
    EnableMenuItem(param_2,0x9e35,0);
    CheckMenuItem(param_2,0x9e35,-(uint)(DAT_00647aa8 != 0) & 8);
    CheckMenuItem(param_2,0x9e36,-(uint)(DAT_00647aac != 0) & 8);
    CheckMenuItem(param_2,0xa770,-(uint)(DAT_00647ab0 != 0) & 8);
    CheckMenuItem(param_2,0x9ddd,-(uint)(*(int *)(param_1 + 0x74) != 0) & 8);
    CheckMenuItem(param_2,0x9ddb,-(uint)(*(int *)(param_1 + 0x6c) != 0) & 8);
    iVar9 = FUN_004f0490();
    EnableMenuItem(param_2,0x9ddb,(uint)(iVar9 == 0));
    CheckMenuItem(param_2,0x9ddc,-(uint)(*(int *)(param_1 + 0x70) != 0) & 8);
    CheckMenuItem(param_2,0x9de0,-(uint)(*(int *)(param_1 + 0x80) != 0) & 8);
    EnableMenuItem(param_2,0xa7a8,(uint)(*(int *)(param_1 + 0x74) == 0));
    if (*(int *)(param_1 + 0x74) != 0) {
      iVar9 = thunk_FUN_00574540();
      CheckMenuItem(param_2,0xa7a8,-(uint)(iVar9 != 0) & 8);
    }
    CheckMenuItem(param_2,0x9dde,-(uint)(*(int *)(param_1 + 0x78) != 0) & 8);
    CheckMenuItem(param_2,0x9ddf,-(uint)(*(int *)(param_1 + 0x7c) != 0) & 8);
    CheckMenuItem(param_2,0x9de4,-(uint)(*(int *)(param_1 + 0x90) != 0) & 8);
    CheckMenuItem(param_2,0x9de1,-(uint)(*(int *)(param_1 + 0x84) != 0) & 8);
    CheckMenuItem(param_2,0x9de2,-(uint)(*(int *)(param_1 + 0x88) != 0) & 8);
    CheckMenuItem(param_2,0x9de3,-(uint)(*(int *)(param_1 + 0x8c) != 0) & 8);
    if ((*(int *)(DAT_00647630 + 0xbc8) == 0) ||
       (iVar9 = FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8)), iVar9 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = _DAT_00000000;
      if (*(int *)(DAT_00647630 + 0xbc8) != 0) {
        puVar4 = (uint *)FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8));
        uVar3 = *puVar4;
      }
    }
    EnableMenuItem(param_2,0x9dd6,(uint)((int)uVar3 < 1));
    iVar9 = FUN_004c77d0(DAT_00647630);
    CheckMenuItem(param_2,0x9dd6,-(uint)(iVar9 != 0) & 8);
    iVar9 = FUN_005f3380();
    EnableMenuItem(param_2,0x9dd7,(uint)(iVar9 != 0));
    return;
  case 4:
    FUN_004220d0(param_2);
    EnableMenuItem(param_2,0xa7bc,1);
    if (DAT_0064b4e4 == 0) {
      iVar9 = FUN_00601ab0(local_114,&local_128,1);
      if (iVar9 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar6 = (local_128 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar6) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_114[0];
          DAT_0064b4e4 = uVar6;
        }
      }
    }
    if ((int)DAT_0064b4e4 < 0x21) {
LAB_0042df7e:
      UVar11 = 0;
    }
    else {
      if (DAT_0064b4e0 == 0) {
        iVar9 = FUN_00601ab0(local_120,&local_130,1);
        if (iVar9 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)(local_130 & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_120[0];
          DAT_0064b4e0 = local_130 & 0xff;
        }
      }
      if ((int)DAT_0064b4e0 < 0x21) goto LAB_0042df7e;
      uVar6 = FUN_005b8900(uVar3,3);
      uVar7 = FUN_005b87c0(3);
      if (uVar6 < uVar7) goto LAB_0042df7e;
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0x9d13,UVar11);
    if (DAT_0064b4e4 == 0) {
      iVar9 = FUN_00601ab0(local_114,&local_128,1);
      if (iVar9 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar6 = (local_128 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar6) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_114[0];
          DAT_0064b4e4 = uVar6;
        }
      }
    }
    if ((int)DAT_0064b4e4 < 0x21) {
LAB_0042e06e:
      UVar11 = 0;
    }
    else {
      if (DAT_0064b4e0 == 0) {
        iVar9 = FUN_00601ab0(local_120,&local_130,1);
        if (iVar9 < 0) {
          DAT_0064b4f0 = 1;
        }
        else if ((int)DAT_0064b4e0 <= (int)(local_130 & 0xff)) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_120[0];
          DAT_0064b4e0 = local_130 & 0xff;
        }
      }
      if ((int)DAT_0064b4e0 < 0x21) goto LAB_0042e06e;
      uVar6 = FUN_005b8900(uVar3,2);
      uVar7 = FUN_005b87c0(2);
      if (uVar6 < uVar7) goto LAB_0042e06e;
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0x9d12,UVar11);
    pHVar8 = GetFocus();
    iVar9 = FUN_0040c090(pHVar8);
    if (iVar9 != 0) {
      if (iVar9 == *(int *)(param_1 + 0xa8)) {
        FUN_00458260(DAT_00647630,local_114,&local_128);
        EnableMenuItem(param_2,0xa15b,(uint)(local_128 == 0 && local_124 == 0));
        piVar10 = (int *)FUN_005b87b0(uVar3);
        if (piVar10 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar10;
        }
        EnableMenuItem(param_2,0xa1d1,(uint)(iVar9 < 1));
        iVar12 = 0;
        UVar11 = 1;
        if (0 < iVar9) {
          piVar10 = (int *)piVar10[2];
          do {
            if (((*(byte *)(*piVar10 + 0x10) & 0x10) != 0) && (*(int *)(*piVar10 + 4) == 3)) {
              UVar11 = 0;
              break;
            }
            iVar12 = iVar12 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar12 < iVar9);
        }
        EnableMenuItem(param_2,0xa0a4,UVar11);
        EnableMenuItem(param_2,0xa0a5,UVar11);
        iVar9 = FUN_004bb6f0();
        EnableMenuItem(param_2,0xc61a,(uint)(iVar9 == 0));
        iVar9 = FUN_004bb4c0();
        EnableMenuItem(param_2,0xc618,(uint)(iVar9 == 0));
        return;
      }
      if (iVar9 == *(int *)(param_1 + 0x70)) {
        uVar2 = FUN_004e4c90();
        FUN_00458260(uVar2,local_114,&local_128);
        EnableMenuItem(param_2,0xa15b,(uint)(local_128 == 0 && local_124 == 0));
        iVar9 = FUN_004bb6f0();
        EnableMenuItem(param_2,0xc61a,(uint)(iVar9 == 0));
        iVar9 = FUN_004bb4c0();
        EnableMenuItem(param_2,0xc618,(uint)(iVar9 == 0));
        return;
      }
    }
    break;
  case 5:
    if (DAT_00647c18 != 0) {
      if (DAT_00647c18 == 1) {
        uVar2 = 0x4f32;
        uVar13 = 0x6e12;
      }
      else if (DAT_00647c18 == 2) {
        uVar2 = 0x4f33;
        uVar13 = 0x6e13;
      }
      else {
        uVar2 = 0x4f34;
        uVar13 = 0x6e14;
      }
      _SfLoadString_16(DAT_00647204,uVar2,local_104,0x104);
      _SfStringReplaceChars_12(local_104,9,8);
      _SfStringReplaceChars_12(local_104,8,8);
      ModifyMenuA(param_2,0xa778,0,0xa778,local_104);
      _SfLoadString_16(DAT_00647204,uVar13,local_104,0x104);
      _SfStringReplaceChars_12(local_104,9,8);
      _SfStringReplaceChars_12(local_104,8,8);
      ModifyMenuA(param_2,0xa7f6,0,0xa7f6,local_104);
    }
    iVar9 = FUN_0042e540();
    local_12c = FUN_00469260(DAT_00647630);
    if ((*(int *)(DAT_00647630 + 0xbc8) == 0) ||
       (iVar12 = FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8)), iVar12 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = _DAT_00000000;
      if (*(int *)(DAT_00647630 + 0xbc8) != 0) {
        puVar4 = (uint *)FUN_005b87b0(*(int *)(DAT_00647630 + 0xbc8));
        uVar3 = *puVar4;
      }
    }
    uVar6 = local_130;
    local_114[0] = FUN_005b8900(local_130,3);
    local_128 = FUN_005b8900(uVar6,2);
    local_120[0] = 1;
    local_10c = 1;
    UVar11 = 1;
    local_108 = 1;
    if (iVar9 != 0) {
      local_120[0] = (UINT)(*(int *)(iVar9 + 4) != 2);
      local_10c = (UINT)(*(int *)(iVar9 + 4) != 3);
    }
    if ((0 < local_12c) && (0 < local_12c)) {
      piVar10 = *(int **)(*(int *)(DAT_00647630 + 0xcd0) + 8);
      iVar12 = local_12c;
      do {
        iVar1 = *piVar10;
        if (iVar1 != 0) {
          if ((*(int *)(iVar1 + 4) == 2) && (*(int *)(iVar1 + 0x50) != 0)) {
            UVar11 = 0;
          }
          else if (*(int *)(iVar1 + 4) == 3) {
            local_108 = 0;
          }
        }
        piVar10 = piVar10 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    UVar5 = UVar11;
    if (local_12c != 1) {
      UVar5 = 1;
    }
    EnableMenuItem(param_2,0xa778,UVar5);
    UVar5 = UVar11;
    if (local_12c != 1) {
      UVar5 = 1;
    }
    EnableMenuItem(param_2,0xa7f6,UVar5);
    EnableMenuItem(param_2,0xa7f3,UVar11);
    UVar11 = local_120[0];
    if ((int)uVar3 < 1) {
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0xa7f4,UVar11);
    iVar12 = local_12c;
    UVar11 = 1;
    if (iVar9 != 0) {
      UVar11 = (UINT)(*(int *)(iVar9 + 4) != 3);
    }
    if (DAT_00647e30 == 1) {
      if (local_12c != 1) {
        UVar11 = 1;
      }
      EnableMenuItem(param_2,0x146b,UVar11);
    }
    else {
      local_120[0] = 0x146b;
      local_120[1] = 0;
      _SfCullMenu_16(param_2,local_120,2,1);
      _SfCleanMenu_12(param_2,0,0xffffffff);
      iVar12 = local_12c;
    }
    UVar11 = local_108;
    if (iVar12 != 1) {
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0xa782,UVar11);
    UVar11 = local_108;
    if (iVar12 != 1) {
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0xa781,UVar11);
    UVar11 = local_114[0];
    UVar5 = local_10c;
    if ((int)local_114[0] < 1) {
      UVar5 = 1;
    }
    EnableMenuItem(param_2,0xc57e,UVar5);
    UVar5 = local_10c;
    if ((int)UVar11 < 1) {
      UVar5 = 1;
    }
    EnableMenuItem(param_2,0xc58b,UVar5);
    lVar16 = FUN_005b8d80(local_130);
    if (((int)uVar3 < 1) || (lVar16 == 0)) {
      UVar11 = 1;
    }
    else {
      UVar11 = 0;
    }
    EnableMenuItem(param_2,0xa795,UVar11);
    if (DAT_0064b4e4 == 0) {
      iVar9 = FUN_00601ab0(local_120,&local_130,1);
      if (iVar9 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar6 = (local_130 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar6) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_120[0];
          DAT_0064b4e4 = uVar6;
        }
      }
    }
    uVar6 = uVar3;
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
      uVar6 = local_128;
    }
    UVar11 = (UINT)((int)uVar6 < 1);
    if (lVar16 == 0) {
      UVar11 = 1;
    }
    EnableMenuItem(param_2,0xa794,UVar11);
    uVar7 = (uint)((int)local_114[0] < 1);
    uVar6 = uVar7;
    if (lVar16 == 0) {
      uVar6 = 1;
    }
    EnableMenuItem(param_2,0xc87b,uVar6);
    iVar9 = FUN_004292f0();
    uVar6 = uVar7;
    if (iVar9 == 0) {
      uVar6 = 1;
    }
    EnableMenuItem(param_2,0xc882,uVar6);
    EnableMenuItem(param_2,0xc87c,uVar7);
    EnableMenuItem(param_2,0xa76f,uVar7);
    uVar6 = local_128;
    EnableMenuItem(param_2,0xa76e,(uint)((int)local_128 < 1));
    if (((int)uVar6 < 1) || (lVar16 == 0)) {
      UVar11 = 1;
    }
    else {
      UVar11 = 0;
    }
    EnableMenuItem(param_2,0xc621,UVar11);
    EnableMenuItem(param_2,0xc624,UVar11);
    EnableMenuItem(param_2,0xc626,UVar11);
    if ((0 < (int)uVar3) && (lVar16 != 0)) {
      EnableMenuItem(param_2,0xc622,0);
      EnableMenuItem(param_2,0xc625,0);
      return;
    }
    EnableMenuItem(param_2,0xc622,1);
    EnableMenuItem(param_2,0xc625,1);
    return;
  case 6:
    FUN_005fc980(param_2,0x9e5d,0x9e5f,0x9e5c);
    CheckMenuItem(param_2,0x9e37,-(uint)(DAT_006476b8 != 0) & 8);
    CheckMenuItem(param_2,0x9e38,-(uint)(DAT_006476bc != 0) & 8);
    CheckMenuItem(param_2,0xc617,-(uint)(DAT_006476c0 != 0) & 8);
    CheckMenuItem(param_2,0x9e39,-(uint)(DAT_006476c4 != 0) & 8);
    bVar15 = DAT_006476b8 == 0;
    EnableMenuItem(param_2,0x9e38,(uint)bVar15);
    EnableMenuItem(param_2,0x9e39,(uint)bVar15);
    CheckMenuItem(param_2,0xa7b2,-(uint)(DAT_00649420 != 0) & 8);
    CheckMenuItem(param_2,0xc4f4,-(uint)(DAT_00649ce4 != 0) & 8);
    CheckMenuItem(param_2,0x9d21,-(uint)(DAT_0064778c != 0) & 8);
    CheckMenuItem(param_2,0x9d1f,-(uint)(DAT_00647788 != 0) & 8);
    CheckMenuItem(param_2,0x9d20,-(uint)(DAT_00647784 != 0) & 8);
    iVar9 = FUN_004584d0(DAT_00647630);
    CheckMenuItem(param_2,0x9d7a,-(uint)(iVar9 != 0) & 8);
    iVar9 = DAT_00648838;
    CheckMenuItem(param_2,0xa76f,0);
    CheckMenuItem(param_2,0xa76e,0);
    CheckMenuItem(param_2,0xa76f,(iVar9 != 2) - 1 & 8);
    CheckMenuItem(param_2,0xa76e,(iVar9 != 3) - 1 & 8);
    return;
  case 7:
    CheckMenuItem(param_2,0xa7b9,DAT_0064761c >> 10 & 8);
    iVar9 = FUN_0043d030();
    EnableMenuItem(param_2,0xa7ac,(uint)(iVar9 == 0));
    EnableMenuItem(param_2,0x9fd3,(uint)(DAT_0064b4f0 != 0));
    iVar9 = FUN_0043d030();
    if ((iVar9 == 0) && (DAT_0064b4f0 == 0)) {
      UVar11 = 1;
    }
    else {
      UVar11 = 0;
    }
    EnableMenuItem(param_2,0x9fd4,UVar11);
    iVar9 = 0;
    if (DAT_0064b4f0 == 0) {
      iVar9 = FUN_00605ae0(DAT_0064b4f8);
    }
    iVar12 = FUN_006004b0();
    if (iVar9 != 0) {
      _SfLoadString_16(DAT_00647204,0x5050,local_104,0x100);
      ModifyMenuA(param_2,0x9fd3,0,0x9fd3,local_104);
    }
    if (iVar12 != 0) {
      _SfCullMenu_16(param_2,&DAT_0063dc10,4,1);
    }
    EnableMenuItem(param_2,0xc5f5,DAT_0064761c >> 0xe & 1);
    break;
  case 0xb:
    iVar9 = 0;
    piVar10 = &DAT_00610810;
    do {
      if ((DAT_006476c8 == *piVar10) && (DAT_006476cc == piVar10[1])) break;
      piVar10 = piVar10 + 2;
      iVar9 = iVar9 + 1;
    } while (piVar10 < "Samples");
    CheckMenuRadioItem(param_2,0x9e3e,0x9e4e,iVar9 + 0x9e3e,0);
    return;
  case 0xc:
    CheckMenuRadioItem(param_2,0x9e66,0x9e77,DAT_0064b110 + 0x9e66,0);
    return;
  case 0xd:
    iVar9 = FUN_004590e0(DAT_00647630);
    CheckMenuRadioItem(param_2,0x9d23,0x9d26,iVar9 + 0x9d23,0);
    return;
  case 0xe:
    FUN_0042ee10(param_1,param_2,uVar3);
    return;
  case 0xf:
    FUN_0042f020(param_1,param_2,uVar3);
    return;
  case 0x11:
    iVar9 = FUN_0042e540();
    if ((iVar9 != 0) && (*(int *)(iVar9 + 4) == 2)) {
      piVar10 = (int *)FUN_005b87b0(uVar3);
      iVar9 = FUN_004ca930(DAT_00647630);
      if (piVar10 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar10;
      }
      if ((iVar9 < 0) || (iVar12 + -1 < iVar9)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(piVar10[2] + iVar9 * 4);
      }
      EnableMenuItem(param_2,0xa2b2,0);
      EnableMenuItem(param_2,0xa2b3,0);
      FUN_004c6bc0(DAT_00647630,uVar2,param_2,0);
      return;
    }
    CheckMenuItem(param_2,0xa2b2,0);
    CheckMenuItem(param_2,0xa2b3,0);
    EnableMenuItem(param_2,0xa2b2,1);
    EnableMenuItem(param_2,0xa2b3,1);
    return;
  case 0x12:
    iVar9 = FUN_0042e540();
    if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 3)) {
      CheckMenuItem(param_2,0xa348,0);
      CheckMenuItem(param_2,0xa349,0);
      pcVar14 = EnableMenuItem_exref;
      EnableMenuItem(param_2,0xa348,1);
      EnableMenuItem(param_2,0xa349,1);
    }
    else {
      piVar10 = (int *)FUN_005b87b0(uVar3);
      iVar9 = FUN_004ca930(DAT_00647630);
      pcVar14 = EnableMenuItem_exref;
      if (piVar10 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar10;
      }
      if ((iVar9 < 0) || (iVar12 + -1 < iVar9)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(piVar10[2] + iVar9 * 4);
      }
      EnableMenuItem(param_2,0xa348,0);
      EnableMenuItem(param_2,0xa349,0);
      FUN_004c6b60(DAT_00647630,uVar2,param_2,0);
    }
    iVar9 = FUN_00469260(DAT_00647630);
    if (((0 < iVar9) && (iVar9 = **(int **)(*(int *)(DAT_00647630 + 0xcd0) + 8), iVar9 != 0)) &&
       (*(int *)(iVar9 + 4) == 3)) {
      (*pcVar14)(param_2,0xa7bd,0);
      (*pcVar14)(param_2,0xa7bf,0);
      iVar12 = FUN_0047c7d0(iVar9 + 0x98,0xc9);
      CheckMenuItem(param_2,0xa7bd,-(uint)(iVar12 != 0) & 8);
      iVar9 = FUN_0047c7d0(iVar9 + 0x98,0xca);
      CheckMenuItem(param_2,0xa7bf,-(uint)(iVar9 != 0) & 8);
      return;
    }
    CheckMenuItem(param_2,0xa7bd,0);
    CheckMenuItem(param_2,0xa7bf,0);
    (*pcVar14)(param_2,0xa7bd,1);
    (*pcVar14)(param_2,0xa7bf,1);
    return;
  }
  return;
}


