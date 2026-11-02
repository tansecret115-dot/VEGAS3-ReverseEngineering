/* Module: vegas30.exe
   Function: FUN_005d2700
   Address: 005d2700
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005d2700(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int local_35c;
  ulong *local_358;
  ulong *local_354;
  undefined4 local_34c [2];
  uchar local_344 [260];
  undefined4 local_240;
  undefined4 local_23c;
  int local_238;
  undefined4 local_234;
  undefined4 local_230 [128];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = false;
  local_35c = 0;
  iVar2 = Transport_IsAnyOpen();
  if ((iVar2 != 0) && (local_35c = param_3, param_3 == 0)) {
    local_35c = FUN_005d2e50(param_1,param_2);
  }
  puVar4 = local_34c;
  for (iVar2 = 0xd3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_34c[0] = *param_2;
  local_34c[1] = param_2[1];
  _mbscpy(local_344,(uchar *)(param_2 + 2));
  local_240 = param_2[0x43];
  local_23c = param_2[0x44];
  local_234 = param_2[0x46];
  local_238 = param_2[0x45];
  if (local_238 != 0) {
    puVar4 = param_2 + 0x4a;
    puVar5 = local_230;
    for (iVar2 = local_238; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  local_28 = param_2[0x48];
  local_30 = param_2[0x14a];
  local_2c = param_2[0x47];
  local_1c = param_2[0x151];
  local_24 = param_2[0x49];
  local_10 = param_2[0x154];
  local_20 = param_2[0x150];
  local_4 = param_2[0x157];
  local_18 = param_2[0x152];
  local_14 = param_2[0x153];
  local_c = param_2[0x155];
  local_8 = param_2[0x156];
  if (local_35c != 0) {
    Transport_Suspend();
  }
  lVar3 = Mixer_SetActive((_tmixerprops *)local_34c,param_3,1,1,1,param_4);
  if (-1 < lVar3) {
    lVar3 = FUN_005d29c0(param_1,param_2);
    if (-1 < lVar3) {
      uVar6 = 0;
      if (param_2[0x46] != 0) {
        local_358 = param_2 + 0xca;
        local_354 = param_1 + 0x27a;
        do {
          if (*local_358 != *local_354) {
            lVar3 = Mixer_SetFXBusAssignment(uVar6,*local_358);
            if (lVar3 < 0) goto LAB_005d2989;
          }
          uVar6 = uVar6 + 1;
          local_354 = local_354 + 1;
          local_358 = local_358 + 1;
        } while (uVar6 < (uint)param_2[0x46]);
      }
      if (-1 < lVar3) {
        if (param_2[0x46] != param_1[0x1f6]) {
          FUN_005d2de0(param_1,param_2);
        }
        FUN_005d2ae0(param_1,param_2);
        puVar4 = param_1 + 0x1b0;
        for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *param_2;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        }
        Mixer_GetMainBusRouting(param_1 + 0x1fa,param_1 + 0x1f5);
        Mixer_GetPreviewPort(param_1 + 0x2fa);
        if (DAT_0064b144 != (int *)0x0) {
          (**(code **)(*DAT_0064b144 + 8))(DAT_0064b144);
        }
        lVar3 = Mixer_QueryAudioInterface((_GUID *)&DAT_0060ec58,&DAT_0064b144);
        bVar1 = true;
        *(uint *)*param_1 = *(uint *)*param_1 | 0x4000;
      }
    }
  }
LAB_005d2989:
  if (local_35c != 0) {
    Transport_Resume((uint)!bVar1);
  }
  return lVar3;
}


