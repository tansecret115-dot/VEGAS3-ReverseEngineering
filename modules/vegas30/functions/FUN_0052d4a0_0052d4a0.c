/* Module: vegas30.exe
   Function: FUN_0052d4a0
   Address: 0052d4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d4a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  int *piVar4;
  HCURSOR hCursor;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  HCURSOR local_38;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 local_8 [8];
  
  piVar7 = *(int **)(param_1 + 0xcd4);
  local_4c = 1;
  if ((DAT_00647890 != 0) || (pHVar2 = GetClipboardOwner(), pHVar2 != *(HWND *)(param_1 + 4))) {
    FUN_0046dbf0(param_1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  if ((0 < *piVar7) &&
     (FUN_004694a0(piVar7,&local_10,0,&local_20,0,&local_40,local_34), local_40 == 0x32)) {
    if (piVar7 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar7;
    }
    if (iVar3 + -1 < 1) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(piVar7[2] + 4);
    }
    if ((piVar7 != (int *)0x0) && (*piVar7 == 0x32)) {
      local_18 = *(undefined4 *)(param_1 + 0xb70);
      local_14 = *(undefined4 *)(param_1 + 0xb74);
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar3 = 0;
      if (piVar4 != (int *)0x0) {
        iVar3 = *piVar4;
      }
      if ((*(int *)(param_1 + 0xcbc) < 0) || (iVar3 + -1 < *(int *)(param_1 + 0xcbc))) {
        iVar3 = 0;
      }
      else if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar3 = *(int *)(_DAT_00000008 + *(int *)(param_1 + 0xcbc) * 4);
      }
      else {
        iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar3 = *(int *)(*(int *)(iVar3 + 8) + *(int *)(param_1 + 0xcbc) * 4);
      }
      if (iVar3 != 0) {
        piVar4 = (int *)piVar7[0x2a];
        if (piVar4 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar4;
        }
        if (iVar5 + -1 < 0) {
          local_44 = 0;
        }
        else {
          local_44 = *(int *)piVar4[2];
        }
        if (local_44 != 0) {
          piVar4 = *(int **)(iVar3 + 0x650);
          iVar5 = *(int *)(iVar3 + 0x678);
          if (piVar4 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *piVar4;
          }
          if ((iVar5 < 0) || (iVar8 + -1 < iVar5)) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(piVar4[2] + iVar5 * 4);
          }
          if (iVar5 == 0) {
            uVar6 = (*(int *)(iVar3 + 4) != 3) - 1 & 0x1d;
            local_4c = FUN_0052b9d0(uVar1,iVar3,uVar6);
            if (local_4c < 0) {
              return;
            }
            iVar5 = FUN_0047c7d0(iVar3 + 0x638,uVar6);
          }
          else {
            uVar6 = *(uint *)(iVar5 + 0x10);
          }
          if (uVar6 != *(uint *)(local_44 + 0x10)) {
            FUN_0047c5a0(local_44,iVar5);
          }
          FUN_0052bcd0(uVar6);
          local_28 = (double)CONCAT44(uStack_1c,local_20);
          local_48 = 1;
          if (param_3 < 1) {
            local_28 = (double)CONCAT44(DAT_006488a4,DAT_006488a0);
            local_44 = DAT_00648898;
            local_48 = DAT_00648894;
            param_3 = DAT_0064889c;
            iVar5 = FUN_005014c0(*(undefined4 *)(param_1 + 4),&param_3,&local_28,&local_48,&local_44
                                );
            if (iVar5 != 0) {
              if (-1 < iVar5) {
                return;
              }
              _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,iVar5,0,0);
              return;
            }
            DAT_006488a0 = (undefined4)local_28;
            DAT_006488a4 = local_28._4_4_;
            DAT_00648894 = local_48;
            DAT_00648898 = local_44;
            DAT_0064889c = param_3;
            local_4c = 0;
          }
          local_38 = GetCursor();
          if (1 < param_3) {
            hCursor = (HCURSOR)_SfGetUICursor_4(0x7f02);
            SetCursor(hCursor);
          }
          FUN_005b83b0(uVar1,1);
          FUN_004e9f70(uVar1,0x49,0);
          FUN_004ea250(uVar1,iVar3,0xf,0);
          FUN_004582a0(param_1,&local_30,local_8);
          local_44 = 0;
          if (0 < param_3) {
            do {
              local_4c = FUN_0047e230(iVar3 + 0x638,piVar7 + 0x24,iVar3,
                                      local_30 +
                                      CONCAT44((piVar7[9] - local_c) -
                                               (uint)((uint)piVar7[8] < local_10),
                                               piVar7[8] - local_10),piVar7[10],piVar7[0xb],uVar6);
              if (local_4c < 0) goto LAB_0052d862;
              lVar9 = local_30 + CONCAT44(uStack_1c,local_20);
              local_30 = local_30 + CONCAT44(uStack_1c,local_20);
              if (local_48 == 0) {
                local_3c = local_44 + 1;
                local_30 = lVar9;
                lVar9 = ftol();
                local_30 = lVar9 + CONCAT44(local_14,local_18);
              }
              local_44 = local_44 + 1;
            } while (local_44 < param_3);
          }
          if (-1 < local_4c) {
            FUN_004eb2b0(uVar1);
          }
LAB_0052d862:
          FUN_004ea040(uVar1,0);
          FUN_005b84d0(uVar1,1);
          if (1 < param_3) {
            SetCursor(local_38);
          }
          FUN_0052c070(param_1,*(undefined4 *)(param_1 + 0xcbc));
          FUN_004530a0(param_1,0);
          FUN_00456c20(param_1);
          DAT_0064767c = DAT_0064767c | 4;
          if (local_4c < 0) {
            _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,local_4c,0,0);
          }
        }
      }
    }
  }
  return;
}


