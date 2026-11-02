/* Module: vegas30.exe
   Function: FUN_004c6df0
   Address: 004c6df0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004c6df0(int param_1,int param_2)

{
  ulong uVar1;
  HMENU pHVar2;
  HBITMAP pHVar3;
  LPCSTR pCVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBP;
  UINT UVar9;
  undefined4 *puVar10;
  UINT check;
  int *piVar11;
  int *piVar12;
  UINT first;
  UINT last;
  ISFMixerOut *local_16c;
  ulong local_168;
  HMENU local_164;
  HMENU local_160;
  HMENU local_15c;
  undefined4 local_158;
  undefined1 local_154 [16];
  UINT local_144 [5];
  CHAR *local_130;
  UINT local_12c;
  HBITMAP local_128;
  CHAR local_110 [68];
  undefined1 auStack_cc [12];
  CHAR local_c0 [52];
  int aiStack_8c [3];
  CHAR aCStack_80 [64];
  undefined1 local_40 [64];
  
  pHVar2 = CreatePopupMenu();
  if (pHVar2 == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  puVar10 = (undefined4 *)local_154;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_154._8_4_ = 0;
  local_154._0_4_ = 0x2c;
  local_154._4_4_ = 0x12;
  local_164 = pHVar2;
  if (param_2 == 0) {
    local_164 = (HMENU)_SfGetString_8(DAT_00647204,0x501f);
    UVar9 = 0;
    lVar5 = Mixer_NumBusTypePorts(1);
    if (0 < lVar5) {
      do {
        Mixer_GetDeviceDisplayName(local_c0,0x40,1,UVar9,1);
        if (UVar9 == 0) {
          uVar6 = _SfGetString_8(DAT_00647204,0x6e93);
          SfPrintF(local_110,uVar6);
        }
        else {
          SfPrintF(local_110,local_164,UVar9 + 0x40,local_c0);
        }
        local_130 = local_110;
        local_12c = lstrlenA(local_110);
        local_144[0] = UVar9 + 0x1970;
        InsertMenuItemA(pHVar2,UVar9,1,(LPCMENUITEMINFOA)local_154);
        if (UVar9 == *(UINT *)(param_1 + 0x44)) {
          CheckMenuRadioItem(pHVar2,0x1970,0x1a6f,local_144[0],0);
        }
        UVar9 = UVar9 + 1;
        lVar5 = Mixer_NumBusTypePorts(1);
      } while ((int)UVar9 < lVar5);
    }
    return pHVar2;
  }
  local_158 = _SfGetString_8(DAT_00647204,0x5020);
  pHVar3 = (HBITMAP)Mixer_NumBusTypePorts(0x100);
  local_128 = pHVar3;
  if ((int)pHVar3 < 2) {
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5021);
    AppendMenuA(pHVar2,0,0x1b6d,pCVar4);
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5022);
    AppendMenuA(pHVar2,0,0x1b6e,pCVar4);
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5023);
    AppendMenuA(pHVar2,0,0x1b6f,pCVar4);
    CheckMenuRadioItem(pHVar2,0x1b6d,0x1b6f,*(int *)(param_1 + 0x40) + 0x1b6d,0);
    return pHVar2;
  }
  local_160 = CreatePopupMenu();
  local_15c = CreatePopupMenu();
  local_168 = 0;
  if (0 < (int)pHVar3) {
    UVar9 = 0x2198;
    do {
      uVar1 = local_168;
      local_16c = (ISFMixerOut *)0x0;
      Mixer_GetOutDevice(&local_16c,0x100,local_168);
      if (local_16c != (ISFMixerOut *)0x0) {
        (**(code **)(*(int *)local_16c + 0xc))(local_16c,local_40,0x40);
        piVar12 = (int *)0x40;
        piVar11 = aiStack_8c;
        (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,piVar11,0x40,auStack_cc);
        Mixer_GetDeviceAudioFormat((tWAVEFORMATEX *)local_144,1);
        (**(code **)(*piVar12 + 0x44))(piVar12,local_144,0);
        (**(code **)(*piVar11 + 8))(piVar11);
      }
      check = uVar1 + 0x1a70;
      iVar7 = uVar1 + 1;
      iVar8 = iVar7 % 10;
      iVar7 = (iVar7 / 10) % 10;
      SfPrintF(local_110,local_158,(int)" 123456789"[iVar7],(int)(char)(&UNK_006139f8)[iVar8],
               local_40);
      local_130 = local_110;
      local_12c = lstrlenA(local_110);
      local_144[0] = check;
      InsertMenuItemA(local_160,local_168,1,(LPCMENUITEMINFOA)local_154);
      SfPrintF(local_110,local_158,(int)" 123456789"[iVar7],(int)(char)(&UNK_006139f8)[iVar8],
               local_40);
      local_130 = aCStack_80;
      local_12c = lstrlenA(aCStack_80);
      pHVar2 = local_15c;
      local_144[0] = UVar9;
      InsertMenuItemA(local_15c,UVar9 - 0x2198,1,(LPCMENUITEMINFOA)local_154);
      local_130 = local_c0;
      local_12c = lstrlenA(local_c0);
      local_144[0] = UVar9 + 1;
      InsertMenuItemA(pHVar2,UVar9 - 0x2197,1,(LPCMENUITEMINFOA)local_154);
      if (local_168 == *(UINT *)(param_1 + 0x3c)) {
        iVar7 = *(int *)(param_1 + 0x40);
        if (iVar7 == 0) {
          last = 0x1b6c;
          first = 0x1a70;
          pHVar2 = local_160;
        }
        else {
          check = UVar9;
          if ((iVar7 != 1) && (check = UVar9 + 1, iVar7 != 2)) goto LAB_004c70a5;
          last = 0x2397;
          first = 0x2198;
        }
        CheckMenuRadioItem(pHVar2,first,last,check,0);
      }
LAB_004c70a5:
      local_168 = local_168 + 1;
      UVar9 = UVar9 + 2;
      pHVar2 = local_164;
    } while ((int)local_168 < (int)local_128);
  }
  UVar9 = 0x10;
  if (*(int *)(param_1 + 0x40) == 0) {
    UVar9 = 0x18;
  }
  pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5021);
  AppendMenuA(pHVar2,UVar9,(UINT_PTR)local_160,pCVar4);
  UVar9 = 0x10;
  if ((*(int *)(param_1 + 0x40) == 1) || (*(int *)(param_1 + 0x40) == 2)) {
    UVar9 = 0x18;
  }
  AppendMenuA(pHVar2,UVar9,(UINT_PTR)local_15c,"Mono");
  return pHVar2;
}


