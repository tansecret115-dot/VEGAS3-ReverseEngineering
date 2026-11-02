/* Module: vegas30.exe
   Function: FUN_00571020
   Address: 00571020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00571020(int param_1,undefined4 param_2,HDC param_3,int *param_4,COLORREF param_5)

{
  LPRECT ptVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  BOOL BVar13;
  int iVar14;
  HGDIOBJ h;
  UINT align;
  DWORD DVar15;
  UINT UVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  RECT *lprc;
  bool bVar21;
  ulong uVar22;
  char *pcVar23;
  undefined *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  undefined1 *puVar28;
  int *piVar29;
  INT *pIVar30;
  int local_4c;
  int *local_48;
  int local_3c;
  HGDIOBJ local_38;
  int local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  RECT local_20;
  undefined1 local_10 [4];
  int local_c;
  
  piVar6 = *(int **)(param_1 + 0x2b0);
  if (piVar6 == (int *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *piVar6;
  }
  if (((int)param_5 < 0) || (iVar17 + -1 < (int)param_5)) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(piVar6[2] + param_5 * 4);
  }
  if (iVar17 == 0) {
    return;
  }
  iVar10 = *(int *)(iVar17 + 8);
  if (iVar10 == 5) {
    return;
  }
  if (((DAT_006487f8 == 0) || (iVar10 != 4)) && (iVar10 != 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  uVar2 = *(uint *)(iVar17 + 0xc);
  *(uint *)(iVar17 + 0xc) = uVar5 << 3 | uVar2 & 0xfffffff7;
  if ((*(int *)(iVar17 + 0x340) != 0) && ((uVar2 >> 5 & 1) != uVar5)) {
    _FaderInst_Deinit_4(*(int *)(iVar17 + 0x340));
    *(undefined4 *)(iVar17 + 0x340) = 0;
  }
  if (((*(int *)(iVar17 + 8) == 2) && (*(int *)(iVar17 + 0x6e8) != 0)) &&
     ((*(uint *)(iVar17 + 0xc) >> 5 & 1) != uVar5)) {
    _FaderInst_Deinit_4(*(int *)(iVar17 + 0x6e8));
    *(undefined4 *)(iVar17 + 0x6e8) = 0;
  }
  FUN_00570bd0(iVar17,param_5,uVar5);
  if ((*(int *)(iVar17 + 8) == 2) && (*(int *)(iVar17 + 0x818) == 0)) {
    if (*(int *)(iVar17 + 0x470) == 0) {
      *(uint *)(iVar17 + 0xc) = *(uint *)(iVar17 + 0xc) | 0x10;
      *(int *)(iVar17 + 0x470) = iVar17 + 0x474;
      *(undefined4 *)(iVar17 + 0x2b8) = 0;
      *(undefined4 *)(iVar17 + 700) = 0;
      *(undefined4 *)(iVar17 + 0x2c0) = 0;
      *(undefined4 *)(iVar17 + 0x2c4) = 0;
      _MeterInst_Init_20(*(undefined4 *)(iVar17 + 0x470),DAT_0064945c | 0x400030bd,
                         (undefined4 *)(iVar17 + 0x2b8),*(undefined4 *)(param_1 + 0x24),param_5);
      _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x613,0x10000,2);
      _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x60d,0x10000,0x100000);
      _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x60f,0,*(undefined4 *)(param_1 + 700));
      _MeterInst_Message_16
                (*(undefined4 *)(iVar17 + 0x470),0x61d,0,*(uint *)(iVar17 + 0xc) >> 2 & 1);
    }
    *(uint *)(iVar17 + 0xc) = *(uint *)(iVar17 + 0xc) | 0x10;
    *(int *)(iVar17 + 0x818) = iVar17 + 0x81c;
    *(undefined4 *)(iVar17 + 0x6d8) = 0;
    *(undefined4 *)(iVar17 + 0x6dc) = 0;
    *(undefined4 *)(iVar17 + 0x6e0) = 0;
    *(undefined4 *)(iVar17 + 0x6e4) = 0;
    _MeterInst_Init_20(*(undefined4 *)(iVar17 + 0x818),DAT_0064945c | 0x400030bd,
                       (undefined4 *)(iVar17 + 0x6d8),*(undefined4 *)(param_1 + 0x24),param_5);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x818),0x613,0x10000,2);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x818),0x60d,0x10000,0x100000);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x818),0x60f,0,*(undefined4 *)(param_1 + 700));
    uVar5 = *(uint *)(iVar17 + 0xc);
    uVar7 = *(undefined4 *)(iVar17 + 0x818);
LAB_00571332:
    _MeterInst_Message_16(uVar7,0x61d,0,uVar5 >> 2 & 1);
  }
  else if (*(int *)(iVar17 + 0x470) == 0) {
    *(uint *)(iVar17 + 0xc) = *(uint *)(iVar17 + 0xc) | 0x10;
    *(int *)(iVar17 + 0x470) = iVar17 + 0x474;
    uVar5 = DAT_0064945c;
    *(undefined4 *)(iVar17 + 0x2b8) = 0;
    *(undefined4 *)(iVar17 + 700) = 0;
    *(undefined4 *)(iVar17 + 0x2c0) = 0;
    *(undefined4 *)(iVar17 + 0x2c4) = 0;
    _MeterInst_Init_20(*(undefined4 *)(iVar17 + 0x470),uVar5 | 0x400030bd,
                       (undefined4 *)(iVar17 + 0x2b8),*(undefined4 *)(param_1 + 0x24),param_5);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x613,0x10000,2);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x60d,0x10000,0x100000);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x60f,0,*(undefined4 *)(param_1 + 700));
    uVar5 = *(uint *)(iVar17 + 0xc);
    uVar7 = *(undefined4 *)(iVar17 + 0x470);
    goto LAB_00571332;
  }
  piVar6 = (int *)_SfGetUIFontSize_4(100);
  local_28 = *piVar6;
  local_24 = piVar6[1];
  puVar28 = local_30;
  uVar27 = 0xffffffff;
  pcVar23 = "-72.0";
  uVar7 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar7,pcVar23,uVar27,puVar28);
  iVar8 = *(int *)(param_1 + 0x2a8) + 4;
  iVar9 = *(int *)(param_1 + 0x2ac) + 2;
  iVar10 = param_4[1];
  iVar14 = param_4[2];
  iVar19 = *param_4 + 2;
  iVar20 = param_4[3] + -2;
  if ((*(int *)(iVar17 + 8) == 4) || (*(int *)(iVar17 + 8) != 2)) {
    local_38 = DAT_0064b448;
    local_34 = DAT_0064b44c;
  }
  else {
    local_38 = DAT_0064b458;
    local_34 = DAT_0064b45c;
  }
  *(int *)(iVar17 + 0x228) = iVar19;
  *(int *)(iVar17 + 0x22c) = iVar10 + 2;
  *(int *)(iVar17 + 0x230) = iVar14 + -2;
  iVar10 = local_34 + iVar10 + 5;
  *(int *)(iVar17 + 0x234) = iVar10;
  if (iVar20 < iVar10) {
    *(undefined4 *)(iVar17 + 0x228) = 0;
    *(undefined4 *)(iVar17 + 0x22c) = 0;
    *(undefined4 *)(iVar17 + 0x230) = 0;
    *(undefined4 *)(iVar17 + 0x234) = 0;
  }
  if ((DAT_006491fc == 0) || ((*(int *)(iVar17 + 8) != 3 && (*(int *)(iVar17 + 8) != 2)))) {
    *(undefined4 *)(iVar17 + 0x238) = 0;
    *(undefined4 *)(iVar17 + 0x23c) = 0;
    *(undefined4 *)(iVar17 + 0x240) = 0;
    *(undefined4 *)(iVar17 + 0x244) = 0;
  }
  else {
    *(int *)(iVar17 + 0x238) = iVar19;
    *(int *)(iVar17 + 0x23c) = iVar10;
    iVar10 = iVar10 + local_24;
    *(int *)(iVar17 + 0x244) = iVar10;
    *(int *)(iVar17 + 0x240) = iVar14 + -2;
  }
  if (*(int *)(iVar17 + 8) == 1) {
    lVar11 = Mixer_GetNumHardwareBuses((ISFMixer *)0x0);
    if (lVar11 < 2) {
      *(undefined4 *)(iVar17 + 0x278) = 0;
      *(undefined4 *)(iVar17 + 0x27c) = 0;
      *(undefined4 *)(iVar17 + 0x280) = 0;
      *(undefined4 *)(iVar17 + 0x284) = 0;
    }
    else {
      *(int *)(iVar17 + 0x27c) = iVar10;
      *(int *)(iVar17 + 0x284) = iVar10 + iVar8;
      *(int *)(iVar17 + 0x278) = iVar19;
      *(int *)(iVar17 + 0x280) = iVar19 + iVar8;
    }
    *(undefined4 *)(iVar17 + 0x248) = 0;
    *(undefined4 *)(iVar17 + 0x24c) = 0;
    *(undefined4 *)(iVar17 + 0x250) = 0;
    *(undefined4 *)(iVar17 + 0x254) = 0;
LAB_00571573:
    *(undefined4 *)(iVar17 + 600) = 0;
    *(undefined4 *)(iVar17 + 0x25c) = 0;
    *(undefined4 *)(iVar17 + 0x260) = 0;
    *(undefined4 *)(iVar17 + 0x264) = 0;
LAB_0057158b:
    *(undefined4 *)(iVar17 + 0x268) = 0;
    *(undefined4 *)(iVar17 + 0x26c) = 0;
    *(undefined4 *)(iVar17 + 0x270) = 0;
    *(undefined4 *)(iVar17 + 0x274) = 0;
    *(undefined4 *)(iVar17 + 0x288) = 0;
    *(undefined4 *)(iVar17 + 0x28c) = 0;
    *(undefined4 *)(iVar17 + 0x290) = 0;
    *(undefined4 *)(iVar17 + 0x294) = 0;
    *(undefined4 *)(iVar17 + 0x2d8) = 0;
    *(undefined4 *)(iVar17 + 0x2dc) = 0;
    *(undefined4 *)(iVar17 + 0x2e0) = 0;
    *(undefined4 *)(iVar17 + 0x2e4) = 0;
    *(undefined4 *)(iVar17 + 0x2f8) = 0;
    *(undefined4 *)(iVar17 + 0x2fc) = 0;
    *(undefined4 *)(iVar17 + 0x300) = 0;
    *(undefined4 *)(iVar17 + 0x304) = 0;
LAB_005717db:
    *(undefined4 *)(iVar17 + 0x308) = 0;
    *(undefined4 *)(iVar17 + 0x30c) = 0;
    *(undefined4 *)(iVar17 + 0x310) = 0;
    *(undefined4 *)(iVar17 + 0x314) = 0;
  }
  else {
    *(undefined4 *)(iVar17 + 0x278) = 0;
    *(undefined4 *)(iVar17 + 0x27c) = 0;
    *(undefined4 *)(iVar17 + 0x280) = 0;
    *(undefined4 *)(iVar17 + 0x284) = 0;
    *(int *)(iVar17 + 0x24c) = iVar10;
    if (*(int *)(iVar17 + 8) == 3) {
      iVar14 = iVar10 + iVar9;
      *(int *)(iVar17 + 0x254) = iVar14;
      *(int *)(iVar17 + 0x248) = iVar19;
      iVar19 = iVar19 + iVar8;
      *(int *)(iVar17 + 0x250) = iVar19;
      if (iVar20 < iVar14) {
        *(undefined4 *)(iVar17 + 0x248) = 0;
        *(undefined4 *)(iVar17 + 0x24c) = 0;
        *(undefined4 *)(iVar17 + 0x250) = 0;
        *(undefined4 *)(iVar17 + 0x254) = 0;
      }
      *(int *)(iVar17 + 0x25c) = iVar10;
      *(int *)(iVar17 + 600) = iVar19;
      *(int *)(iVar17 + 0x264) = iVar14;
      *(int *)(iVar17 + 0x260) = iVar19 + iVar8;
      if (iVar20 < iVar14) goto LAB_00571573;
      goto LAB_0057158b;
    }
    *(int *)(iVar17 + 0x254) = iVar8 + iVar10;
    *(int *)(iVar17 + 0x248) = iVar19;
    iVar19 = iVar19 + iVar8;
    *(int *)(iVar17 + 0x250) = iVar19;
    if (iVar20 < iVar8 + iVar10) {
      *(undefined4 *)(iVar17 + 0x248) = 0;
      *(undefined4 *)(iVar17 + 0x24c) = 0;
      *(undefined4 *)(iVar17 + 0x250) = 0;
      *(undefined4 *)(iVar17 + 0x254) = 0;
    }
    *(int *)(iVar17 + 0x25c) = iVar10;
    iVar14 = iVar10 + iVar9;
    *(int *)(iVar17 + 0x264) = iVar14;
    *(int *)(iVar17 + 600) = iVar19;
    iVar19 = iVar19 + iVar8;
    *(int *)(iVar17 + 0x260) = iVar19;
    if (iVar20 < iVar14) {
      *(undefined4 *)(iVar17 + 600) = 0;
      *(undefined4 *)(iVar17 + 0x25c) = 0;
      *(undefined4 *)(iVar17 + 0x260) = 0;
      *(undefined4 *)(iVar17 + 0x264) = 0;
    }
    *(int *)(iVar17 + 0x26c) = iVar10;
    iVar12 = iVar8 + iVar19;
    *(int *)(iVar17 + 0x274) = iVar14;
    *(int *)(iVar17 + 0x268) = iVar19;
    *(int *)(iVar17 + 0x270) = iVar12;
    if (iVar20 < iVar14) {
      *(undefined4 *)(iVar17 + 0x268) = 0;
      *(undefined4 *)(iVar17 + 0x26c) = 0;
      *(undefined4 *)(iVar17 + 0x270) = 0;
      *(undefined4 *)(iVar17 + 0x274) = 0;
    }
    if (*(int *)(iVar17 + 8) != 2) {
      if (*(int *)(iVar17 + 8) != 4) goto LAB_005717f3;
      iVar19 = FUN_00568df0(iVar17);
      if (iVar19 == 0) {
        lVar11 = Mixer_GetNumHardwareBuses((ISFMixer *)0x0);
        if ((1 < lVar11) || (lVar11 = Mixer_GetNumMainBuses((ISFMixer *)0x0), 1 < lVar11)) {
          *(int *)(iVar17 + 0x27c) = iVar10;
          *(int *)(iVar17 + 0x284) = iVar14;
          *(int *)(iVar17 + 0x278) = iVar12;
          *(int *)(iVar17 + 0x280) = iVar12 + iVar8;
          if (iVar14 <= iVar20) goto LAB_005717db;
        }
LAB_005717c3:
        *(undefined4 *)(iVar17 + 0x278) = 0;
        *(undefined4 *)(iVar17 + 0x27c) = 0;
        *(undefined4 *)(iVar17 + 0x280) = 0;
        *(undefined4 *)(iVar17 + 0x284) = 0;
      }
      else {
        lVar11 = Mixer_GetNumHardwareBuses((ISFMixer *)0x0);
        if (lVar11 < 2) goto LAB_005717c3;
        *(int *)(iVar17 + 0x27c) = iVar10;
        *(int *)(iVar17 + 0x284) = iVar14;
        *(int *)(iVar17 + 0x278) = iVar12;
        *(int *)(iVar17 + 0x280) = iVar12 + iVar8;
        if (iVar20 < iVar14) goto LAB_005717c3;
      }
      goto LAB_005717db;
    }
    if (((0 < *(int *)(param_1 + 0x2b4)) && (*(int *)(param_1 + 0x2b4) < 4)) &&
       (lVar11 = Mixer_GetNumFXPortAssigments((ISFMixer *)0x0), 1 < lVar11)) {
      *(int *)(iVar17 + 0x28c) = iVar10;
      *(int *)(iVar17 + 0x288) = iVar12;
      *(int *)(iVar17 + 0x294) = iVar14;
      *(int *)(iVar17 + 0x290) = iVar12 + iVar8;
      if (iVar14 <= iVar20) goto LAB_005717f3;
    }
    *(undefined4 *)(iVar17 + 0x288) = 0;
    *(undefined4 *)(iVar17 + 0x28c) = 0;
    *(undefined4 *)(iVar17 + 0x290) = 0;
    *(undefined4 *)(iVar17 + 0x294) = 0;
  }
LAB_005717f3:
  iVar10 = iVar10 + 1 + iVar9;
  local_48 = (int *)(param_1 + 0x6d4);
  local_3c = *(int *)(param_1 + 0x6cc);
  if (*(int *)(param_1 + 0x6cc) <= *(int *)(param_1 + 0x6d4)) {
    local_3c = *(int *)(param_1 + 0x6d4);
  }
  if ((*(uint *)(iVar17 + 0xc) & 0x20) == 0) {
    iVar14 = *(int *)(param_1 + 0x6e4);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x6dc);
    local_48 = (int *)(param_1 + 0x6cc);
  }
  if (*(int *)(iVar17 + 8) == 2) {
    local_38 = (HGDIOBJ)(*(int *)(param_1 + 0x2d4) + *param_4 + 4 + *(int *)(param_1 + 0x2d0));
    *(int *)(iVar17 + 0x6d8) = (int)local_38;
    iVar19 = _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x61a,0,0);
    *(int *)(iVar17 + 0x6e0) = iVar19 + (int)local_38;
    *(int *)(iVar17 + 0x6e4) = iVar20 - local_2c;
    *(int *)(iVar17 + 0x6dc) = iVar10;
    *(int *)(param_1 + 0x2ec) = (int)local_38 - *param_4;
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar17 + 0x6dc);
    _MeterInst_Move_8(*(undefined4 *)(iVar17 + 0x818),(int *)(iVar17 + 0x6d8));
    piVar6 = (int *)(iVar17 + 0x2b8);
    *(int *)(iVar17 + 0x2c0) = param_4[2] + -2;
    iVar19 = _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x61a,0,0);
    iVar19 = *(int *)(iVar17 + 0x2c0) - iVar19;
    *(int *)(iVar17 + 700) = iVar10;
    *piVar6 = iVar19;
    *(int *)(iVar17 + 0x2c4) = iVar20 - local_2c;
    *(int *)(param_1 + 0x2e4) = iVar19 - *param_4;
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar17 + 700);
    _MeterInst_Move_8(*(undefined4 *)(iVar17 + 0x470),piVar6);
    *(undefined4 *)(iVar17 + 0x6a8) = *(undefined4 *)(iVar17 + 0x6d8);
    *(undefined4 *)(iVar17 + 0x6b0) = *(undefined4 *)(iVar17 + 0x6e0);
    *(int *)(iVar17 + 0x6b4) = iVar20;
    *(int *)(iVar17 + 0x6ac) = iVar20 - local_2c;
    if (iVar20 - local_2c <= *(int *)(iVar17 + 0x6dc) + -4) {
      *(undefined4 *)(iVar17 + 0x6a8) = 0;
      *(undefined4 *)(iVar17 + 0x6ac) = 0;
      *(undefined4 *)(iVar17 + 0x6b0) = 0;
      *(undefined4 *)(iVar17 + 0x6b4) = 0;
    }
    *(int *)(iVar17 + 0x298) = *piVar6;
    *(int *)(iVar17 + 0x2a4) = iVar20;
    *(int *)(iVar17 + 0x2a0) = *(int *)(iVar17 + 0x2c0) + -1;
    *(int *)(iVar17 + 0x29c) = iVar20 - local_2c;
    if (iVar20 - local_2c <= *(int *)(iVar17 + 700) + -4) {
      *(undefined4 *)(iVar17 + 0x298) = 0;
      *(undefined4 *)(iVar17 + 0x29c) = 0;
      *(undefined4 *)(iVar17 + 0x2a0) = 0;
      *(undefined4 *)(iVar17 + 0x2a4) = 0;
    }
    piVar29 = &local_28;
    uVar27 = 0xffffffff;
    puVar24 = &DAT_0061b7cc;
    uVar7 = _SfGetUIFont_4(0x6e);
    _SfGetTextExtent_16(uVar7,puVar24,uVar27,piVar29);
    local_4c = local_28;
    if (local_28 <= *local_48) {
      local_4c = *local_48;
    }
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x818),0x61c,2,local_10);
    iVar10 = *(int *)(iVar17 + 0x6dc) + -1 + local_c;
    *(int *)(iVar17 + 0x324) = iVar10;
    *(int *)(iVar17 + 0x31c) = iVar10 - local_24;
    iVar10 = (*(int *)(param_1 + 0x2d4) - local_4c) / 2 + *param_4 + 2 + *(int *)(param_1 + 0x2d0);
    *(int *)(iVar17 + 0x318) = iVar10;
    *(int *)(iVar17 + 800) = iVar10 + local_4c;
    if (iVar20 < *(int *)(iVar17 + 0x324)) {
      *(undefined4 *)(iVar17 + 0x318) = 0;
      *(undefined4 *)(iVar17 + 0x31c) = 0;
      *(undefined4 *)(iVar17 + 800) = 0;
      *(undefined4 *)(iVar17 + 0x324) = 0;
    }
    local_38 = (HGDIOBJ)(iVar20 - iVar9);
    *(int *)(iVar17 + 0x314) = iVar20;
    *(HGDIOBJ *)(iVar17 + 0x30c) = local_38;
    iVar10 = (*(int *)(param_1 + 0x2d4) - iVar8) / 2 + *param_4 + 2 + *(int *)(param_1 + 0x2d0);
    *(int *)(iVar17 + 0x308) = iVar10;
    *(int *)(iVar17 + 0x310) = iVar10 + iVar8;
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x61c,2,local_10);
    iVar10 = local_c + -1 + *(int *)(iVar17 + 700);
    *(int *)(iVar17 + 0x334) = iVar10;
    *(int *)(iVar17 + 0x32c) = iVar10 - local_24;
    iVar10 = ((*(int *)(param_1 + 0x2d4) - local_4c) / 2 - *(int *)(param_1 + 0x2d4)) + -2 + *piVar6
    ;
    *(int *)(iVar17 + 0x328) = iVar10;
    *(int *)(iVar17 + 0x330) = iVar10 + local_4c;
    if (iVar20 < *(int *)(iVar17 + 0x334)) {
      *(undefined4 *)(iVar17 + 0x328) = 0;
      *(undefined4 *)(iVar17 + 0x32c) = 0;
      *(undefined4 *)(iVar17 + 0x330) = 0;
      *(undefined4 *)(iVar17 + 0x334) = 0;
    }
    *(HGDIOBJ *)(iVar17 + 0x2fc) = local_38;
    *(int *)(iVar17 + 0x304) = iVar20;
    piVar29 = (int *)(iVar17 + 0x6b8);
    iVar10 = ((*(int *)(param_1 + 0x2d4) - iVar8) / 2 - *(int *)(param_1 + 0x2d4)) + -2 + *piVar6;
    *(int *)(iVar17 + 0x2f8) = iVar10;
    *(int *)(iVar17 + 0x300) = iVar10 + iVar8;
    iVar10 = (*(int *)(param_1 + 0x2d4) - local_3c) / 2 + *param_4 + 2 + *(int *)(param_1 + 0x2d0);
    *piVar29 = iVar10;
    *(int *)(iVar17 + 0x6c0) = *local_48 + iVar10;
    *(int *)(iVar17 + 0x6bc) = *(int *)(iVar17 + 0x6dc) + *(int *)(param_1 + 0x2d8);
    iVar10 = *(int *)(iVar17 + 0x2a4) - *(int *)(param_1 + 0x2dc);
    *(int *)(iVar17 + 0x6c4) = iVar10;
    if (iVar10 - *(int *)(iVar17 + 0x6bc) < 0x1e) {
      *piVar29 = 0;
      *(undefined4 *)(iVar17 + 0x6bc) = 0;
      *(undefined4 *)(iVar17 + 0x6c0) = 0;
      *(undefined4 *)(iVar17 + 0x6c4) = 0;
      *(undefined4 *)(iVar17 + 0x6c8) = 0;
      *(undefined4 *)(iVar17 + 0x6cc) = 0;
      *(undefined4 *)(iVar17 + 0x6d0) = 0;
      *(undefined4 *)(iVar17 + 0x6d4) = 0;
      *(undefined4 *)(iVar17 + 0x308) = 0;
      *(undefined4 *)(iVar17 + 0x30c) = 0;
      *(undefined4 *)(iVar17 + 0x310) = 0;
      *(undefined4 *)(iVar17 + 0x314) = 0;
    }
    else {
      *(int *)(iVar17 + 0x6c8) = *piVar29;
      *(undefined4 *)(iVar17 + 0x6cc) = *(undefined4 *)(iVar17 + 0x6bc);
      *(undefined4 *)(iVar17 + 0x6d0) = *(undefined4 *)(iVar17 + 0x6c0);
      *(undefined4 *)(iVar17 + 0x6d4) = *(undefined4 *)(iVar17 + 0x6c4);
      *(int *)(iVar17 + 0x6cc) = *(int *)(iVar17 + 0x6cc) + local_48[1] / 2;
      *(int *)(iVar17 + 0x6d4) = *(int *)(iVar17 + 0x6d4) - local_48[1] / 2;
      iVar10 = *(int *)(iVar17 + 0x6c8) +
               ((*(int *)(iVar17 + 0x6c0) - *piVar29) / 2 - iVar14 / 2) + 1;
      *(int *)(iVar17 + 0x6c8) = iVar10;
      *(int *)(iVar17 + 0x6d0) = iVar10 + iVar14;
    }
    _FaderInst_Move_8(*(undefined4 *)(iVar17 + 0x6e8),piVar29);
    piVar29 = (int *)(iVar17 + 0x2a8);
    iVar10 = ((*(int *)(param_1 + 0x2d4) - local_3c) / 2 - *(int *)(param_1 + 0x2d4)) + -2 + *piVar6
    ;
    *piVar29 = iVar10;
    *(int *)(iVar17 + 0x2b0) = iVar10 + local_3c;
    *(int *)(iVar17 + 0x2ac) = *(int *)(iVar17 + 700) + *(int *)(param_1 + 0x2d8);
    iVar10 = *(int *)(iVar17 + 0x2a4) - *(int *)(param_1 + 0x2dc);
    *(int *)(iVar17 + 0x2b4) = iVar10;
    if (iVar10 - *(int *)(iVar17 + 0x2ac) < 0x1e) {
      *piVar29 = 0;
      *(undefined4 *)(iVar17 + 0x2ac) = 0;
      *(undefined4 *)(iVar17 + 0x2b0) = 0;
      *(undefined4 *)(iVar17 + 0x2b4) = 0;
      *(undefined4 *)(iVar17 + 0x2c8) = 0;
      *(undefined4 *)(iVar17 + 0x2cc) = 0;
      *(undefined4 *)(iVar17 + 0x2d0) = 0;
      *(undefined4 *)(iVar17 + 0x2d4) = 0;
      *(undefined4 *)(iVar17 + 0x2f8) = 0;
      *(undefined4 *)(iVar17 + 0x2fc) = 0;
      *(undefined4 *)(iVar17 + 0x300) = 0;
      *(undefined4 *)(iVar17 + 0x304) = 0;
      _FaderInst_Move_8(*(undefined4 *)(iVar17 + 0x340),piVar29);
    }
    else {
LAB_00571d7a:
      piVar6 = (int *)(iVar17 + 0x2a8);
      *(int *)(iVar17 + 0x2c8) = *piVar6;
      *(undefined4 *)(iVar17 + 0x2cc) = *(undefined4 *)(iVar17 + 0x2ac);
      *(undefined4 *)(iVar17 + 0x2d0) = *(undefined4 *)(iVar17 + 0x2b0);
      *(undefined4 *)(iVar17 + 0x2d4) = *(undefined4 *)(iVar17 + 0x2b4);
      *(int *)(iVar17 + 0x2cc) = *(int *)(iVar17 + 0x2cc) + local_48[1] / 2;
      *(int *)(iVar17 + 0x2d4) = *(int *)(iVar17 + 0x2d4) - local_48[1] / 2;
      iVar10 = *(int *)(iVar17 + 0x2c8) +
               ((*(int *)(iVar17 + 0x2b0) - *piVar6) / 2 - iVar14 / 2) + 1;
      *(int *)(iVar17 + 0x2c8) = iVar10;
      *(int *)(iVar17 + 0x2d0) = iVar10 + iVar14;
      _FaderInst_Move_8(*(undefined4 *)(iVar17 + 0x340),piVar6);
    }
  }
  else {
    piVar6 = (int *)(iVar17 + 0x2b8);
    iVar19 = param_4[2];
    *(int *)(iVar17 + 0x2c4) = iVar20 - local_2c;
    iVar19 = iVar19 + -2;
    *(int *)(iVar17 + 700) = iVar10;
    *(int *)(iVar17 + 0x2c0) = iVar19;
    iVar10 = _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x61a,0,0);
    iVar10 = iVar19 - iVar10;
    *piVar6 = iVar10;
    if (*(int *)(iVar17 + 8) == 3) {
      iVar19 = iVar19 - *(int *)(iVar17 + 0x33c);
      iVar12 = *param_4 + 2;
      if (iVar12 < iVar10) {
        if (iVar19 < iVar10) {
          *piVar6 = iVar10;
          goto LAB_00571ecd;
        }
LAB_00571e86:
        iVar12 = iVar19;
      }
      else if (iVar12 <= iVar19) goto LAB_00571e86;
      *piVar6 = iVar12;
    }
    else {
      local_3c = *param_4 + 4 + local_3c;
      iVar19 = iVar19 - *(int *)(iVar17 + 0x33c);
      if (local_3c < iVar10) {
        local_3c = iVar10;
      }
      if (local_3c <= iVar19) {
        local_3c = iVar19;
      }
      *piVar6 = local_3c;
      *(int *)(param_1 + 0x2e4) = local_3c - *param_4;
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar17 + 700);
    }
LAB_00571ecd:
    uVar5 = *(int *)(iVar17 + 0x2c0) - *piVar6 & 0x80000001;
    bVar21 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar21 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar21) {
      *piVar6 = *piVar6 + 1;
    }
    _MeterInst_Move_8(*(undefined4 *)(iVar17 + 0x470),piVar6);
    _MeterInst_Message_16(*(undefined4 *)(iVar17 + 0x470),0x61c,2,local_10);
    if (*(int *)(iVar17 + 8) != 1) {
      *(int *)(iVar17 + 0x304) = iVar20;
      *(int *)(iVar17 + 0x2fc) = iVar20 - iVar9;
      iVar10 = ((*(int *)(param_1 + 0x2d4) - iVar8) / 2 - *(int *)(param_1 + 0x2d4)) + -2 + *piVar6;
      *(int *)(iVar17 + 0x2f8) = iVar10;
      *(int *)(iVar17 + 0x300) = iVar10 + iVar8;
    }
    *(int *)(iVar17 + 0x298) = *piVar6;
    *(int *)(iVar17 + 0x2a4) = iVar20;
    *(int *)(iVar17 + 0x2a0) = *(int *)(iVar17 + 0x2c0) + -1;
    *(int *)(iVar17 + 0x29c) = iVar20 - local_2c;
    if (iVar20 - local_2c <= *(int *)(iVar17 + 700) + -4) {
      *(undefined4 *)(iVar17 + 0x298) = 0;
      *(undefined4 *)(iVar17 + 0x29c) = 0;
      *(undefined4 *)(iVar17 + 0x2a0) = 0;
      *(undefined4 *)(iVar17 + 0x2a4) = 0;
    }
    ptVar1 = (LPRECT)(iVar17 + 0x2a8);
    if (*(int *)(iVar17 + 0x340) == 0) {
      SetRectEmpty(ptVar1);
      *(undefined4 *)(iVar17 + 0x2f8) = 0;
      *(undefined4 *)(iVar17 + 0x2fc) = 0;
      *(undefined4 *)(iVar17 + 0x300) = 0;
      *(undefined4 *)(iVar17 + 0x304) = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0x2d4) - *local_48) / 2 + *(int *)(param_1 + 0x2d0) + 2 +
               *param_4;
      ptVar1->left = iVar10;
      *(int *)(iVar17 + 0x2b0) = iVar10 + *local_48;
      *(int *)(iVar17 + 0x2ac) = *(int *)(param_1 + 0x2d8) + *(int *)(iVar17 + 700);
      iVar10 = *(int *)(iVar17 + 0x2a4) - *(int *)(param_1 + 0x2dc);
      *(int *)(iVar17 + 0x2b4) = iVar10;
      if (0x1d < iVar10 - *(int *)(iVar17 + 0x2ac)) goto LAB_00571d7a;
      ptVar1->left = 0;
      *(undefined4 *)(iVar17 + 0x2ac) = 0;
      *(undefined4 *)(iVar17 + 0x2b0) = 0;
      *(undefined4 *)(iVar17 + 0x2b4) = 0;
      *(undefined4 *)(iVar17 + 0x2c8) = 0;
      *(undefined4 *)(iVar17 + 0x2cc) = 0;
      *(undefined4 *)(iVar17 + 0x2d0) = 0;
      *(undefined4 *)(iVar17 + 0x2d4) = 0;
      *(undefined4 *)(iVar17 + 0x2f8) = 0;
      *(undefined4 *)(iVar17 + 0x2fc) = 0;
      *(undefined4 *)(iVar17 + 0x300) = 0;
      *(undefined4 *)(iVar17 + 0x304) = 0;
      _FaderInst_Move_8(*(undefined4 *)(iVar17 + 0x340),ptVar1);
    }
  }
  lprc = (RECT *)(iVar17 + 0x238);
  BVar13 = IsRectEmpty(lprc);
  if (BVar13 != 0) {
    lprc = &local_20;
    local_20.top = *(LONG *)(iVar17 + 0x22c);
    local_20.left = *(LONG *)(iVar17 + 0x230);
    local_20.bottom = *(LONG *)(iVar17 + 0x234);
    local_20.right = local_20.left;
    iVar10 = FUN_0056f980(*(undefined4 *)(iVar17 + 8),*(undefined4 *)(iVar17 + 0x224));
    do {
      iVar10 = iVar10 + -1;
      iVar14 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + 4 + iVar10 * 4);
      local_20.left = *(LONG *)(iVar14 + 0x228);
      if (iVar10 < 0) break;
    } while ((*(uint *)(iVar14 + 0xc) & 0x100) != 0);
  }
  FUN_005708b0(param_3,lprc,iVar17);
  uVar26 = DAT_0064b314;
  if (DAT_0064b318 == 0) {
    param_4 = (int *)DAT_0064b314;
  }
  else {
    param_4 = (int *)DAT_0064b318;
  }
  *(int *)(param_1 + 0x6c4) = ((iVar8 - DAT_0064b30c) + 1) / 2 + -1;
  *(int *)(param_1 + 0x6c8) = ((iVar9 - DAT_0064b310) + 1) / 2 + -1;
  if (*(int *)(iVar17 + 0x27c) < *(int *)(iVar17 + 0x284)) {
    lVar11 = Mixer_GetBusRoute(*(ulong *)(iVar17 + 0x224),(ulong *)&local_38);
    if (lVar11 == 0) {
      uVar25 = DAT_0064b438;
      uVar22 = DAT_0064b43c;
      if (local_38 == (HGDIOBJ)0x0) {
        iVar10 = 0x1a;
      }
      else {
        iVar10 = (int)local_38 + -1;
      }
    }
    else {
      iVar10 = 0x1a;
      uVar25 = uVar26;
      uVar22 = (ulong)param_4;
    }
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x278,0x85,iVar10,uVar25,uVar22,0);
  }
  if (*(int *)(iVar17 + 0x24c) < *(int *)(iVar17 + 0x254)) {
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x248,0x82,0,uVar26,param_4,
                 *(uint *)(iVar17 + 0xc) >> 1 & 1);
  }
  if (*(int *)(iVar17 + 0x25c) < *(int *)(iVar17 + 0x264)) {
    FUN_00570780(param_2,param_3,param_5,iVar17 + 600,0x83,2,uVar26,param_4,
                 *(uint *)(iVar17 + 0xc) & 1);
  }
  if (*(int *)(iVar17 + 0x26c) < *(int *)(iVar17 + 0x274)) {
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x268,0x84,
                 CONCAT11(8,(byte)*(uint *)(iVar17 + 0xc) & 0x80) >> 7,uVar26,param_4,
                 *(uint *)(iVar17 + 0xc) >> 6 & 1);
  }
  if (*(int *)(iVar17 + 0x2fc) < *(int *)(iVar17 + 0x304)) {
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x2f8,0x8e,
                 (~*(uint *)(iVar17 + 0x1c) & 2 | 100) >> 1,uVar26,param_4,0);
  }
  if (*(int *)(iVar17 + 0x30c) < *(int *)(iVar17 + 0x314)) {
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x308,0x8f,
                 (~(byte)*(undefined4 *)(iVar17 + 0x1c) & 4 | 200) >> 2,uVar26,param_4,0);
  }
  if (*(int *)(iVar17 + 0x28c) < *(int *)(iVar17 + 0x294)) {
    iVar10 = *(int *)(param_1 + 0x2b4);
    if (iVar10 == 1) {
      (**(code **)(**(int **)(iVar17 + 4) + 0x8c))(*(int **)(iVar17 + 4),0x32,&param_4);
      Mixer_GetFXBusAssignment((ulong)param_4,(ulong *)&param_4);
      uVar26 = DAT_0064b438;
      uVar25 = DAT_0064b43c;
      if (param_4 == (int *)0x0) {
        param_4 = (int *)0x1a;
        uVar22 = (ulong)param_4;
      }
      else {
        param_4 = (int *)((int)param_4 - 1);
        uVar22 = (ulong)param_4;
      }
    }
    else {
      if ((iVar10 < 2) || (3 < iVar10)) goto LAB_0057240a;
      uVar22 = 10;
      uVar25 = (ulong)param_4;
    }
    FUN_00570780(param_2,param_3,param_5,iVar17 + 0x288,0x87,uVar22,uVar26,uVar25,0);
  }
LAB_0057240a:
  if (*(int *)(iVar17 + 0x2d4) != *(int *)(iVar17 + 0x2cc)) {
    _FaderInst_Draw_8(*(undefined4 *)(iVar17 + 0x340),param_3);
  }
  if (*(int *)(iVar17 + 700) < *(int *)(iVar17 + 0x2c4)) {
    _MeterInst_Draw_16(*(undefined4 *)(iVar17 + 0x470),param_3,&LAB_005751c0,param_1);
  }
  if (*(int *)(iVar17 + 8) != 2) goto LAB_005726c1;
  ptVar1 = (LPRECT)(iVar17 + 0x6c8);
  iVar10 = *(int *)(iVar17 + 0x6d4) - *(int *)(iVar17 + 0x6cc);
  if (iVar10 != 0) {
    iVar14 = *(int *)(iVar17 + 0x6d0) - ptVar1->left;
    if ((*(byte *)(iVar17 + 0xc) & 0x20) == 0) {
      if (((*(int *)(param_1 + 0x71c) == 0) || (*(int *)(param_1 + 0x724) != iVar14)) ||
         (*(int *)(param_1 + 0x728) != iVar10)) {
        puVar18 = &DAT_0064b1f8;
        if (DAT_0064b1f8 == 0) {
          puVar18 = &DAT_0064b1e8;
        }
        FUN_0044f280(param_1 + 0x71c,iVar14,iVar10,puVar18,5,1);
      }
      if (*(int *)(param_1 + 0x71c) == 0) goto LAB_00572533;
      FUN_0044f090(param_3,ptVar1,param_1 + 0x71c,0,0);
    }
    else {
      if (((*(int *)(param_1 + 0x70c) == 0) || (*(int *)(param_1 + 0x714) != iVar14)) ||
         (*(int *)(param_1 + 0x718) != iVar10)) {
        puVar18 = &DAT_0064b1e8;
        if (DAT_0064b1e8 == 0) {
          puVar18 = &DAT_0064b1f8;
        }
        FUN_0044f280(param_1 + 0x70c,iVar14,iVar10,puVar18,5,1);
      }
      if (*(int *)(param_1 + 0x70c) == 0) {
LAB_00572533:
        DrawEdge(param_3,ptVar1,10,0xf);
      }
      else {
        FUN_0044f090(param_3,ptVar1,param_1 + 0x70c,0,0);
      }
    }
    _FaderInst_Draw_8(*(undefined4 *)(iVar17 + 0x6e8),param_3);
  }
  if (*(int *)(iVar17 + 0x6dc) < *(int *)(iVar17 + 0x6e4)) {
    _MeterInst_Draw_16(*(undefined4 *)(iVar17 + 0x818),param_3,&LAB_005751e0,param_1);
  }
  h = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  local_38 = SelectObject(param_3,h);
  iVar10 = SetBkMode(param_3,1);
  align = SetTextAlign(param_3,6);
  DVar15 = GetSysColor(0xf);
  param_5 = DVar15 >> 0x10 & 0xff;
  param_4 = (int *)DVar15;
  uVar3 = ftol();
  param_5 = DVar15 >> 8 & 0xff;
  uVar4 = ftol();
  param_5 = (uint)param_4 & 0xff;
  uVar5 = ftol();
  param_5 = SetTextColor(param_3,(uint)CONCAT11(uVar3,uVar4) << 8 | uVar5 & 0xff);
  pIVar30 = (INT *)0x0;
  UVar16 = lstrlenA("OUT");
  ExtTextOutA(param_3,*(int *)(iVar17 + 0x330) + ((RECT *)(iVar17 + 0x328))->left >> 1,
              *(int *)(iVar17 + 0x32c),4,(RECT *)(iVar17 + 0x328),"OUT",UVar16,pIVar30);
  pIVar30 = (INT *)0x0;
  UVar16 = lstrlenA("IN");
  ExtTextOutA(param_3,*(int *)(iVar17 + 800) + ((RECT *)(iVar17 + 0x318))->left >> 1,
              *(int *)(iVar17 + 0x31c),4,(RECT *)(iVar17 + 0x318),"IN",UVar16,pIVar30);
  SetTextColor(param_3,param_5);
  SetTextAlign(param_3,align);
  SetBkMode(param_3,iVar10);
  SelectObject(param_3,local_38);
  if (*(int *)(iVar17 + 8) == 2) {
    FUN_0056e4c0(param_3,iVar17,0);
  }
LAB_005726c1:
  FUN_0056e180(param_3,iVar17,0);
  return;
}


