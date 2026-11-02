/* Module: vegas30.exe
   Function: FUN_005badc0
   Address: 005badc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005badc0(IStream *param_1,undefined4 param_2,ISFMixerIn *param_3,IStream *param_4,
                int param_5,int *param_6)

{
  IStream *This;
  int iVar1;
  undefined4 uVar2;
  IStreamVtbl *pIVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  piVar4 = param_6;
  This = param_4;
  iVar5 = 0;
  *param_6 = 0;
  iVar1 = FUN_005bad70(param_4,&local_4);
  if (iVar1 < 0) {
    return iVar1;
  }
  switch(param_2) {
  case 1:
    iVar1 = FUN_005bbaf0(This,param_5);
    break;
  case 2:
    uVar2 = 0;
    iVar1 = param_5;
    goto LAB_005baf58;
  case 3:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar1 = Mixer_FXBusContainerPersist(This,param_5,*(ulong *)param_3);
    break;
  default:
    return -0x7ff8ffa9;
  case 5:
    uVar2 = 0;
    if (param_3 != (ISFMixerIn *)0x0) {
      uVar2 = *(undefined4 *)param_3;
    }
    iVar1 = 1;
LAB_005baf58:
    iVar1 = FUN_005e7320(This,iVar1,uVar2);
    break;
  case 6:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar1 = Mixer_BusFXGraphPersist(This,param_5,param_3);
    break;
  case 7:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar1 = Mixer_BusFXPersist(This,param_5,(ISFGraphFilter *)param_3);
    break;
  case 10:
    iVar1 = _sfmarker::Persist(param_1,(int)This);
    break;
  case 0x10:
    iVar1 = FUN_005bda40(This,param_5);
    break;
  case 0x20:
    iVar1 = FUN_005bcf00(This,0,param_5);
    break;
  case 0x21:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar1 = FUN_005bd0a0(This,param_5,param_3);
    break;
  case 0x22:
    iVar1 = FUN_005bd2c0(This,param_5);
    break;
  case 0x23:
    iVar1 = FUN_005bd4e0(This,param_5);
    break;
  case 0x24:
    iVar1 = FUN_005bd4f0(This,param_5);
    break;
  case 0x25:
    iVar1 = FUN_005bd7b0(This,param_5);
    break;
  case 0x26:
    iVar1 = FUN_005bdb20(This,param_5);
    break;
  case 0x27:
    iVar1 = FUN_005bdc20(This,param_5);
    break;
  case 0x28:
    iVar1 = FUN_005bddd0(This,param_5);
    break;
  case 0x29:
    iVar1 = FUN_005bdde0(This,param_5);
    break;
  case 0x2a:
    iVar1 = FUN_005c2610(This,param_5);
    break;
  case 0x2b:
    iVar1 = FUN_005bd210(This,param_5);
    break;
  case 0x40:
    iVar1 = FUN_005bdf00(This,param_5);
    break;
  case 0x41:
    iVar1 = FUN_005bddf0(This,param_5);
    break;
  case 0x42:
    iVar1 = FUN_00522af0(This,param_5);
    break;
  case 0x43:
  case 0x44:
    if (param_1->lpVtbl == (IStreamVtbl *)0x20) {
      pIVar3 = param_1[0x1e].lpVtbl;
    }
    else if (param_1->lpVtbl == (IStreamVtbl *)0x25) {
      pIVar3 = param_1[0x50].lpVtbl;
    }
    else {
      pIVar3 = param_1[0x310].lpVtbl;
    }
    if (pIVar3 == (IStreamVtbl *)0x0) {
      param_1 = (IStream *)0x0;
    }
    else {
      param_1 = (IStream *)pIVar3->QueryInterface;
    }
    iVar1 = (*This->lpVtbl->Write)(This,&param_1,4,(ULONG *)0x0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (0 < (int)param_1) {
      do {
        iVar1 = tSFVIDEOFILTERCACHE::Persist(*(IStream **)(pIVar3->Release + iVar5 * 4),(int)This);
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = param_6;
      } while (iVar5 < (int)param_1);
    }
    break;
  case 0x45:
    iVar1 = _summarylisttag::Persist(param_1,(int)This);
    break;
  case 0x46:
    iVar1 = FUN_005c27c0(This,param_5);
  }
  if ((-1 < iVar1) && (iVar1 = FUN_005bad70(This,&param_4), -1 < iVar1)) {
    *piVar4 = (int)param_4 + (*piVar4 - local_4);
  }
  return iVar1;
}


