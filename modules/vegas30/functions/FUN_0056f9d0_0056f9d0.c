/* Module: vegas30.exe
   Function: FUN_0056f9d0
   Address: 0056f9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __fastcall FUN_0056f9d0(int param_1)

{
  char *pcVar1;
  ISFMixerIn **ppIVar2;
  uchar *puVar3;
  ISFMixerIn *pIVar4;
  int iVar5;
  EMIXERTYPE EVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  long lVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined1 local_368 [260];
  undefined1 local_264 [260];
  uchar local_160 [260];
  undefined1 local_5c [8];
  tWAVEFORMATEX local_54 [4];
  char *local_50;
  uint local_46;
  int local_40;
  int local_3c;
  tagRECT local_38;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  char *local_18;
  ulong local_14;
  long local_10;
  char *local_c;
  char *local_8;
  
  local_10 = 0;
  Mixer_GetName((char *)local_160,0x104);
  FUN_00568e30(local_160);
  EVar6 = Mixer_GetMixerType((ISFMixer *)0x0);
  *(uint *)(param_1 + 0x270) = (uint)(EVar6 == 1);
  Mixer_GetDeviceAudioFormat(local_54,0);
  uVar17 = local_46 & 0xffff;
  local_18 = local_50;
  uVar15 = uVar17;
  uVar7 = _SfGetString_8(DAT_00647204,0x4f62);
  SfPrintF(local_368,uVar7,local_50,uVar15);
  uVar15 = (uint)local_18 / 1000;
  uVar7 = _SfGetString_8(DAT_00647204,0x562);
  SfPrintF(local_264,uVar7,uVar15,uVar17);
  FUN_00568e50(local_368,local_264);
  iVar9 = 0;
  if (*(int **)(param_1 + 0x2b0) != (int *)0x0) {
    iVar9 = **(int **)(param_1 + 0x2b0);
  }
  iVar16 = 0;
  if ((iVar9 != 0) && (0 < iVar9)) {
    do {
      local_1c = iVar9;
      puVar10 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar16 * 4);
      piVar21 = (int *)puVar10[1];
      if (piVar21 == (int *)0x0) {
        for (iVar9 = 0x272; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uVar7 = *(undefined4 *)(param_1 + 0x2b0);
LAB_0056fbf6:
        _SfList_DeleteList_16(uVar7,iVar16,1,0);
      }
      else {
        local_8 = (char *)0xffffffff;
        local_20 = -1;
        (**(code **)(*piVar21 + 0x8c))(piVar21,0x30,&local_8);
        (**(code **)(*(int *)puVar10[1] + 0x8c))((int *)puVar10[1],0x32,&local_20);
        if ((((local_8 == (char *)0xffffffff) ||
             ((*(int *)(param_1 + 0x278) == 0 && (puVar10[2] == 1)))) ||
            ((*(int *)(param_1 + 0x274) == 0 && (puVar10[2] == 2)))) || (puVar10[2] == 3)) {
          piVar21 = (int *)puVar10[1];
          if (piVar21 != (int *)0x0) {
            (**(code **)(*piVar21 + 8))(piVar21);
          }
          if (puVar10[0x11c] != 0) {
            _MeterInst_Deinit_4(puVar10[0x11c]);
          }
          if (puVar10[0xd0] != 0) {
            _FaderInst_Deinit_4(puVar10[0xd0]);
          }
          if (puVar10[2] == 2) {
            if (puVar10[0x206] != 0) {
              _MeterInst_Deinit_4(puVar10[0x206]);
            }
            if (puVar10[0x1ba] != 0) {
              _FaderInst_Deinit_4(puVar10[0x1ba]);
            }
          }
          for (iVar9 = 0x272; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          uVar7 = *(undefined4 *)(param_1 + 0x2b0);
          goto LAB_0056fbf6;
        }
        iVar16 = iVar16 + 1;
        puVar10[0x89] = local_20;
        if (puVar10[0xd0] != 0) {
          _FaderInst_Deinit_4(puVar10[0xd0]);
          puVar10[0xd0] = 0;
        }
        if ((puVar10[2] == 2) && (puVar10[0x1ba] != 0)) {
          _FaderInst_Deinit_4(puVar10[0x1ba]);
          puVar10[0x1ba] = 0;
        }
      }
      local_1c = local_1c + -1;
      iVar9 = local_1c;
    } while (local_1c != 0);
  }
  uVar7 = _SfGetLabeledStringFixed_16(0xfffffc40,1,0xfffffc40,0);
  puVar20 = local_5c;
  uVar19 = 0xffffffff;
  uVar8 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar8,uVar7,uVar19,puVar20);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  _MeterInst_GetSize_0();
  FUN_0060ac30();
  _MeterInst_Init_20(&stack0xfffffc8c,DAT_0064945c | 0x400030bd,&local_38,
                     *(undefined4 *)(param_1 + 0x24),0);
  _MeterInst_Message_16(&stack0xfffffc8c,0x613,0x10000,2);
  _MeterInst_Message_16(&stack0xfffffc8c,0x60d,0x10000,0x100000);
  _MeterInst_Message_16(&stack0xfffffc8c,0x60f,0,*(undefined4 *)(param_1 + 700));
  iVar9 = _MeterInst_Message_16(&stack0xfffffc8c,0x61a,0,0);
  local_1c = iVar9;
  SetRect(&local_38,0,0,iVar9,400);
  _MeterInst_Move_8(&stack0xfffffc8c,&local_38);
  _MeterInst_Message_16(&stack0xfffffc8c,0x61c,0x10002,&local_38);
  *(int *)(param_1 + 0x2d0) = iVar9 - local_38.right;
  _MeterInst_Deinit_4(&stack0xfffffc8c);
  piVar21 = &local_40;
  uVar8 = 0xffffffff;
  puVar18 = &DAT_0061b7cc;
  uVar7 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar7,puVar18,uVar8,piVar21);
  *(int *)(param_1 + 0x2d8) = local_3c + 2;
  *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2ac) + 5;
  local_20 = *(int *)(param_1 + 0x6cc);
  if (*(int *)(param_1 + 0x6cc) <= *(int *)(param_1 + 0x6d4)) {
    local_20 = *(int *)(param_1 + 0x6d4);
  }
  if (local_20 <= local_40) {
    local_20 = local_40;
  }
  iVar9 = *(int *)(param_1 + 0x2a8) + 4;
  if (local_20 <= iVar9) {
    local_20 = iVar9;
  }
  *(int *)(param_1 + 0x2d4) = local_20;
  local_c = (char *)0x0;
  if (*(int *)(param_1 + 0x278) == 0) goto LAB_0056ff3f;
  local_8 = (char *)FUN_0056f980(1,0);
  if (local_8 == (char *)0xffffffff) {
    local_10 = _SfList_AllocItem_12(*(undefined4 *)(param_1 + 0x2b0),0x9c8,&local_18);
    pcVar11 = local_18;
  }
  else {
    pcVar11 = *(char **)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + (int)local_8 * 4);
  }
  if (pcVar11 == (char *)0x0) goto LAB_0056ff3f;
  pcVar11[0] = -0x38;
  pcVar11[1] = '\t';
  pcVar11[2] = '\0';
  pcVar11[3] = '\0';
  if (local_8 == (char *)0xffffffff) {
    local_10 = Mixer_GetPreviewPort((ISFMixerIn **)(pcVar11 + 4),(char *)0x0,0);
    FUN_00574b60(pcVar11);
LAB_0056fe1c:
    piVar21 = (int *)(pcVar11 + 4);
    if ((-1 < local_10) && (*piVar21 != 0)) {
      pcVar11[8] = '\x01';
      pcVar11[9] = '\0';
      pcVar11[10] = '\0';
      pcVar11[0xb] = '\0';
      *(uint *)(pcVar11 + 0xc) = *(uint *)(pcVar11 + 0xc) & 0xfffffff6;
      uVar15 = *(int *)(param_1 + 0x2d0) + local_20 + 6 + local_1c;
      *(int *)(pcVar11 + 0x33c) = local_1c;
      *(uint *)(pcVar11 + 0x338) = uVar15 & ((int)uVar15 < 0) - 1;
      local_c = pcVar11 + 0xa0;
      _SfLoadString_16(DAT_00647204,0x4f63,local_c,0x80);
      pcVar1 = pcVar11 + 0x20;
      pcVar11[0x28] = '\0';
      pcVar11[0x29] = '\0';
      pcVar11[0x2a] = '\0';
      pcVar11[0x2b] = '\0';
      pcVar11[0x2c] = '\0';
      pcVar11[0x2d] = '\0';
      pcVar11[0x2e] = '\0';
      pcVar11[0x2f] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar11[0x24] = '\0';
      pcVar11[0x25] = '\0';
      pcVar11[0x26] = '\0';
      pcVar11[0x27] = '\0';
      (**(code **)(*(int *)*piVar21 + 0x5c))((int *)*piVar21,pcVar1);
      pcVar11[0x224] = '\0';
      pcVar11[0x225] = '\0';
      pcVar11[0x226] = '\0';
      pcVar11[0x227] = '\0';
      pcVar11[0x120] = '\0';
      (**(code **)(*(int *)*piVar21 + 0x28))((int *)*piVar21,pcVar11 + 0x120,0x104);
      pcVar11 = local_c;
      (**(code **)(*(int *)*piVar21 + 0x20))((int *)*piVar21,local_c,0x80);
      if (*pcVar11 == '\0') {
        (**(code **)(*(int *)*piVar21 + 0xc))((int *)*piVar21,pcVar11,0x80);
      }
      if (local_8 == (char *)0xffffffff) {
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x2b0),0,0,0xffffffff);
        local_c = (char *)0x1;
      }
      else {
        if (local_8 != (char *)0x0) {
          _SfList_MoveRange_16(*(undefined4 *)(param_1 + 0x2b0),local_8,0,1);
        }
        local_c = (char *)0x1;
      }
      goto LAB_0056ff3f;
    }
  }
  else {
    FUN_00574b60(pcVar11);
    (**(code **)(**(int **)(pcVar11 + 4) + 8))(*(int **)(pcVar11 + 4));
    *(ISFMixerIn **)(pcVar11 + 4) = (ISFMixerIn *)0x0;
    local_10 = Mixer_GetPreviewPort((ISFMixerIn **)(pcVar11 + 4),(char *)0x0,0);
    if (-1 < local_10) {
      FUN_00574c40(pcVar11);
      goto LAB_0056fe1c;
    }
  }
  if (local_8 == (char *)0xffffffff) {
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2b0),0xffffffff,0xffffffff,0);
  }
LAB_0056ff3f:
  puVar10 = (undefined4 *)Mixer_GetNumMainBuses((ISFMixer *)0x0);
  local_24 = puVar10;
  EVar6 = Mixer_GetMixerType((ISFMixer *)0x0);
  *(EMIXERTYPE *)(param_1 + 0x2b4) = EVar6;
  local_14 = 0;
  if (0 < (int)puVar10) {
    do {
      pcVar11 = (char *)FUN_0056f980(4,local_14);
      local_18 = pcVar11;
      if (pcVar11 == (char *)0xffffffff) {
        local_10 = _SfList_AllocItem_12(*(undefined4 *)(param_1 + 0x2b0),0x9c8,&local_28);
        puVar10 = local_28;
      }
      else {
        puVar10 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + (int)pcVar11 * 4);
      }
      if (puVar10 == (undefined4 *)0x0) break;
      *puVar10 = 0x9c8;
      if (pcVar11 == (char *)0xffffffff) {
        local_10 = Mixer_GetMainBus((ISFMixerIn **)(puVar10 + 1),local_14,(ISFMixer *)0x0);
        if (local_10 < 0) goto LAB_005701a2;
        FUN_00574b60(puVar10);
LAB_00570017:
        piVar21 = puVar10 + 1;
        if (*piVar21 == 0) goto LAB_0057019c;
        puVar10[2] = 4;
        puVar10[3] = puVar10[3] & 0xfffffff6;
        iVar9 = *(int *)(param_1 + 0x2a8) * 4 + 0x16;
        iVar16 = *(int *)(param_1 + 0x2d0) + local_20 + 6 + local_1c;
        if (iVar9 <= iVar16) {
          iVar9 = iVar16;
        }
        puVar10[0xce] = iVar9;
        local_8 = (char *)(puVar10 + 0x28);
        puVar10[0xcf] = local_1c;
        (**(code **)(*(int *)*piVar21 + 0x20))((int *)*piVar21,local_8,0x80);
        if (*local_8 == '\0') {
          (**(code **)(*(int *)*piVar21 + 0xc))((int *)*piVar21,local_8,0x80);
        }
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        (**(code **)(*(int *)*piVar21 + 0x5c))((int *)*piVar21,puVar10 + 8);
        iVar9 = (**(code **)(*(int *)*piVar21 + 0x54))((int *)*piVar21);
        puVar10[3] = (uint)(iVar9 == 0) << 1 | puVar10[3] & 0xfffffffd;
        iVar9 = (**(code **)(*(int *)*piVar21 + 0x48))((int *)*piVar21);
        puVar10[3] = ((uint)(iVar9 == 0) ^ puVar10[3]) & 1 ^ puVar10[3];
        iVar9 = (**(code **)(*(int *)*piVar21 + 0x4c))((int *)*piVar21);
        puVar10[0x89] = local_14;
        puVar10[3] = (uint)(iVar9 == 0) << 2 | puVar10[3] & 0xfffffffb;
        (**(code **)(*(int *)*piVar21 + 0x84))((int *)*piVar21,DAT_006487f8);
        *(undefined1 *)(puVar10 + 0x48) = 0;
        (**(code **)(*(int *)*piVar21 + 0x28))((int *)*piVar21,puVar10 + 0x48,0x104);
        pcVar11 = local_8;
        (**(code **)(*(int *)*piVar21 + 0x20))((int *)*piVar21,local_8,0x80);
        if (*pcVar11 == '\0') {
          (**(code **)(*(int *)*piVar21 + 0xc))((int *)*piVar21,pcVar11,0x80);
        }
        pcVar11 = local_c;
        if (local_18 == (char *)0xffffffff) {
          _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x2b0),local_c,0,0xffffffff);
          local_c = pcVar11 + 1;
        }
        else {
          if (local_18 != local_c) {
            _SfList_MoveRange_16(*(undefined4 *)(param_1 + 0x2b0),local_18,local_c,1);
          }
          local_c = pcVar11 + 1;
        }
      }
      else {
        FUN_00574b60(puVar10);
        (**(code **)(*(int *)puVar10[1] + 8))((int *)puVar10[1]);
        puVar10[1] = (ISFMixerIn *)0x0;
        local_10 = Mixer_GetMainBus((ISFMixerIn **)(puVar10 + 1),local_14,(ISFMixer *)0x0);
        if (-1 < local_10) {
          FUN_00574c40(puVar10);
          goto LAB_00570017;
        }
LAB_0057019c:
        if (local_18 == (char *)0xffffffff) {
LAB_005701a2:
          _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2b0),0xffffffff,0xffffffff,0);
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)local_24);
  }
  if (*(int *)(param_1 + 0x274) != 0) {
    local_28 = (undefined4 *)Mixer_NumBusTypePorts(4);
    local_14 = 0;
    if (0 < (int)local_28) {
      do {
        pcVar11 = (char *)FUN_0056f980(2,local_14);
        local_18 = pcVar11;
        if (pcVar11 == (char *)0xffffffff) {
          local_10 = _SfList_AllocItem_12(*(int *)(param_1 + 0x2b0),0x9c8,&local_24);
          puVar10 = local_24;
        }
        else {
          puVar10 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + (int)pcVar11 * 4);
        }
        if (puVar10 == (undefined4 *)0x0) break;
        *puVar10 = 0x9c8;
        if (pcVar11 == (char *)0xffffffff) {
          local_10 = Mixer_GetDevice((ISFMixerIn **)(puVar10 + 1),4,local_14);
          FUN_00574b60(puVar10);
LAB_0057028f:
          piVar21 = puVar10 + 1;
          if ((local_10 < 0) || (*piVar21 == 0)) goto LAB_00570459;
          puVar10[2] = 2;
          puVar10[3] = puVar10[3] & 0xfffffff6;
          if ((*(int *)(param_1 + 0x2b4) < 1) || (iVar9 = 4, 3 < *(int *)(param_1 + 0x2b4))) {
            iVar9 = 3;
          }
          iVar9 = (*(int *)(param_1 + 0x2a8) + 4) * iVar9;
          iVar16 = *(int *)(param_1 + 0x2d0) + 0xc + (*(int *)(param_1 + 0x2d4) + local_1c) * 2;
          if (iVar9 - iVar16 == 0 || iVar9 < iVar16) {
            iVar9 = iVar16;
          }
          puVar10[0xce] = iVar9;
          puVar10[0xcf] = local_1c;
          (**(code **)(*(int *)*piVar21 + 0x5c))((int *)*piVar21,puVar10 + 8);
          iVar9 = (**(code **)(*(int *)*piVar21 + 0x54))((int *)*piVar21);
          puVar10[3] = (uint)(iVar9 == 0) << 1 | puVar10[3] & 0xfffffffd;
          iVar9 = (**(code **)(*(int *)*piVar21 + 0x48))((int *)*piVar21);
          puVar10[3] = ((uint)(iVar9 == 0) ^ puVar10[3]) & 1 ^ puVar10[3];
          iVar9 = (**(code **)(*(int *)*piVar21 + 0x4c))((int *)*piVar21);
          puVar10[0x89] = local_14;
          puVar10[3] = (uint)(iVar9 == 0) << 2 | puVar10[3] & 0xfffffffb;
          (**(code **)(*(int *)*piVar21 + 0x78))((int *)*piVar21,puVar10 + 0x18a);
          FUN_00573730(puVar10);
          (**(code **)(*(int *)*piVar21 + 0x8c))((int *)*piVar21,0x32,&local_8);
          Mixer_GetFXBusAssignment((ulong)local_8,(ulong *)&local_8);
          puVar3 = (uchar *)(puVar10 + 0x48);
          *puVar3 = '\0';
          lVar12 = Mixer_GetValidFXPortAssigmentName
                             ((char *)puVar3,0x104,(ulong)local_8,(ISFMixer *)0x0);
          if (lVar12 == 0) {
            puVar13 = (uchar *)_SfGetString_8(DAT_00647204,0x4f61);
            _mbscat(puVar3,puVar13);
            SfPrintF(local_160,&DAT_00619b24,puVar10[0x89] + 1);
            _mbscat(puVar3,local_160);
          }
          pcVar11 = local_c;
          if (DAT_006491fc != 0) {
            pcVar11 = (char *)FUN_0056f980(4,local_8);
          }
          if (local_18 == (char *)0xffffffff) {
            _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x2b0),pcVar11,0,0xffffffff);
            local_c = local_c + 1;
          }
          else {
            if (local_18 != pcVar11) {
              _SfList_MoveRange_16(*(undefined4 *)(param_1 + 0x2b0),local_18,pcVar11,1);
            }
            local_c = local_c + 1;
          }
        }
        else {
          FUN_00574b60(puVar10);
          (**(code **)(*(int *)puVar10[1] + 8))((int *)puVar10[1]);
          puVar10[1] = (ISFMixerIn *)0x0;
          local_10 = Mixer_GetDevice((ISFMixerIn **)(puVar10 + 1),4,local_14);
          if (-1 < local_10) {
            FUN_00574c40(puVar10);
            goto LAB_0057028f;
          }
LAB_00570459:
          if (local_18 == (char *)0xffffffff) {
            _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2b0),0xffffffff,0xffffffff,0);
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)local_28);
    }
  }
  if ((DAT_006491fc != 0) && (*(int *)(param_1 + 0x274) != 0)) {
    local_8 = (char *)0x0;
    if (*(undefined4 **)(param_1 + 0x2b0) != (undefined4 *)0x0) {
      local_8 = (char *)**(undefined4 **)(param_1 + 0x2b0);
    }
    pcVar11 = (char *)0x0;
    if (0 < (int)local_8) {
      do {
        iVar9 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + (int)pcVar11 * 4);
        if (*(int *)(iVar9 + 8) == 2) {
          piVar21 = *(int **)(iVar9 + 4);
          (**(code **)(*piVar21 + 0x8c))(piVar21,0x32,&local_c);
          Mixer_GetFXBusAssignment((ulong)local_c,(ulong *)&local_c);
          local_18 = (char *)FUN_0056f980(4,local_c);
          local_10 = _SfList_AllocItem_12(*(undefined4 *)(param_1 + 0x2b0),0x9c8,&local_24);
          puVar10 = local_24;
          if (local_24 != (undefined4 *)0x0) {
            *local_24 = 0x9c8;
            ppIVar2 = (ISFMixerIn **)(local_24 + 1);
            local_10 = Mixer_GetMainBus(ppIVar2,(ulong)local_c,(ISFMixer *)0x0);
            pcVar11 = local_18;
            if ((local_10 < 0) || (*ppIVar2 == (ISFMixerIn *)0x0)) {
              _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2b0),0xffffffff,0xffffffff,0);
            }
            else {
              puVar10[2] = 3;
              puVar10[3] = puVar10[3] & 0xfffffff6;
              _SfLoadString_16(DAT_00647204,0x4f64,puVar10 + 0x28,0x80);
              iVar9 = *(int *)(param_1 + 0x2a8) * 2 + 8;
              if (iVar9 <= local_1c) {
                iVar9 = local_1c;
              }
              puVar10[0xce] = iVar9;
              pIVar4 = *ppIVar2;
              puVar10[0xcf] = local_1c;
              iVar9 = (**(code **)(*(int *)pIVar4 + 0x70))(pIVar4);
              pIVar4 = *ppIVar2;
              puVar10[3] = (uint)(iVar9 == 0) << 1 | puVar10[3] & 0xfffffffd;
              iVar9 = (**(code **)(*(int *)pIVar4 + 100))(pIVar4);
              pIVar4 = *ppIVar2;
              puVar10[3] = ((uint)(iVar9 == 0) ^ puVar10[3]) & 1 ^ puVar10[3];
              iVar9 = (**(code **)(*(int *)pIVar4 + 0x68))(pIVar4);
              puVar3 = (uchar *)(puVar10 + 0x48);
              puVar10[3] = (uint)(iVar9 == 0) << 2 | puVar10[3] & 0xfffffffb;
              puVar10[0x89] = local_c;
              *puVar3 = '\0';
              lVar12 = Mixer_GetValidFXPortAssigmentName
                                 ((char *)puVar3,0x104,(ulong)local_c,DAT_0064b144);
              if (lVar12 == 0) {
                puVar13 = (uchar *)_SfGetString_8(DAT_00647204,0x4f65);
                _mbscat(puVar3,puVar13);
                SfPrintF(local_160,&DAT_00619b24,puVar10[0x89] + 1);
                _mbscat(puVar3,local_160);
              }
              pcVar11 = local_18;
              _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x2b0),local_18,0,0xffffffff);
              pcVar11 = pcVar11 + 1;
            }
          }
        }
        pcVar11 = pcVar11 + 1;
      } while ((int)pcVar11 < (int)local_8);
    }
    puVar10 = *(undefined4 **)(param_1 + 0x2b0);
    if ((puVar10 != (undefined4 *)0x0) && (local_8 = (char *)*puVar10, 0 < (int)local_8)) {
      iVar9 = *(int *)puVar10[2];
      *(uint *)(iVar9 + 0xc) = *(uint *)(iVar9 + 0xc) & 0xfffffcff;
      iVar16 = 1;
      if (1 < (int)local_8) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar16 * 4);
          if ((*(int *)(iVar9 + 8) == 2) || (*(int *)(iVar9 + 8) == 3)) {
            iVar14 = 1;
          }
          else {
            iVar14 = 0;
          }
          *(uint *)(iVar5 + 0xc) = iVar14 << 8 | *(uint *)(iVar5 + 0xc) & 0xfffffeff;
          *(uint *)(iVar9 + 0xc) = iVar14 << 9 | *(uint *)(iVar9 + 0xc) & 0xfffffdff;
          iVar16 = iVar16 + 1;
          *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) & 0xfffffdff;
          iVar9 = iVar5;
        } while (iVar16 < (int)local_8);
      }
    }
  }
  FUN_0056f880();
  iVar9 = *(int *)(param_1 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  if ((iVar9 == 0) && (*(HWND *)(param_1 + 0x24) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c4) = 1;
  }
  FUN_00506170(3);
  return local_10;
}


