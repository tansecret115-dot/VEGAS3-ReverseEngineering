/* Module: vegas30k.dll
   Function: Mixer_BusCreate
   Address: 0117b0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusCreate(struct IStream *,int,struct ISFMixerIn *) */

long Mixer_BusCreate(IStream *param_1,int param_2,ISFMixerIn *param_3)

{
  ISFMixerIn *pIVar1;
  undefined1 *pMem;
  HRESULT HVar2;
  HGLOBAL pvVar3;
  int iVar4;
  ISFMixerIn **ppIVar5;
  undefined4 *puVar6;
  undefined1 local_260;
  undefined4 local_25f;
  undefined1 local_15c;
  undefined4 local_15b;
  undefined4 local_58 [2];
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  ISFMixerIn *local_38 [4];
  ISFMixerIn *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  ISFMixerIn *local_1c;
  ISFMixerIn *local_18;
  uint local_10;
  ISFGraphBuilder *local_c;
  undefined1 *local_8;
  
                    /* 0x17b0c0  146  ?Mixer_BusCreate@@YGJPAUIStream@@HPAUISFMixerIn@@@Z */
  pIVar1 = param_3;
  local_10 = 0;
  if (param_3 == (ISFMixerIn *)0x0) {
    return -0x7ff8ffa9;
  }
  HVar2 = (**(code **)(*(int *)param_3 + 0x8c))();
  if ((local_10 & 0x80) == 0) {
    HVar2 = -0x7fff0001;
  }
  else if ((local_10 & 1) == 0) {
    if ((local_10 & 4) != 0) {
      local_58[0] = 0;
      puVar6 = local_50;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_260 = 0;
      local_15c = 0;
      puVar6 = &local_25f;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      puVar6 = &local_15b;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      HVar2 = (*param_1->lpVtbl->Read)(param_1,local_58,0x48,(ULONG *)&param_3);
      if (-1 < HVar2) {
        if (param_3 != (ISFMixerIn *)0x48) {
          return -0x7ffb1ff8;
        }
        if (local_1c != (ISFMixerIn *)0x0) {
          HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_260,(ULONG)local_1c,(ULONG *)&param_3);
          if (HVar2 < 0) {
            return HVar2;
          }
          if (local_1c != param_3) {
            return -0x7ffb1ff8;
          }
        }
        if (local_18 != (ISFMixerIn *)0x0) {
          HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_15c,(ULONG)local_18,(ULONG *)&param_3);
          if (HVar2 < 0) {
            return HVar2;
          }
          if (local_18 != param_3) {
            return -0x7ffb1ff8;
          }
        }
        (**(code **)(*(int *)pIVar1 + 0x8c))();
        (**(code **)(*DAT_012b09c8 + 0x9c))(DAT_012b09c8,0,local_58[0]);
        (**(code **)(*(int *)pIVar1 + 0x58))(pIVar1,local_50);
        (**(code **)(*(int *)pIVar1 + 0x74))(pIVar1,&local_40);
        (**(code **)(*(int *)pIVar1 + 0x7c))
                  (pIVar1,local_38[2],local_38[3],local_28,local_24,local_20);
        (**(code **)(*(int *)pIVar1 + 0x10))(pIVar1,&local_260);
        (**(code **)(*(int *)pIVar1 + 0x24))(pIVar1,&local_15c);
        return HVar2;
      }
    }
  }
  else {
    local_40 = 0;
    local_3c = 0;
    local_15c = 0;
    ppIVar5 = local_38;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppIVar5 = (ISFMixerIn *)0x0;
      ppIVar5 = ppIVar5 + 1;
    }
    puVar6 = &local_15b;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    local_260 = 0;
    puVar6 = &local_25f;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_40,0x30,(ULONG *)&param_3);
    if (-1 < HVar2) {
      if (param_3 != (ISFMixerIn *)0x30) {
        return -0x7ffb1ff8;
      }
      if (local_38[3] != (ISFMixerIn *)0x0) {
        HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_15c,(ULONG)local_38[3],(ULONG *)&param_3);
        if (HVar2 < 0) {
          return HVar2;
        }
        if (local_38[3] != param_3) {
          return -0x7ffb1ff8;
        }
      }
      if (local_28 != (ISFMixerIn *)0x0) {
        HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_260,(ULONG)local_28,(ULONG *)&param_3);
        if (HVar2 < 0) {
          return HVar2;
        }
        if (local_28 != param_3) {
          return -0x7ffb1ff8;
        }
      }
      iVar4 = (**(code **)(*(int *)pIVar1 + 0x8c))();
      if (local_24 == (undefined1 *)0xffffffff) {
        if ((local_20 != (undefined1 *)0xffffffff) &&
           (Mixer_GetBusRoute((ulong)param_1,(ulong *)&local_8), local_8 != local_20)) {
          Mixer_SetBusRoute((ulong)param_1,(ulong)local_20);
        }
      }
      else {
        Mixer_GetHardwareRoute((ulong)param_1,(ulong *)&local_8);
        if (local_8 != local_24) {
          Mixer_SetHardwareRoute((ulong)param_1,(ulong)local_24);
        }
      }
      if (local_1c != (ISFMixerIn *)0x0) {
        FUN_01002100();
        local_8 = &stack0xfffffd7c;
        iVar4 = (*param_1->lpVtbl->Read)(param_1,&stack0xfffffd7c,(ULONG)local_1c,(ULONG *)&param_3)
        ;
        if (iVar4 < 0) {
          return iVar4;
        }
        (**(code **)(*(int *)pIVar1 + 0x94))(pIVar1,param_1,local_8,local_1c);
      }
      if (local_18 != (ISFMixerIn *)0x0) {
        pvVar3 = GlobalAlloc(2,(SIZE_T)local_18);
        local_8 = GlobalLock(pvVar3);
        if (local_8 != (undefined1 *)0x0) {
          HVar2 = (*param_1->lpVtbl->Read)(param_1,local_8,(ULONG)local_18,(ULONG *)&param_3);
          pMem = local_8;
          if (HVar2 < 0) {
            pvVar3 = GlobalHandle(local_8);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(pMem);
            GlobalFree(pvVar3);
            return HVar2;
          }
          local_c = (ISFGraphBuilder *)0x0;
          iVar4 = _SfGraph_CreateFromMem_16(&local_c,local_8,local_18,1);
          if (-1 < iVar4) {
            Mixer_SetDeviceGraph(local_c,1,(ulong)param_1);
            (**(code **)(*(int *)local_c + 8))(local_c);
          }
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
          if (iVar4 < 0) {
            return iVar4;
          }
        }
      }
      (**(code **)(*(int *)pIVar1 + 0x58))(pIVar1,&local_40);
      (**(code **)(*(int *)pIVar1 + 0x84))(pIVar1,local_38[2]);
      (**(code **)(*(int *)pIVar1 + 0x10))(pIVar1,&local_15c);
      (**(code **)(*(int *)pIVar1 + 0x24))(pIVar1,&local_260);
      return iVar4;
    }
  }
  return HVar2;
}


