/* Module: vegas30k.dll
   Function: Mixer_BusFXGraphPersist
   Address: 0117b570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusFXGraphPersist(struct IStream *,int,struct ISFMixerIn *) */

long Mixer_BusFXGraphPersist(IStream *param_1,int param_2,ISFMixerIn *param_3)

{
  IStream *This;
  int iVar1;
  ISFMixerIn *pIStack_4c;
  int **ppiStack_48;
  IID local_38;
  uint local_28 [2];
  undefined1 local_20 [4];
  int *local_1c;
  int *local_18;
  ULONG local_14;
  int *local_10;
  int *local_c;
  IStream *local_8;
  
                    /* 0x17b570  149  ?Mixer_BusFXGraphPersist@@YGJPAUIStream@@HPAUISFMixerIn@@@Z */
  This = param_1;
  ppiStack_48 = &local_c;
  pIStack_4c = param_3;
  local_c = (int *)0x0;
  local_8 = (IStream *)0x0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_10 = (int *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  iVar1 = (**(code **)(*(int *)param_3 + 0xfc))();
  if (-1 < iVar1) {
    (**(code **)(*local_c + 0x70))(local_c,2,&local_8);
    iVar1 = (*param_1->lpVtbl->Write)(param_1,&local_8,4,(ULONG *)0x0);
    if (-1 < iVar1) {
      if (local_8 != (IStream *)0x0) {
        iVar1 = (**(code **)*local_c)(local_c,&DAT_011f0eb0,&local_18);
        if ((((iVar1 < 0) ||
             (iVar1 = (**(code **)(*local_18 + 0xc))(local_18,&local_38), iVar1 != 0)) ||
            (iVar1 = WriteClassStm(param_1,&local_38), iVar1 != 0)) ||
           ((iVar1 = (**(code **)(*local_18 + 0x18))(local_18,param_1,1), iVar1 != 0 ||
            (iVar1 = (**(code **)(*local_c + 0xb8))(local_c,&local_1c), iVar1 < 0))))
        goto LAB_0117b728;
        param_1 = (IStream *)0x0;
        if (local_8 != (IStream *)0x0) {
          do {
            local_28[0] = 0;
            local_28[1] = 0;
            (**(code **)(*local_1c + 0xc))(local_1c,1,&local_10,0);
            if (local_10 == (int *)0x0) {
              iVar1 = -0x7fff0001;
              goto LAB_0117b728;
            }
            iVar1 = (**(code **)(*local_10 + 0x50))(local_10);
            local_28[0] = (uint)(iVar1 == 0);
            iVar1 = (*This->lpVtbl->Write)(This,local_28,8,(ULONG *)0x0);
            (**(code **)(*local_10 + 8))(local_10);
            local_10 = (int *)0x0;
            if (iVar1 < 0) goto LAB_0117b728;
            param_1 = (IStream *)((int)&param_1->lpVtbl + 1);
          } while (param_1 < local_8);
        }
      }
      iVar1 = (**(code **)(*(int *)param_3 + 0x98))(param_3,local_20,0,&local_14);
      if (-1 < iVar1) {
        iVar1 = (*This->lpVtbl->Write)(This,&local_14,4,(ULONG *)0x0);
        if ((-1 < iVar1) && (local_14 != 0)) {
          FUN_01002100();
          iVar1 = (**(code **)(*(int *)param_3 + 0x98))(param_3,local_20,&pIStack_4c,&local_14);
          if (-1 < iVar1) {
            iVar1 = (*This->lpVtbl->Write)(This,&pIStack_4c,local_14,(ULONG *)0x0);
          }
        }
      }
    }
  }
LAB_0117b728:
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar1;
}


