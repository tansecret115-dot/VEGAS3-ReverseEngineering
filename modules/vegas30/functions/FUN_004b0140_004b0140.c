/* Module: vegas30.exe
   Function: FUN_004b0140
   Address: 004b0140
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004b0140(int param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,uint param_6
                  )

{
  byte *pbVar1;
  ISFMixerIn *pIVar2;
  undefined4 *puVar3;
  uint *puVar4;
  SHORT SVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  longlong lVar12;
  int *local_26c;
  ISFMixerIn *local_268;
  uint *local_264;
  uint local_260;
  int local_25c;
  int local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230 [28];
  WCHAR aWStack_214 [259];
  undefined2 uStack_e;
  int iStack_4;
  
  iVar11 = param_1 + 0x80;
  local_25c = param_3 - *(int *)(param_1 + 0xb40);
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_244 = 0;
  local_26c = (int *)0x0;
  lVar12 = ftol();
  lVar12 = lVar12 + *(longlong *)(param_1 + 0xc08);
  local_260 = *param_2;
  if ((((local_260 == 0) || (*(int *)param_2[2] == 0)) ||
      (local_264 = *(uint **)(*(int *)param_2[2] + 0x20c), local_264 == (uint *)0x0)) ||
     ((*local_264 & 4) != 0)) {
    return (int *)0;
  }
  uVar6 = param_6 & 0xffffff00;
  if (((uVar6 == 0x100) || (uVar6 == 0x200)) || (uVar6 == 0x300)) {
    param_6 = uVar6;
  }
  if (param_5 == 0) {
    local_26c = (int *)0x7f88;
    if ((*local_264 & 1) == 0) {
      if (param_6 < 0x101) {
        if (param_6 != 0x100) {
          switch(param_6) {
          case 4:
          case 5:
          case 6:
          case 7:
          case 9:
          case 0xe:
          case 0xf:
            break;
          default:
            goto switchD_004b0998_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004b0998_caseD_8:
        iVar11 = *(int *)(param_1 + 0xd64);
        if (((iVar11 == 0) || (*(int *)(iVar11 + 4) != 2)) ||
           (iVar11 = FUN_005d1550(iVar11), iVar11 == 0)) goto LAB_004b0a36;
        if (DAT_0064a52c == 0) {
          if ((*(byte *)(local_264[1] + 0xc) & 4) != 0) {
            local_26c = (int *)0x10;
          }
          goto LAB_004b0a36;
        }
        goto LAB_004b09d2;
      }
      iVar11 = *(int *)(param_1 + 0xd6c);
      if (((iVar11 != 0) && (*(int *)(iVar11 + 4) == 2)) && (*(int *)(iVar11 + 0x50) != 0)) {
        iVar11 = *(int *)(iVar11 + 0x218);
        local_26c = (int *)0x10;
        local_250 = *(undefined4 *)(iVar11 + 0x20);
        local_24c = *(undefined4 *)(iVar11 + 0x24);
        local_248 = *(undefined4 *)(iVar11 + 0x28);
        local_244 = *(undefined4 *)(iVar11 + 0x2c);
      }
    }
    else {
      if (param_6 < 0x101) {
        if (param_6 != 0x100) {
          switch(param_6) {
          case 4:
          case 5:
          case 6:
          case 7:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
            break;
          default:
            goto switchD_004b08ac_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004b08ac_caseD_8:
        if (((*(int *)(param_1 + 0xd64) != 0) && (*(int *)(*(int *)(param_1 + 0xd64) + 4) == 3)) &&
           (iVar11 = FUN_004af5c0(param_2,0), iVar11 == 1)) {
          local_26c = (int *)0x10;
        }
        goto LAB_004b0a36;
      }
      if (((*(int *)(param_1 + 0xd6c) == 0) || (*(int *)(*(int *)(param_1 + 0xd6c) + 4) != 3)) ||
         (iVar7 = FUN_004af5c0(param_2,1), iVar7 != 1)) goto LAB_004b0a36;
      if (*(int *)(local_264[1] + 0x10) == 5) {
        SVar5 = GetKeyState(0x11);
        iVar11 = FUN_005a2800(iVar11,*(undefined4 *)(param_1 + 0xd64),lVar12,SVar5 < 0,0,0,0);
        if (iVar11 != 0) {
          local_26c = (int *)0x10;
        }
        goto LAB_004b0a36;
      }
LAB_004b09d2:
      local_26c = (int *)0x10;
    }
    goto LAB_004b0a36;
  }
  if (param_5 == 2) {
LAB_004b0874:
    local_26c = (int *)0x1;
  }
  else {
    if (param_5 != 3) goto LAB_004b0a36;
    FUN_004af530(*(undefined4 *)(param_1 + 8),&DAT_0064caa0,&local_250);
    if ((*local_264 & 1) == 0) {
      if (param_6 < 0x101) {
        if (param_6 != 0x100) {
          switch(param_6) {
          case 4:
          case 5:
          case 6:
          case 7:
          case 9:
          case 0xe:
          case 0xf:
            break;
          default:
            goto switchD_004b0434_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004b0434_caseD_8:
        if ((*(int *)(param_1 + 0xd64) != 0) && (*(int *)(*(int *)(param_1 + 0xd64) + 4) == 2)) {
          FUN_004e9f70(*(undefined4 *)(param_1 + 0xc48),0x219,"Track FX Drop");
          FUN_004ea250(*(undefined4 *)(param_1 + 0xc48),*(undefined4 *)(param_1 + 0xd64),0x21,0);
          local_25c = 1;
          local_264 = (uint *)0x1;
          Transport_Suspend();
          local_26c = (int *)0x0;
          iVar7 = 1;
          if (0 < (int)local_260) {
            do {
              iVar7 = *(int *)(param_2[2] + (int)local_26c * 4);
              if ((((iVar7 != 0) && (pbVar1 = *(byte **)(iVar7 + 0x20c), pbVar1 != (byte *)0x0)) &&
                  ((*pbVar1 & 4) == 0)) &&
                 ((iVar7 = *(int *)(pbVar1 + 4), iVar7 != 0 &&
                  (pIVar2 = *(ISFMixerIn **)(param_1 + 0xd64), pIVar2 != (ISFMixerIn *)0x0)))) {
                if (((*(byte *)(iVar7 + 0xc) & 4) == 0) && (DAT_0064a52c == 0)) {
                  iVar7 = iVar7 + 0x20;
                  uVar9 = _SfGetString_8(DAT_00647204,0x50df);
                  SfErrorHandler_DetailsAddString(0x8004e02f,uVar9,iVar7);
                  local_264 = (uint *)0x0;
                  local_258 = -0x7ffb1fd1;
                }
                else if (*(int *)(pIVar2 + 4) == 2) {
                  puVar3 = *(undefined4 **)(pIVar2 + 8);
                  local_268 = pIVar2;
                  iVar8 = FUN_005d0e20(puVar3,pIVar2,*(undefined4 *)(iVar7 + 0x10),
                                       *(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x18),
                                       *(undefined4 *)(iVar7 + 0x1c));
                  if (iVar8 < 0) {
                    local_264 = (uint *)0x0;
                    if (iVar8 == -0x7ffb1fd2) {
                      iVar7 = iVar7 + 0x20;
                      uVar9 = _SfGetString_8(DAT_00647204,0x50e1);
                    }
                    else {
                      iVar7 = iVar7 + 0x20;
                      uVar9 = _SfGetString_8(DAT_00647204,0x50e2);
                    }
                    SfErrorHandler_DetailsAddString(iVar8,uVar9,iVar7);
                    local_258 = iVar8;
                  }
                  else {
                    puVar4 = (uint *)*puVar3;
                    local_25c = 0;
                    *puVar4 = *puVar4 | 8;
                  }
                }
                else {
                  iVar7 = iVar7 + 0x20;
                  uVar9 = _SfGetString_8(DAT_00647204,0x50e0);
                  SfErrorHandler_DetailsAddString(0x8004e030,uVar9,iVar7);
                  local_264 = (uint *)0x0;
                  local_258 = -0x7ffb1fd0;
                }
              }
              local_26c = (int *)((int)local_26c + 1);
              iVar7 = local_25c;
            } while ((int)local_26c < (int)local_260);
          }
          Transport_Resume(0);
          if (iVar7 == 0) {
            FUN_004eb2b0(*(undefined4 *)(param_1 + 0xc48));
          }
          FUN_004ea040(*(undefined4 *)(param_1 + 0xc48),iVar7);
          if (iVar7 != 0) {
            uVar9 = _SfGetString_8(DAT_00647204,0x50e4);
            SfErrorHandler_DetailsAddString(0,uVar9);
          }
          if (local_264 == (uint *)0x0) {
            _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 8),0x30,0x19,local_258,0,0);
            local_26c = (int *)0x1;
          }
          else {
            FUN_004d48f0(iVar11,local_268,1);
            local_26c = (int *)0x1;
          }
          goto LAB_004b0a36;
        }
        goto LAB_004b0874;
      }
      local_25c = *(int *)(param_1 + 0xd6c);
      if (((local_25c != 0) && (*(int *)(local_25c + 0x50) != 0)) && (*(int *)(local_25c + 4) == 2))
      {
        local_240 = 0;
        local_23c = 0;
        local_238 = 10;
        local_234 = 10;
        local_258 = 0;
        local_254 = 0;
        iVar7 = Transport_IsAnyPlaying();
        if (iVar7 != 0) {
          FUN_005fb200(1);
        }
        local_268 = (ISFMixerIn *)0x0;
        lVar10 = Mixer_GetPreviewPort(&local_268,(char *)0x0,0);
        if (lVar10 < 0) {
          return (int *)lVar10;
        }
        local_26c = (int *)0x0;
        iVar7 = _SfAudio_CreateGraphObject_4(&local_26c);
        if (iVar7 < 0) {
          (**(code **)(*(int *)local_268 + 8))(local_268);
          return (int *)iVar7;
        }
        (**(code **)(*local_26c + 0x20))(local_26c);
        (**(code **)(*local_26c + 0x108))(local_26c);
        iVar7 = 0;
        if (0 < (int)local_26c) {
          do {
            iVar8 = *(int *)(*(int *)(iStack_4 + 8) + iVar7 * 4);
            if ((((iVar8 != 0) && (pbVar1 = *(byte **)(iVar8 + 0x20c), pbVar1 != (byte *)0x0)) &&
                ((*pbVar1 & 4) == 0)) && (iVar8 = *(int *)(pbVar1 + 4), iVar8 != 0)) {
              MultiByteToWideChar(0,1,(LPCSTR)(iVar8 + 0x20),-1,aWStack_214,0x104);
              uStack_e = 0;
              (**(code **)(*unaff_ESI + 0x88))
                        (unaff_ESI,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14),
                         *(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c),aWStack_214,0);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_26c);
        }
        pIVar2 = local_268;
        iVar11 = FUN_00561700(iVar11,local_268,unaff_ESI,&local_24c,&local_264,0,1);
        (**(code **)(*unaff_EBP + 0x108))(unaff_EBP,0);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        if ((iVar11 == 1) || (iVar11 == 3)) {
          FUN_00560cc0(DAT_0064b138,pIVar2,unaff_EBX,iVar11 != 3,0);
        }
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      goto LAB_004b0874;
    }
    local_268 = *(ISFMixerIn **)(param_1 + 0xd64);
    SVar5 = GetKeyState(0x11);
    local_260 = (uint)(SVar5 < 0);
    if (*(int *)(local_264[1] + 0x10) == 5) {
      SVar5 = GetKeyState(0x11);
      iVar7 = FUN_005a2800(iVar11,*(undefined4 *)(param_1 + 0xd64),lVar12,SVar5 < 0,0,&local_25c,
                           local_230);
      if (((iVar7 != 0) && (local_25c != 0)) && (*(int *)(local_25c + 4) == 3)) {
        FUN_005a3780(iVar11,local_25c,iVar7,local_264,1,local_230);
        local_26c = (int *)0x1;
        *(uint *)**(undefined4 **)(param_1 + 0xc48) =
             *(uint *)**(undefined4 **)(param_1 + 0xc48) | 0x200000;
      }
      goto LAB_004b0a36;
    }
    if (param_6 < 0x101) {
      if (param_6 != 0x100) {
        switch(param_6) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 0xb:
        case 0xe:
        case 0xf:
          break;
        default:
          goto switchD_004b031d_caseD_8;
        }
      }
switchD_004b031d_caseD_4:
      iVar7 = *(int *)(param_1 + 0xd6c);
      if (((iVar7 == 0) || (iVar8 = FUN_004af5c0(param_2,1), iVar8 != 1)) ||
         (*(int *)(iVar7 + 4) != 3)) goto LAB_004b0874;
      if ((*(byte *)(iVar7 + 0x10) & 0x10) == 0) {
        FUN_005a3ec0(iVar11,iVar7,param_2,lVar12,local_260,1,0xffffff9c);
      }
      else {
        FUN_005a4d10(iVar11,param_2,lVar12,local_260,1);
      }
    }
    else {
      if ((param_6 == 0x200) || (param_6 == 0x300)) goto switchD_004b031d_caseD_4;
switchD_004b031d_caseD_8:
      if (((local_268 == (ISFMixerIn *)0x0) || (iVar7 = FUN_004af5c0(param_2,0), iVar7 != 1)) ||
         (*(int *)(local_268 + 4) != 3)) goto LAB_004b0874;
      FUN_005a4080(iVar11,local_268,param_2,lVar12,local_260,1,1,0xffffff9c);
      FUN_004530a0(iVar11,0x1000);
    }
    local_26c = (int *)0x1;
    *(uint *)**(undefined4 **)(param_1 + 0xc48) =
         *(uint *)**(undefined4 **)(param_1 + 0xc48) | 0x200000;
  }
LAB_004b0a36:
  FUN_004af530(*(undefined4 *)(param_1 + 8),&DAT_0064caa0,&local_250);
  return local_26c;
}


