/* Module: vegas30.exe
   Function: FUN_004af6f0
   Address: 004af6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004af6f0(int param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,uint param_6
                  )

{
  ISFMixerIn *pIVar1;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *puVar10;
  int *piVar11;
  longlong lVar12;
  int *local_190;
  uint *local_18c;
  int *local_188;
  ISFMixerIn *local_184;
  uint local_180;
  int local_17c [3];
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  int local_160 [7];
  undefined1 local_144 [24];
  undefined1 auStack_12c [4];
  undefined4 auStack_128 [72];
  int local_8;
  int iStack_4;
  
  iVar9 = param_1 + 0x80;
  local_17c[0] = param_3 - *(int *)(param_1 + 0xb40);
  local_188 = (int *)0x0;
  lVar12 = ftol();
  lVar12 = lVar12 + *(longlong *)(param_1 + 0xc08);
  local_170 = 0;
  local_180 = *param_2;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  if (((local_180 == 0) || (*(int *)param_2[2] == 0)) ||
     (local_18c = *(uint **)(*(int *)param_2[2] + 0x20c), local_18c == (uint *)0x0)) {
    return (int *)0x0;
  }
  uVar5 = param_6 & 0xffffff00;
  if (((uVar5 == 0x100) || (uVar5 == 0x200)) || (uVar5 == 0x300)) {
    param_6 = uVar5;
  }
  if (param_5 == 0) {
    local_188 = (int *)0x7f88;
    if ((*local_18c & 1) == 0) {
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
            goto switchD_004b001c_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004b001c_caseD_8:
        if ((*(int *)(param_1 + 0xd64) == 0) || (*(int *)(*(int *)(param_1 + 0xd64) + 4) != 2))
        goto LAB_004b00a8;
        if (DAT_0064a52c == 0) {
          if ((*local_18c & 2) != 0) {
            local_188 = (int *)0x10;
          }
          goto LAB_004b00a8;
        }
        goto LAB_004b004d;
      }
      iVar9 = *(int *)(param_1 + 0xd6c);
      if (((iVar9 != 0) && (*(int *)(iVar9 + 4) == 2)) && (*(int *)(iVar9 + 0x50) != 0)) {
        iVar9 = *(int *)(iVar9 + 0x218);
        local_188 = (int *)0x10;
        local_170 = *(undefined4 *)(iVar9 + 0x20);
        local_16c = *(int *)(iVar9 + 0x24);
        local_168 = *(undefined4 *)(iVar9 + 0x28);
        local_164 = *(undefined4 *)(iVar9 + 0x2c);
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
            goto switchD_004afefb_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004afefb_caseD_8:
        if (((*(int *)(param_1 + 0xd64) != 0) && (*(int *)(*(int *)(param_1 + 0xd64) + 4) == 3)) &&
           (iVar9 = FUN_004af5c0(param_2,0), iVar9 == 2)) {
          local_188 = (int *)0x10;
        }
        goto LAB_004b00a8;
      }
      if (((*(int *)(param_1 + 0xd6c) == 0) || (*(int *)(*(int *)(param_1 + 0xd6c) + 4) != 3)) ||
         (iVar3 = FUN_004af5c0(param_2,1), iVar3 != 2)) goto LAB_004b00a8;
      iVar3 = *(int *)(*(int *)param_2[2] + 0x20c);
      _FXPackage_GetPackageInfo_20
                (*(undefined4 *)(iVar3 + 0x10c),*(undefined4 *)(iVar3 + 0x110),
                 *(undefined4 *)(iVar3 + 0x114),*(undefined4 *)(iVar3 + 0x118),auStack_128 + 3);
      if (local_8 == 6) {
        SVar2 = GetKeyState(0x11);
        iVar9 = FUN_005a2800(iVar9,*(undefined4 *)(param_1 + 0xd64),lVar12,SVar2 < 0,0,0,0);
        if (iVar9 != 0) {
          local_188 = (int *)0x10;
        }
        goto LAB_004b00a8;
      }
LAB_004b004d:
      local_188 = (int *)0x10;
    }
    goto LAB_004b00a8;
  }
  if (param_5 != 2) {
    if (param_5 != 3) goto LAB_004b00a8;
    FUN_004af530(*(undefined4 *)(param_1 + 8),&DAT_0064ca90,&local_170);
    if ((*local_18c & 1) == 0) {
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
            goto switchD_004afa0d_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004afa0d_caseD_8:
        if ((*(int *)(param_1 + 0xd64) != 0) && (*(int *)(*(int *)(param_1 + 0xd64) + 4) == 2)) {
          FUN_004e9f70(*(undefined4 *)(param_1 + 0xc48),0x219,"Track FX Package Drop");
          FUN_004ea250(*(undefined4 *)(param_1 + 0xc48),*(undefined4 *)(param_1 + 0xd64),0x21,0);
        }
        local_184 = (ISFMixerIn *)0x0;
        local_18c = (uint *)0x0;
        while( true ) {
          pIVar1 = local_184;
          piVar7 = local_190;
          uVar5 = local_180;
          if (1 < (int)local_180) {
            uVar5 = 1;
          }
          if ((int)uVar5 <= (int)local_18c) break;
          iVar3 = *(int *)(param_2[2] + (int)local_18c * 4);
          if ((((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x20c), iVar3 != 0)) &&
              (piVar7 = *(int **)(param_1 + 0xd64), piVar7 != (int *)0x0)) && (piVar7[1] == 2)) {
            local_190 = piVar7;
            Transport_Suspend();
            iVar4 = FUN_004af160(piVar7,iVar3 + 0x10c,1,1);
            Transport_Resume(0);
            if (iVar4 < 0) {
              iVar4 = _SfErrorHandler_MsgBox_24(DAT_00647624,0x13b,3,0x8004e031,iVar3 + 8,0);
              if (iVar4 != 6) {
                if (iVar4 == 0x65) {
                  FUN_00525890(iVar3);
                }
                goto LAB_004afb44;
              }
              Transport_Suspend();
              FUN_004af160(local_190,iVar3 + 0x10c,0,0);
              Transport_Resume(0);
            }
            local_184 = (ISFMixerIn *)0x1;
          }
LAB_004afb44:
          local_18c = (uint *)((int)local_18c + 1);
        }
        if (local_184 != (ISFMixerIn *)0x0) {
          FUN_004eb2b0(*(undefined4 *)(param_1 + 0xc48));
          if (piVar7[0x91] == 0) {
            if ((int *)piVar7[0x8d] != (int *)0x0) {
              iVar3 = *(int *)piVar7[0x8d];
              goto LAB_004afb90;
            }
LAB_004afb94:
            uVar6 = _SfGetString_8(DAT_00647204,0x4f5b);
            SfMsgBox(DAT_00647624,0x30,uVar6);
          }
          else {
            iVar3 = FUN_005d0420(piVar7);
LAB_004afb90:
            if (iVar3 == 0) goto LAB_004afb94;
            FUN_004d48f0(iVar9,piVar7,1);
          }
          **(uint **)piVar7[2] = **(uint **)piVar7[2] | 8;
        }
        local_188 = (int *)0x1;
        FUN_004ea040(*(undefined4 *)(param_1 + 0xc48),pIVar1 == (ISFMixerIn *)0x0);
        goto LAB_004b00a8;
      }
      iVar3 = *(int *)(param_1 + 0xd6c);
      local_160[0] = iVar3;
      if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) && (*(int *)(iVar3 + 0x50) != 0)) {
        local_160[3] = 0;
        local_160[4] = 0;
        local_160[5] = 10;
        local_160[6] = 10;
        local_160[1] = 0;
        local_160[2] = 0;
        iVar4 = Transport_IsAnyPlaying();
        if (iVar4 != 0) {
          FUN_005fb200(1);
        }
        local_184 = (ISFMixerIn *)0x0;
        piVar7 = (int *)Mixer_GetPreviewPort(&local_184,(char *)0x0,0);
        if ((int)piVar7 < 0) {
          return piVar7;
        }
        local_190 = (int *)0x0;
        piVar7 = (int *)_SfAudio_CreateGraphObject_4(&local_190);
        if ((int)piVar7 < 0) {
          (**(code **)(*(int *)local_184 + 8))(local_184);
          return piVar7;
        }
        (**(code **)(*local_190 + 0x20))(local_190);
        (**(code **)(*local_188 + 0x108))(local_188,unaff_EBX);
        local_188 = (int *)0x0;
        while( true ) {
          piVar11 = local_188;
          puVar8 = local_18c;
          if (1 < (int)local_18c) {
            puVar8 = (uint *)0x1;
          }
          if ((int)puVar8 <= (int)local_188) break;
          iVar3 = *(int *)(*(int *)(iStack_4 + 8) + (int)local_188 * 4);
          if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x20c), iVar3 != 0)) {
            unaff_EBP = (int *)0x0;
            piVar7 = (int *)(**(code **)*unaff_ESI)(unaff_ESI,&DAT_006335c8,&stack0xfffffe68);
            if (-1 < (int)piVar7) {
              puVar10 = auStack_128;
              for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              auStack_128[0] = *(undefined4 *)(iVar3 + 0x10c);
              auStack_128[1] = *(undefined4 *)(iVar3 + 0x110);
              auStack_128[2] = *(undefined4 *)(iVar3 + 0x114);
              auStack_128[3] = *(undefined4 *)(iVar3 + 0x118);
              piVar7 = (int *)_FXPackage_LoadPackage_16(0,auStack_128,1,1);
              if ((int)piVar7 < 0) {
                iVar4 = _SfErrorHandler_MsgBox_24(DAT_00647624,0x13b,3,0x8004e031,iVar3 + 8,0);
                if (iVar4 == 6) {
                  (**(code **)(*unaff_ESI + 0x94))(unaff_ESI);
                  piVar7 = (int *)_FXPackage_LoadPackage_16(unaff_ESI,auStack_12c,0,0);
                  local_188 = (int *)0x0;
                  iVar3 = (**(code **)(*unaff_EDI + 0xb8))(unaff_EDI,&local_188);
                  if ((-1 < iVar3) && (local_184 != (ISFMixerIn *)0x0)) {
                    local_180 = 0;
                    (**(code **)(*(int *)local_184 + 0xc))(local_184,1,&local_180,0);
                    if (local_190 == (int *)0x0) {
                      uVar6 = _SfGetString_8(DAT_00647204,0x4f5b);
                      SfMsgBox(DAT_00647624,0x30,uVar6);
                      piVar7 = (int *)0x80004004;
                    }
                    else {
                      (**(code **)(*local_190 + 8))(local_190);
                    }
                    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
                  }
                }
                else {
                  if (iVar4 == 0x65) {
                    FUN_00525890(iVar3);
                  }
                  piVar7 = (int *)0x80004004;
                  (**(code **)(*unaff_ESI + 0x94))(unaff_ESI);
                }
              }
              (**(code **)(_DAT_00000000 + 8))(0);
              piVar11 = local_188;
            }
          }
          local_188 = (int *)((int)piVar11 + 1);
          iVar3 = local_16c;
        }
        if (-1 < (int)piVar7) {
          iVar9 = FUN_00561700(iVar9,iVar3,unaff_ESI,local_160,&local_168,0,1);
          (**(code **)(*local_190 + 0x108))(local_190,0);
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          if ((iVar9 == 1) || (iVar9 == 3)) {
            FUN_00560cc0(DAT_0064b138,iVar3,unaff_ESI,iVar9 != 3,0);
          }
        }
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      goto LAB_004b00a8;
    }
    local_190 = *(int **)(param_1 + 0xd64);
    SVar2 = GetKeyState(0x11);
    local_180 = (uint)(SVar2 < 0);
    _FXPackage_GetPackageInfo_20
              (local_18c[0x43],local_18c[0x44],local_18c[0x45],local_18c[0x46],auStack_128 + 3);
    if ((*(int *)(param_1 + 0xd6c) == 0) || (iVar3 = FUN_004af5c0(param_2,1), iVar3 != 2)) {
LAB_004af8c7:
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
            goto switchD_004af8e5_caseD_8;
          }
        }
      }
      else if ((param_6 != 0x200) && (param_6 != 0x300)) {
switchD_004af8e5_caseD_8:
        if ((((local_190 != (int *)0x0) && (local_190[1] == 3)) &&
            (iVar3 = FUN_004af5c0(param_2,0), iVar3 == 1)) && (local_8 == 5)) {
          FUN_005a4b60(iVar9,local_190,param_2,lVar12,local_180,1,1);
          FUN_004530a0(iVar9,0x1000);
          *(uint *)**(undefined4 **)(param_1 + 0xc48) =
               *(uint *)**(undefined4 **)(param_1 + 0xc48) | 0x200000;
        }
        goto LAB_004b00a8;
      }
      iVar3 = *(int *)(param_1 + 0xd6c);
      if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 3)) ||
         (iVar4 = FUN_004af5c0(param_2,1), iVar4 != 2)) goto LAB_004af9e2;
      if ((*(byte *)(iVar3 + 0x10) & 0x10) == 0) {
        FUN_005a4990(iVar9,iVar3,param_2,lVar12,local_180,1);
      }
      else {
        FUN_005a4da0(iVar9,param_2,lVar12,local_180,1);
      }
      puVar8 = (uint *)**(undefined4 **)(param_1 + 0xc48);
    }
    else {
      SVar2 = GetKeyState(0x11);
      iVar3 = FUN_005a2800(iVar9,*(undefined4 *)(param_1 + 0xd64),lVar12,SVar2 < 0,0,local_17c,
                           local_144);
      if ((iVar3 == 0) || (local_17c[0] == 0)) goto LAB_004af8c7;
      FUN_005a3990(iVar9,local_17c[0],iVar3,local_18c,1,local_144);
      puVar8 = (uint *)**(undefined4 **)(param_1 + 0xc48);
    }
    *puVar8 = *puVar8 | 0x200000;
  }
LAB_004af9e2:
  local_188 = (int *)0x1;
LAB_004b00a8:
  FUN_004af530(*(undefined4 *)(param_1 + 8),&DAT_0064ca90,&local_170);
  return local_188;
}


