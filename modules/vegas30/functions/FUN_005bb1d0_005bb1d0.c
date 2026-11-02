/* Module: vegas30.exe
   Function: FUN_005bb1d0
   Address: 005bb1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005bb1d0(undefined4 param_1,int param_2,ISFMixerIn *param_3,ulong param_4,IStream *param_5,
                int param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *puVar5;
  ISFMixerIn *pIVar6;
  int iStack_590;
  int local_58c;
  undefined4 local_588;
  ULONG local_584 [2];
  int local_57c;
  int local_578;
  _GUID _Stack_574;
  undefined4 local_564 [345];
  
  *param_7 = 0;
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  iVar2 = FUN_005bad70(param_5,&local_57c);
  if (iVar2 < 0) {
    return iVar2;
  }
  switch(param_1) {
  case 1:
    iVar2 = FUN_005bbed0(param_5,param_6,param_2,0);
    break;
  case 2:
    puVar5 = local_564;
    for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_005d30f0(local_564);
    iVar2 = FUN_005e79b0(param_5,param_6,local_564);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_005d2700(param_2,local_564,0,0);
    break;
  case 3:
    iVar2 = Mixer_FXBusContainerCreate(param_5,param_6,param_4);
    break;
  default:
    return -0x7ff8ffa9;
  case 5:
    puVar5 = local_564;
    for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar2 = FUN_005e79b0(param_5,1,local_564);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_005d2700(param_2,local_564,0,0);
    break;
  case 6:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar2 = Mixer_BusFXGraphCreate(param_5,param_6,param_3);
    break;
  case 7:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar2 = Mixer_BusFXCreate(param_5,param_6,(ISFGraphFilter *)param_3);
    break;
  case 10:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar2 = _sfmarker::Create(param_5,param_6,*(tSFLIST **)param_3,param_4);
    break;
  case 0x10:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x25) {
      return -0x7ff8ffa9;
    }
    uVar3 = FUN_005c6950(param_3);
    iVar2 = FUN_005c1e50(param_5,param_6,param_2,param_3,0,uVar3 == param_4);
    break;
  case 0x20:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005be080(param_5,param_6,param_2,0,param_4,*(undefined4 *)param_3);
    break;
  case 0x21:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c0460(param_5,param_6,param_3 + 0x38);
    break;
  case 0x22:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c0a90(param_5,param_6,param_3 + 0x38,param_3);
    break;
  case 0x23:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c0e70(param_5,param_6,param_3 + 0x38);
    break;
  case 0x24:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c0e80(param_5,param_6,param_3 + 0x38);
    break;
  case 0x25:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c0e90(param_5,param_6,param_2,param_3,param_4,0,0);
    break;
  case 0x26:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x25) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c1ea0(param_5,param_6,param_3 + 0xf0);
    break;
  case 0x27:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x25) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c1f50(param_5,param_6,param_3 + 0xf0,param_3);
    break;
  case 0x28:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x25) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c22d0(param_5,param_6,param_3 + 0xf0);
    break;
  case 0x29:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x25) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c22e0(param_5,param_6,param_3 + 0xf0);
    break;
  case 0x2a:
    iVar2 = FUN_005c26b0(param_5,param_6,param_2,local_584);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = FUN_005d9930(param_2,local_584);
    break;
  case 0x2b:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    if (*(int *)(param_3 + 0x244) == 0) {
      if (*(int **)(param_3 + 0x234) != (int *)0x0) {
        iVar2 = **(int **)(param_3 + 0x234);
        goto LAB_005bb657;
      }
    }
    else {
      iVar2 = FUN_005d0420(param_3);
LAB_005bb657:
      if (((0 < iVar2) && (-1 < (int)param_4)) && ((int)param_4 < iVar2)) {
        piVar1 = *(int **)(param_3 + 0x234);
        if (piVar1 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar1;
        }
        if (iVar2 + -1 < (int)param_4) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(piVar1[2] + param_4 * 4);
        }
        if (iVar2 == 0) {
          return -0x7fffbffd;
        }
        iVar2 = FUN_005c09b0(param_5,param_6,iVar2,0,0,1);
        break;
      }
    }
    iVar2 = _SfList_AllocItem_12(*(undefined4 *)(param_3 + 0x234),0x20,&local_58c);
    if (local_58c != 0) {
      iVar2 = FUN_005c09b0(param_5,param_6,local_58c,0,0,0);
      if (iVar2 < 0) {
        _SfList_DeleteList_16(*(undefined4 *)(param_3 + 0x234),0xffffffff,0xffffffff,0);
      }
      else {
        iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x234),param_4,0,0xffffffff);
        if ((*(int *)(local_58c + 0x1c) != 0) && (*(int *)(local_58c + 4) == 0)) {
          *(int *)(param_3 + 0x240) = *(int *)(param_3 + 0x240) + 1;
        }
      }
    }
    break;
  case 0x40:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x41) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c24a0(param_5,param_6,param_2,param_3);
    break;
  case 0x41:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 == 0x20) {
      iVar2 = FUN_005c22f0(param_5,param_6,param_2,param_3 + 0x638,param_3);
    }
    else {
      if (*(int *)param_3 != 0x25) {
        return -0x7ff8ffa9;
      }
      iVar2 = FUN_005c22f0(param_5,param_6,param_2,param_3 + 0x98,param_3);
    }
    break;
  case 0x42:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 == 0x20) {
      iVar2 = FUN_00522d40(param_5,param_6,param_3 + 0x80,param_3);
    }
    else {
      if (*(int *)param_3 != 0x25) {
        return -0x7ff8ffa9;
      }
      iVar2 = FUN_00522d40(param_5,param_6,param_3 + 0x144,param_3);
    }
    break;
  case 0x43:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 == 0x20) {
      pIVar6 = param_3 + 0x78;
      local_588 = 2;
    }
    else if (*(int *)param_3 == 0x25) {
      pIVar6 = param_3 + 0x140;
      local_588 = 1;
    }
    else {
      pIVar6 = (ISFMixerIn *)(param_2 + 0xc40);
      local_588 = 4;
    }
    if (*(tSFLIST **)pIVar6 != (tSFLIST *)0x0) {
      _SfVideoPlugin_DestroyCacheList_4(*(tSFLIST **)pIVar6);
      *(tSFLIST **)pIVar6 = (tSFLIST *)0x0;
    }
    iVar2 = (*param_5->lpVtbl->Read)(param_5,&local_58c,4,local_584);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (local_584[0] != 4) {
      return -0x7ffb1ff8;
    }
    iVar4 = 0;
    iStack_590 = 0;
    if (0 < local_58c) {
      do {
        iVar2 = tSFVIDEOFILTERCACHE::Create
                          (param_5,param_6,(tSFLIST **)pIVar6,
                           (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,&_Stack_574);
        if (iVar2 < 0) {
          iVar4 = iVar4 + 1;
          FUN_005bb170(&_Stack_574,"Filter");
          iVar2 = 0;
        }
        else {
          FUN_005a5060(*(undefined4 *)(*(int *)(*(tSFLIST **)pIVar6 + 8) + (iStack_590 - iVar4) * 4)
                       ,param_3,local_588,0xffffffff,0x7fffffff);
        }
        iStack_590 = iStack_590 + 1;
      } while (iStack_590 < local_58c);
    }
    break;
  case 0x44:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    if (*(int *)param_3 != 0x20) {
      return -0x7ff8ffa9;
    }
    pIVar6 = param_3 + 0x7c;
    iVar4 = 0;
    if (*(int *)(param_3 + 0x7c) != 0) {
      _SfVideoPlugin_DestroyCacheList_4(*(int *)(param_3 + 0x7c));
      *(tSFLIST **)pIVar6 = (tSFLIST *)0x0;
    }
    iVar2 = (*param_5->lpVtbl->Read)(param_5,&local_58c,4,local_584);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (local_584[0] != 4) {
      return -0x7ffb1ff8;
    }
    iStack_590 = 0;
    if (0 < local_58c) {
      do {
        iVar2 = tSFVIDEOFILTERCACHE::Create
                          (param_5,param_6,(tSFLIST **)pIVar6,
                           (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,&_Stack_574);
        if (iVar2 < 0) {
          iVar4 = iVar4 + 1;
          FUN_005bb170(&_Stack_574,"Track Mask Filter");
          iVar2 = 0;
        }
        else {
          FUN_005a5060(*(undefined4 *)(*(int *)(*(tSFLIST **)pIVar6 + 8) + (iStack_590 - iVar4) * 4)
                       ,param_3,3,0xffffffff,0x7fffffff);
        }
        iStack_590 = iStack_590 + 1;
      } while (iStack_590 < local_58c);
    }
    break;
  case 0x45:
    iVar2 = _summarylisttag::Create(param_5,param_6,(_summarylisttag *)(param_2 + 0x1bc));
    break;
  case 0x46:
    if (param_3 == (ISFMixerIn *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar2 = FUN_005c2880(param_5,param_6,param_2,param_4,0);
  }
  if ((-1 < iVar2) && (iVar2 = FUN_005bad70(param_5,&local_578), -1 < iVar2)) {
    *param_7 = *param_7 + (local_578 - local_57c);
  }
  return iVar2;
}


