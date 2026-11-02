/* Module: vegas30k.dll
   Function: Mixer_BusFXCreate
   Address: 0117ba90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusFXCreate(struct IStream *,int,struct ISFGraphFilter *) */

long Mixer_BusFXCreate(IStream *param_1,int param_2,ISFGraphFilter *param_3)

{
  IStream *pStm;
  ISFGraphFilter *pIVar1;
  HRESULT HVar2;
  int iVar3;
  ulong *puVar4;
  CLSID *pCVar5;
  bool bVar6;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CLSID CStack_20;
  ulong auStack_10 [4];
  
                    /* 0x17ba90  147  ?Mixer_BusFXCreate@@YGJPAUIStream@@HPAUISFGraphFilter@@@Z */
  pStm = param_1;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  HVar2 = (*param_1->lpVtbl->Read)(param_1,&local_28,8,(ULONG *)&param_1);
  pIVar1 = param_3;
  if (-1 < HVar2) {
    if (param_1 == (IStream *)0x8) {
      HVar2 = (**(code **)(*(int *)param_3 + 0x4c))(param_3,local_28);
      if ((-1 < HVar2) && (param_2 != 0)) {
        HVar2 = (**(code **)(*(int *)pIVar1 + 0x3c))(pIVar1,local_24);
        if (-1 < HVar2) {
          HVar2 = (**(code **)(*(int *)pIVar1 + 0x10))(pIVar1,&DAT_011f0ee0,&local_2c);
          if (-1 < HVar2) {
            HVar2 = (**(code **)(*local_2c + 0xc))(local_2c,auStack_10);
            if (HVar2 == 0) {
              HVar2 = ReadClassStm(pStm,&CStack_20);
              if (HVar2 == 0) {
                iVar3 = 4;
                bVar6 = true;
                puVar4 = auStack_10;
                pCVar5 = &CStack_20;
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar6 = *puVar4 == pCVar5->Data1;
                  puVar4 = puVar4 + 1;
                  pCVar5 = (CLSID *)&pCVar5->Data2;
                } while (bVar6);
                if (bVar6) {
                  HVar2 = (**(code **)(*local_2c + 0x14))(local_2c,pStm);
                }
                else {
                  HVar2 = -0x7ffb1ff8;
                }
              }
            }
          }
        }
      }
    }
    else {
      HVar2 = -0x7ffb1ff8;
    }
  }
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))(local_2c);
  }
  return HVar2;
}


