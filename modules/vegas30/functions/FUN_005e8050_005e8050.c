/* Module: vegas30.exe
   Function: FUN_005e8050
   Address: 005e8050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005e8050(int *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ISFMixerIn *pIStack_63c;
  undefined4 local_620 [4];
  undefined4 local_610 [5];
  undefined4 local_5fc [64];
  undefined4 local_4fc [52];
  undefined4 local_42c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  long local_c;
  ISFMixerIn *local_8;
  
  iVar3 = *param_1;
  local_c = 1;
  local_8 = (ISFMixerIn *)0x0;
  if (iVar3 == 0) {
    return 1;
  }
  if (iVar3 == 7) {
    pIStack_63c = (ISFMixerIn *)0x5e808d;
    local_c = Mixer_GetPreviewPort(&local_8,(char *)(param_1 + 3),0x104);
  }
  else if (iVar3 == 5) {
    pIStack_63c = (ISFMixerIn *)0x5e80a3;
    local_c = Mixer_GetDevice(&local_8,4,param_1[1]);
    if (local_8 == (ISFMixerIn *)0x0) {
      pIStack_63c = (ISFMixerIn *)0x5e80bc;
      Mixer_AddFXBus((ISFMixer *)0x0,param_1[2],param_1[1]);
      pIStack_63c = (ISFMixerIn *)0x5e80cb;
      local_c = Mixer_GetDevice(&local_8,4,param_1[1]);
    }
  }
  else {
    pIStack_63c = (ISFMixerIn *)0x5e80dc;
    local_c = Mixer_GetMainBus(&local_8,param_1[1],(ISFMixer *)0x0);
  }
  if (local_c < 0) goto LAB_005e8404;
  if (local_8 == (ISFMixerIn *)0x0) {
    return local_c;
  }
  iVar3 = lstrlenA((LPCSTR)(param_1 + 0x44));
  if (iVar3 != 0) {
    (**(code **)(*(int *)local_8 + 0x10))();
  }
  iVar3 = lstrlenA((LPCSTR)(param_1 + 0x85));
  if (iVar3 != 0) {
    (**(code **)(*(int *)local_8 + 0x24))();
  }
  pIStack_63c = local_8;
  (**(code **)(*(int *)local_8 + 0x94))();
  if ((void *)param_1[199] != (void *)0x0) {
    free((void *)param_1[199]);
  }
  param_1[199] = 0;
  (**(code **)(*(int *)local_8 + 0x58))(local_8,param_1 + 0xce);
  (**(code **)(*(int *)local_8 + 0x74))(local_8,param_1 + 0xca);
  (**(code **)(*(int *)local_8 + 0x84))(local_8,param_1[0xd2]);
  (**(code **)(*(int *)local_8 + 0x50))(local_8,param_1[0xd3]);
  (**(code **)(*(int *)local_8 + 0x44))(local_8,param_1[0xd4]);
  if ((param_1[0xd6] == 0) || (piVar1 = (int *)param_1[0xd7], piVar1 == (int *)0x0)) {
    if (param_1[0xd5] != 0) {
      local_14 = 0;
      iVar3 = (**(code **)(*(int *)local_8 + 0x100))();
      if ((-1 < iVar3) && (local_14 != 0)) {
        local_10 = (int *)0x0;
        iVar3 = (**(code **)(*(int *)local_8 + 0xfc))();
        if ((-1 < iVar3) && (local_10 != (int *)0x0)) {
          (**(code **)(*local_10 + 0x94))();
          goto LAB_005e82d2;
        }
      }
    }
  }
  else {
    pIStack_63c = (ISFMixerIn *)0x0;
    local_c = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (local_c < 0) goto LAB_005e8404;
    if (param_1[0xd6] == -2) {
      pIStack_63c = (ISFMixerIn *)param_1[0xd7];
      (**(code **)(*(int *)pIStack_63c + 0xc))();
      lVar2 = local_c;
      FUN_0060ac30();
      (**(code **)(*(int *)param_1[0xd7] + 0xc))((int *)param_1[0xd7],&pIStack_63c,lVar2,0);
      local_c = (**(code **)(*(int *)local_8 + 0x10c))(local_8,&pIStack_63c,local_c);
    }
    else {
      pIStack_63c = (ISFMixerIn *)0x5e8256;
      iVar3 = _SfGraph_CreateFromStream_12();
      local_c = iVar3;
      (**(code **)(*(int *)param_1[0xd7] + 8))();
      param_1[0xd7] = 0;
      if ((-1 < iVar3) && (local_10 != (int *)0x0)) {
        (**(code **)(*(int *)local_8 + 0x108))();
LAB_005e82d2:
        pIStack_63c = (ISFMixerIn *)0x5e82db;
        (**(code **)(*local_10 + 8))();
      }
    }
  }
  piVar1 = (int *)param_1[0xd8];
  param_1[0xd5] = 0;
  if (piVar1 != (int *)0x0) {
    pIStack_63c = (ISFMixerIn *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar3 < 0) {
      return iVar3;
    }
    local_18 = 0;
    local_c = (**(code **)(*(int *)param_1[0xd8] + 0xc))((int *)param_1[0xd8],&local_18,4,0);
    if (-1 < local_c) {
      local_1c = DAT_0064b138;
      local_14 = 0;
      if (local_18 != 0) {
        do {
          pIStack_63c = (ISFMixerIn *)param_1[0xd8];
          local_c = (**(code **)(*(int *)pIStack_63c + 0xc))();
          if (local_c < 0) break;
          puVar5 = local_620;
          for (iVar3 = 0x180; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          pIStack_63c = (ISFMixerIn *)0x5e837e;
          local_c = FUN_005c0460();
          if (local_c < 0) break;
          iVar3 = FUN_005cf4d0();
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0x3c) = local_620[1];
            *(undefined4 *)(iVar3 + 0x44) = local_620[3];
            *(undefined4 *)(iVar3 + 0x22c) = local_42c;
            puVar5 = local_610;
            puVar6 = (undefined4 *)(iVar3 + 0x48);
            for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = local_5fc;
            puVar6 = (undefined4 *)(iVar3 + 0x5c);
            for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = local_4fc;
            puVar6 = (undefined4 *)(iVar3 + 0x15c);
            for (iVar4 = 0x34; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            *(undefined4 *)(iVar3 + 0x40) = local_620[2];
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_18);
      }
    }
  }
LAB_005e8404:
  if (local_8 != (ISFMixerIn *)0x0) {
    (**(code **)(*(int *)local_8 + 8))();
  }
  return local_c;
}


