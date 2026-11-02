/* Module: vegas30k.dll
   Function: Mixer_BusPersist
   Address: 0117aba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusPersist(struct IStream *,int,struct ISFMixerIn *) */

long Mixer_BusPersist(IStream *param_1,int param_2,ISFMixerIn *param_3)

{
  ISFMixerIn *pIVar1;
  HRESULT HVar2;
  HGLOBAL pvVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ISFMixerIn *pIStack_2b0;
  ISFMixerIn **ppIStack_2ac;
  ulong *puStack_2a8;
  CHAR local_264;
  undefined4 local_263;
  CHAR local_160;
  undefined4 local_15f;
  undefined4 local_5c [2];
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c [3];
  ULONG local_30;
  ULONG local_2c;
  ulong local_28;
  ulong local_24;
  ULONG local_20;
  ULONG local_1c [2];
  uint local_14;
  ISFGraphBuilder *local_10;
  ULONG local_c;
  void *local_8;
  
                    /* 0x17aba0  152  ?Mixer_BusPersist@@YGJPAUIStream@@HPAUISFMixerIn@@@Z */
  pIVar1 = param_3;
  local_14 = 0;
  if (param_3 == (ISFMixerIn *)0x0) {
    return -0x7ff8ffa9;
  }
  HVar2 = (**(code **)(*(int *)param_3 + 0x8c))();
  if ((local_14 & 0x80) == 0) {
    HVar2 = -0x7fff0001;
  }
  else if ((local_14 & 1) == 0) {
    if ((local_14 & 4) != 0) {
      local_5c[0] = 0;
      puVar6 = local_54;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_264 = '\0';
      local_160 = '\0';
      puVar6 = &local_263;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      param_3 = (ISFMixerIn *)0x0;
      puVar6 = &local_15f;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      (**(code **)(*(int *)pIVar1 + 0x8c))();
      (**(code **)(*DAT_012b09c8 + 0x98))();
      (**(code **)(*(int *)pIVar1 + 0x5c))();
      puStack_2a8 = (ulong *)0x117aea7;
      (**(code **)(*(int *)pIVar1 + 0x78))();
      puStack_2a8 = &local_24;
      ppIStack_2ac = (ISFMixerIn **)&local_28;
      pIStack_2b0 = (ISFMixerIn *)&local_2c;
      (**(code **)(*(int *)pIVar1 + 0x80))(pIVar1,local_3c + 2,&local_30);
      (**(code **)(*(int *)pIVar1 + 0xc))(pIVar1,&local_264,0x104);
      if (&stack0x00000000 == (undefined1 *)0x264) {
        local_20 = 0;
      }
      else {
        iVar4 = lstrlenA(&local_264);
        local_20 = iVar4 + 1;
      }
      (**(code **)(*(int *)pIVar1 + 0x20))(pIVar1,&local_160,0x104);
      if (&stack0x00000000 == (undefined1 *)0x160) {
        local_1c[0] = 0;
      }
      else {
        iVar4 = lstrlenA(&local_160);
        local_1c[0] = iVar4 + 1;
      }
      HVar2 = (*param_1->lpVtbl->Write)(param_1,local_5c,0x48,(ULONG *)0x0);
      if (-1 < HVar2) {
        if ((local_20 != 0) &&
           (HVar2 = (*param_1->lpVtbl->Write)(param_1,&local_264,local_20,(ULONG *)0x0), HVar2 < 0))
        {
          return HVar2;
        }
        if (local_1c[0] != 0) {
          HVar2 = (*param_1->lpVtbl->Write)(param_1,&local_160,local_1c[0],(ULONG *)0x0);
          return HVar2;
        }
      }
    }
  }
  else {
    local_44 = 0;
    local_40 = 0;
    local_160 = '\0';
    puVar5 = local_3c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar6 = &local_15f;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    local_264 = '\0';
    puVar6 = &local_263;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar4 = *(int *)pIVar1;
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    (**(code **)(iVar4 + 0x5c))();
    iVar4 = (**(code **)(*(int *)pIVar1 + 0x88))();
    local_3c[2] = (uint)(iVar4 == 0);
    (**(code **)(*(int *)pIVar1 + 0xc))();
    if (&stack0x00000000 == (undefined1 *)0x160) {
      local_30 = 0;
    }
    else {
      iVar4 = lstrlenA(&local_160);
      local_30 = iVar4 + 1;
    }
    (**(code **)(*(int *)pIVar1 + 0x20))();
    if (&stack0x00000000 == (undefined1 *)0x264) {
      local_2c = 0;
    }
    else {
      puStack_2a8 = (ulong *)0x117acb4;
      iVar4 = lstrlenA(&local_264);
      local_2c = iVar4 + 1;
    }
    ppIStack_2ac = &param_3;
    puStack_2a8 = (ulong *)0x0;
    pIStack_2b0 = pIVar1;
    (**(code **)(*(int *)pIVar1 + 0x98))();
    local_20 = local_c;
    Mixer_GetHardwareRoute((ulong)param_3,&local_28);
    Mixer_GetBusRoute((ulong)param_3,&local_24);
    local_10 = (ISFGraphBuilder *)0x0;
    HVar2 = Mixer_GetDeviceGraph(&local_10,1,(ulong)param_3);
    if (HVar2 == 0) {
      local_8 = (void *)0x0;
      HVar2 = _SfGraph_SaveToMem_12(local_10,&local_8,local_1c);
      if ((-1 < HVar2) &&
         (HVar2 = (*param_1->lpVtbl->Write)(param_1,&local_44,0x30,(ULONG *)0x0), -1 < HVar2)) {
        if ((local_30 != 0) &&
           (HVar2 = (*param_1->lpVtbl->Write)(param_1,&local_160,local_30,(ULONG *)0x0), HVar2 < 0))
        {
          return HVar2;
        }
        if ((local_2c != 0) &&
           (HVar2 = (*param_1->lpVtbl->Write)(param_1,&local_264,local_2c,(ULONG *)0x0), HVar2 < 0))
        {
          return HVar2;
        }
        if (local_20 != 0) {
          FUN_01002100();
          iVar4 = (**(code **)(*(int *)pIVar1 + 0x98))(pIVar1,&param_3,&pIStack_2b0,&local_c);
          if (iVar4 < 0) {
            return iVar4;
          }
          HVar2 = (*param_1->lpVtbl->Write)(param_1,&pIStack_2b0,local_c,(ULONG *)0x0);
          if (HVar2 < 0) {
            return HVar2;
          }
        }
        if (local_1c[0] != 0) {
          HVar2 = (*param_1->lpVtbl->Write)(param_1,local_8,local_1c[0],(ULONG *)0x0);
          pvVar3 = GlobalHandle(local_8);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(local_8);
          GlobalFree(pvVar3);
          if (HVar2 < 0) {
            return HVar2;
          }
        }
        (**(code **)(*(int *)local_10 + 8))(local_10);
        return HVar2;
      }
    }
  }
  return HVar2;
}


