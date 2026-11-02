/* Module: vegas30k.dll
   Function: Mixer_BusFXGraphCreate
   Address: 0117b770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusFXGraphCreate(struct IStream *,int,struct ISFMixerIn *) */

long Mixer_BusFXGraphCreate(IStream *param_1,int param_2,ISFMixerIn *param_3)

{
  IStream *pStm;
  ULONG cb;
  int iVar1;
  ulong *puVar2;
  CLSID *pCVar3;
  uint uVar4;
  ISFMixerIn *pIVar5;
  bool bVar6;
  ISFMixerIn *pIStack_5c;
  int **ppiStack_58;
  ulong local_48 [4];
  CLSID local_38;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  ULONG local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  ULONG local_8;
  
                    /* 0x17b770  148  ?Mixer_BusFXGraphCreate@@YGJPAUIStream@@HPAUISFMixerIn@@@Z */
  pIVar5 = param_3;
  ppiStack_58 = &local_c;
  pIStack_5c = param_3;
  local_c = (int *)0x0;
  local_14 = 0;
  local_18 = (int *)0x0;
  local_20 = (int *)0x0;
  local_10 = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = (**(code **)(*(int *)param_3 + 0xfc))();
  if (-1 < iVar1) {
    (**(code **)(*local_c + 0x94))(local_c);
    pStm = param_1;
    iVar1 = (*param_1->lpVtbl->Read)(param_1,&local_14,4,&local_8);
    if (-1 < iVar1) {
      if (local_8 == 4) {
        if (local_14 != 0) {
          iVar1 = (**(code **)*local_c)(local_c,&DAT_011f0eb0,&local_18);
          if (((iVar1 < 0) ||
              (iVar1 = (**(code **)(*local_18 + 0xc))(local_18,local_48), iVar1 != 0)) ||
             (iVar1 = ReadClassStm(pStm,&local_38), iVar1 != 0)) goto LAB_0117b985;
          iVar1 = 4;
          bVar6 = true;
          puVar2 = local_48;
          pCVar3 = &local_38;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = *puVar2 == pCVar3->Data1;
            puVar2 = puVar2 + 1;
            pCVar3 = (CLSID *)&pCVar3->Data2;
          } while (bVar6);
          if (!bVar6) {
            iVar1 = -0x7ffb1ff8;
            goto LAB_0117b985;
          }
          iVar1 = (**(code **)(*local_18 + 0x14))(local_18,pStm);
          if ((iVar1 != 0) || (iVar1 = (**(code **)(*local_c + 0xb8))(local_c,&local_20), iVar1 < 0)
             ) goto LAB_0117b985;
          uVar4 = 0;
          pIVar5 = param_3;
          if (local_14 != 0) {
            do {
              local_28 = 0;
              local_24 = 0;
              iVar1 = (*pStm->lpVtbl->Read)(pStm,&local_28,8,&local_8);
              if (iVar1 < 0) goto LAB_0117b985;
              if (local_8 != 8) goto LAB_0117b7d9;
              (**(code **)(*local_20 + 0xc))(local_20,1,&local_10,0);
              if (local_10 == (int *)0x0) {
                iVar1 = -0x7fff0001;
                goto LAB_0117b985;
              }
              iVar1 = (**(code **)(*local_10 + 0x4c))(local_10,local_28);
              (**(code **)(*local_10 + 8))(local_10);
              local_10 = (int *)0x0;
              if (iVar1 < 0) goto LAB_0117b985;
              uVar4 = uVar4 + 1;
              pIVar5 = param_3;
            } while (uVar4 < local_14);
          }
        }
        iVar1 = (*pStm->lpVtbl->Read)(pStm,&local_1c,4,&local_8);
        if (local_8 == 4) {
          if (local_1c != 0) {
            (**(code **)(*(int *)pIVar5 + 0x8c))(pIVar5,0x32,&param_1);
            cb = local_1c;
            FUN_01002100();
            if (&stack0x00000000 == (undefined1 *)0x5c) {
              iVar1 = -0x7ff8fff2;
            }
            else {
              iVar1 = (*pStm->lpVtbl->Read)(pStm,&pIStack_5c,cb,&local_8);
              if (local_1c == local_8) {
                (**(code **)(*(int *)param_3 + 0x94))(param_3,param_1,&pIStack_5c,local_1c);
              }
              else {
                iVar1 = -0x7ffb1ff8;
              }
            }
          }
        }
        else {
          iVar1 = -0x7ffb1ff8;
        }
      }
      else {
LAB_0117b7d9:
        iVar1 = -0x7ffb1ff8;
      }
    }
  }
LAB_0117b985:
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar1;
}


