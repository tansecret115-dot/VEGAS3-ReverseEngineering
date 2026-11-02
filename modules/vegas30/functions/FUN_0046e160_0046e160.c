/* Module: vegas30.exe
   Function: FUN_0046e160
   Address: 0046e160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_24;
  HCURSOR local_20;
  int local_1c;
  undefined4 local_18;
  BOOL local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  iVar3 = FUN_00469160(param_1);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xbc8);
    if (*(int **)(param_1 + 0xcd0) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(param_1 + 0xcd0);
    }
    FUN_004582a0(param_1,&local_8,&local_10);
    if ((local_10 != 0 || local_c != 0) || (iVar3 != 0)) {
      uVar4 = _SfGetMillisec_0();
      local_20 = (HCURSOR)0x0;
      local_24 = 1;
      if ((local_10 == 0) && (local_c == 0)) {
        local_8 = 0;
        local_4 = 0;
        local_10 = 0;
        local_c = 0x20000000;
        local_24 = 0;
      }
      local_18 = uVar4;
      local_14 = OpenClipboard(*(HWND *)(param_1 + 4));
      if (local_14 != 0) {
        EmptyClipboard();
      }
      FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
      FUN_005b83b0(uVar1,0);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0xbc8) == 0) {
          local_1c = 0;
        }
        else {
          local_1c = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        }
        if ((*(int *)(param_1 + 0xbc8) == 0) ||
           (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = _DAT_00000000;
          if (*(int *)(param_1 + 0xbc8) != 0) {
            piVar7 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
            iVar3 = *piVar7;
          }
        }
        param_1 = 0;
        if (iVar3 < 1) {
          iVar5 = 0;
        }
        else {
          do {
            iVar6 = *(int *)(*(int *)(local_1c + 8) + param_1 * 4);
            iVar5 = FUN_00469d70(uVar1,*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar2 + 0xcd4),
                                 local_8,local_4,local_10,local_c,local_18,&local_20);
            if (iVar5 < 0) break;
            if ((DAT_0064778c != 0) &&
               (iVar6 = FUN_0046a5a0(uVar1,iVar6,*(undefined4 *)(iVar2 + 0xcd4),local_8,local_4,
                                     local_10,local_c,0xffffffff), iVar6 < 0)) goto LAB_0046e2a7;
            param_1 = param_1 + 1;
          } while (param_1 < iVar3);
        }
      }
      else {
        iVar5 = FUN_00469d70(uVar1,*(undefined4 *)(param_1 + 0xcd0),*(undefined4 *)(param_1 + 0xcd4)
                             ,local_8,local_4,local_10,local_c,uVar4,&local_20);
        if ((-1 < iVar5) && (DAT_0064778c != 0)) {
          FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd0));
          iVar6 = FUN_0046be00(uVar1,*(undefined4 *)(param_1 + 0xcd4),local_8,local_4,local_10,
                               local_c,local_24);
          if (iVar6 != 1) {
LAB_0046e2a7:
            iVar5 = iVar6;
          }
        }
      }
      FUN_005b84d0(uVar1,0);
      FUN_0046dae0(*(undefined4 *)(iVar2 + 0xcd4),local_24,local_8,local_4,local_10,local_c);
      if (local_14 != 0) {
        FUN_0046dbd0(iVar2,*(undefined4 *)(iVar2 + 0xcd4));
        CloseClipboard();
      }
      if (iVar5 < 0) {
        _SfErrorHandler_MsgBox_24(0,0x30,8,iVar5,0,0);
      }
      else if (local_24 == 0) {
        FUN_004e9f70(uVar1,0x15,0);
        FUN_0046d820(iVar2,DAT_00647784);
        FUN_004eb2b0(uVar1);
        FUN_004ea040(uVar1,0);
      }
      else {
        FUN_0046c490(iVar2,local_8,local_4,local_10,local_c,DAT_00647784,
                     -(uint)(DAT_00647784 != 0) & DAT_0064a588,0x15);
      }
      if (local_20 != (HCURSOR)0x0) {
        SetCursor(local_20);
      }
      FUN_00456c20(iVar2);
      DAT_0064767c = DAT_0064767c | 4;
    }
  }
  return;
}


