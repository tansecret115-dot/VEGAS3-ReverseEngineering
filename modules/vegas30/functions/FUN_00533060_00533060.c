/* Module: vegas30.exe
   Function: FUN_00533060
   Address: 00533060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00533060(undefined4 param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uchar *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  uchar auStack_104 [260];
  
  uVar9 = 0;
  uVar2 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  uVar10 = 0;
  local_10c = uVar2;
  if (uVar2 != 0) {
    do {
      iVar3 = Mixer_BusMuted(uVar10);
      if (iVar3 != 0) break;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  param_3[0x4a] = 0;
  param_3[0x49] = 0;
  if (*(int *)(param_2 + 0x448) == 0) {
    return 0x4e001;
  }
  pvVar4 = calloc(1,*(int *)(param_2 + 0x448) << 2);
  param_3[0x4a] = (uint)pvVar4;
  if (pvVar4 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  pvVar4 = calloc(1,*(int *)(param_2 + 0x448) << 2);
  param_3[0x49] = (uint)pvVar4;
  if (pvVar4 == (void *)0x0) {
    free((void *)param_3[0x4a]);
    param_3[0x4a] = 0;
    return -0x7ff8fff2;
  }
  uVar2 = 0;
  if (*(int *)(param_2 + 0x448) != 0) {
    do {
      pvVar4 = calloc(1,0x104);
      *(void **)(param_3[0x49] + uVar2 * 4) = pvVar4;
      if (*(int *)(param_3[0x49] + uVar2 * 4) == 0) {
        while (uVar2 != 0) {
          uVar2 = uVar2 - 1;
          free(*(void **)(param_3[0x49] + uVar2 * 4));
        }
        free((void *)param_3[0x49]);
        free((void *)param_3[0x4a]);
        return -0x7ff8fff2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x448));
  }
  uVar2 = *(uint *)(param_2 + 0x410);
  if (uVar2 < 2) {
    if (1 < *(uint *)(param_2 + 0x448)) {
      param_3[0x4c] = 0;
      param_3[6] = 0;
      local_108 = 0;
      local_11c = 1;
      local_110 = 0;
      if (*(int *)(param_2 + 0x448) != 0) {
        do {
          uVar2 = local_11c;
          iVar3 = Mixer_BusMuted(uVar9);
          if (iVar3 == 0) {
            if ((local_10c < *(uint *)(param_2 + 0x448)) && (*(short *)(param_2 + 0x416) == 1)) {
              uVar9 = local_110 >> 1;
              local_120 = ((local_110 & 1) != 0) + 0x10000001;
            }
            else {
              local_120 = 0x10000000;
            }
            local_118 = *(undefined4 *)(param_2 + 0x8e0);
            uStack_114 = *(undefined4 *)(param_2 + 0x8e4);
            iVar3 = *DAT_0064b144;
            uVar11 = ftol();
            iVar3 = (**(code **)(iVar3 + 0x1c8))
                              (DAT_0064b144,&local_108,uVar9,local_120,local_118,uStack_114,
                               *(undefined4 *)(param_2 + 0x8f0),*(undefined4 *)(param_2 + 0x8f4),
                               FUN_005895a0,param_2 + 0x414,*(undefined4 *)(param_2 + 0x44c),uVar11)
            ;
            if (iVar3 < 0) goto LAB_005337c3;
            *(undefined4 *)(param_3[0x4a] + param_3[0x4c] * 4) = local_108;
            uVar2 = local_120 & 0xefffffff;
            if ((local_10c < *(uint *)(param_2 + 0x448)) && (*(short *)(param_2 + 0x416) == 1)) {
              Mixer_GetDeviceDisplayName((char *)auStack_104,0x104,1,uVar9,0);
              iVar3 = lstrlenA((LPCSTR)auStack_104);
              if (iVar3 == 0) {
                Mixer_GetDeviceName((char *)auStack_104,0x104,1,uVar9);
              }
              if (uVar2 == 2) {
                uVar5 = 0x50ee;
LAB_005335eb:
                puVar8 = (uchar *)_SfGetString_8(DAT_00647204,uVar5);
                _mbscat(auStack_104,puVar8);
              }
              else if (uVar2 == 1) {
                uVar5 = 0x50ef;
                goto LAB_005335eb;
              }
              puVar8 = auStack_104;
              uVar7 = _SfGetString_8(DAT_00647204,0x50de);
              uVar5 = *(undefined4 *)(param_3[0x49] + param_3[0x4c] * 4);
            }
            else {
              Mixer_GetDeviceDisplayName((char *)auStack_104,0x104,1,uVar9,0);
              iVar3 = lstrlenA((LPCSTR)auStack_104);
              if (iVar3 == 0) {
                Mixer_GetDeviceName((char *)auStack_104,0x104,1,uVar9);
              }
              puVar8 = auStack_104;
              uVar7 = _SfGetString_8(DAT_00647204,0x50de);
              uVar5 = *(undefined4 *)(param_3[0x49] + param_3[0x4c] * 4);
            }
            SfPrintF(uVar5,uVar7,puVar8);
            param_3[0x4c] = param_3[0x4c] + 1;
            uVar2 = local_11c;
          }
          if ((local_10c < *(uint *)(param_2 + 0x448)) && (*(short *)(param_2 + 0x416) == 1)) {
            local_11c = 1;
            if (uVar9 != 0) {
              local_11c = 1 << ((byte)uVar9 & 0x1f);
            }
            param_3[6] = param_3[6] | local_11c;
          }
          else {
            local_11c = uVar2 << 1;
            uVar9 = uVar9 + 1;
            param_3[6] = param_3[6] | uVar2;
            if (uVar9 == local_10c) {
              uVar9 = 0;
              local_11c = 1;
            }
          }
          local_110 = local_110 + 1;
        } while (local_110 < *(uint *)(param_2 + 0x448));
      }
      goto LAB_00533718;
    }
    param_3[6] = 0xffffffff;
    param_3[0x4c] = 0;
    uVar5 = *(undefined4 *)(param_2 + 0x8e0);
    local_108 = 0;
    uStack_114 = *(undefined4 *)(param_2 + 0x8e4);
    iVar3 = *DAT_0064b144;
    local_118 = uVar5;
    uVar11 = ftol();
    iVar3 = (**(code **)(iVar3 + 0x1c8))
                      (DAT_0064b144,&local_108,0xffffffff,param_3[0x4d],uVar5,uStack_114,
                       *(undefined4 *)(param_2 + 0x8f0),*(undefined4 *)(param_2 + 0x8f4),
                       FUN_005895a0,param_2 + 0x414,*(undefined4 *)(param_2 + 0x44c),uVar11);
    if (iVar3 < 0) goto LAB_005337c3;
    *(undefined4 *)(param_3[0x4a] + param_3[0x4c] * 4) = local_108;
    Mixer_GetDeviceDisplayName((char *)auStack_104,0x104,1,0xffffffff,0);
    iVar3 = lstrlenA((LPCSTR)auStack_104);
    if (iVar3 == 0) {
      Mixer_GetDeviceName((char *)auStack_104,0x104,1,0xffffffff);
    }
    puVar8 = auStack_104;
    uVar7 = _SfGetString_8(DAT_00647204,0x50de);
    uVar5 = *(undefined4 *)param_3[0x49];
  }
  else {
    if (1 < *(uint *)(param_2 + 0x448)) {
      param_3[0x4c] = 0;
      param_3[6] = 0;
      local_120 = 0;
      local_11c = 1;
      local_110 = 0;
      if (*(int *)(param_2 + 0x448) != 0) {
        do {
          uVar2 = local_11c;
          iVar3 = Mixer_BusMuted(uVar9);
          if (iVar3 == 0) {
            local_118 = *(undefined4 *)(param_2 + 0x8e0);
            uStack_114 = *(undefined4 *)(param_2 + 0x8e4);
            iVar3 = *DAT_0064b144;
            uVar11 = ftol();
            iVar3 = (**(code **)(iVar3 + 0x1c8))
                              (DAT_0064b144,&local_120,uVar9,param_3[0x4d],local_118,uStack_114,
                               *(undefined4 *)(param_2 + 0x8f0),*(undefined4 *)(param_2 + 0x8f4),
                               FUN_005895a0,param_2 + 0x414,*(undefined4 *)(param_2 + 0x44c),uVar11)
            ;
            if (iVar3 < 0) goto LAB_005337c3;
            *(uint *)(param_3[0x4a] + param_3[0x4c] * 4) = local_120;
            Mixer_GetDeviceName((char *)auStack_104,0x104,1,param_3[6]);
            puVar8 = auStack_104;
            uVar5 = _SfGetString_8(DAT_00647204,0x50de);
            SfPrintF(*(undefined4 *)(param_3[0x49] + param_3[0x4c] * 4),uVar5,puVar8);
            param_3[6] = param_3[6] | local_11c;
            param_3[0x4c] = param_3[0x4c] + 1;
            uVar2 = local_11c;
          }
          uVar9 = uVar9 + 1;
          local_11c = uVar2 << 1;
          if (uVar9 == local_10c) {
            uVar9 = 0;
            local_11c = 1;
          }
          local_110 = local_110 + 1;
        } while (local_110 < *(uint *)(param_2 + 0x448));
      }
LAB_00533718:
      if (param_3[0x4c] != 0) {
        return 0;
      }
      param_3[7] = 1;
      return 0;
    }
    if ((local_10c < uVar2) && (*(short *)(param_2 + 0x416) == 1)) {
      uVar2 = *param_3 >> 1;
    }
    else if (local_10c == uVar2) {
      uVar2 = *param_3;
    }
    else {
      uVar2 = 0;
    }
    param_3[6] = 1;
    if (uVar2 != 0) {
      param_3[6] = 1 << ((byte)uVar2 & 0x1f);
    }
    uVar6 = Mixer_BusMuted(uVar2);
    param_3[7] = uVar6;
    param_3[0x4c] = 0;
    local_118 = *(undefined4 *)(param_2 + 0x8e0);
    local_120 = 0;
    uStack_114 = *(undefined4 *)(param_2 + 0x8e4);
    iVar3 = *DAT_0064b144;
    uVar11 = ftol();
    iVar3 = (**(code **)(iVar3 + 0x1c8))
                      (DAT_0064b144,&local_120,uVar2,param_3[0x4d],local_118,uStack_114,
                       *(undefined4 *)(param_2 + 0x8f0),*(undefined4 *)(param_2 + 0x8f4),
                       FUN_005895a0,param_2 + 0x414,*(undefined4 *)(param_2 + 0x44c),uVar11);
    if (iVar3 < 0) {
LAB_005337c3:
      if (*(int *)(param_2 + 0x448) != 0) {
        uVar2 = 0;
        if (*(int *)(param_2 + 0x448) != 0) {
          do {
            piVar1 = *(int **)(param_3[0x4a] + uVar2 * 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
            }
            pvVar4 = *(void **)(param_3[0x49] + uVar2 * 4);
            if (pvVar4 != (void *)0x0) {
              free(pvVar4);
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_2 + 0x448));
        }
        free((void *)param_3[0x4a]);
        param_3[0x4a] = 0;
        free((void *)param_3[0x49]);
        param_3[0x49] = 0;
      }
      return iVar3;
    }
    *(uint *)(param_3[0x4a] + param_3[0x4c] * 4) = local_120;
    Mixer_GetDeviceDisplayName((char *)auStack_104,0x104,1,uVar2,0);
    iVar3 = lstrlenA((LPCSTR)auStack_104);
    if (iVar3 == 0) {
      Mixer_GetDeviceName((char *)auStack_104,0x104,1,uVar2);
    }
    puVar8 = auStack_104;
    uVar7 = _SfGetString_8(DAT_00647204,0x50de);
    uVar5 = *(undefined4 *)param_3[0x49];
  }
  SfPrintF(uVar5,uVar7,puVar8);
  param_3[0x4c] = param_3[0x4c] + 1;
  return 0;
}


