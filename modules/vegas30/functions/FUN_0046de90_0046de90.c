/* Module: vegas30.exe
   Function: FUN_0046de90
   Address: 0046de90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046de90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_24;
  HCURSOR local_20;
  int local_1c;
  undefined4 local_18;
  BOOL local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  if (*(int **)(param_1 + 0xcd0) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(param_1 + 0xcd0);
  }
  FUN_004582a0(param_1,&local_8,&local_10);
  if ((local_10 != 0 || local_c != 0) || (iVar7 != 0)) {
    uVar3 = _SfGetMillisec_0();
    local_20 = (HCURSOR)0x0;
    local_24 = 1;
    if ((local_10 == 0) && (local_c == 0)) {
      local_24 = 0;
      local_8 = 0;
      local_4 = 0;
      local_10 = 0;
      local_c = 0x20000000;
    }
    local_18 = uVar3;
    local_14 = OpenClipboard(*(HWND *)(param_1 + 4));
    if (local_14 != 0) {
      EmptyClipboard();
    }
    FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
    uVar1 = *(undefined4 *)(param_1 + 0xbc8);
    FUN_005b83b0(uVar1,0);
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        local_1c = 0;
      }
      else {
        local_1c = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      if ((*(int *)(param_1 + 0xbc8) == 0) ||
         (iVar7 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = _DAT_00000000;
        if (*(int *)(param_1 + 0xbc8) != 0) {
          piVar6 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          iVar7 = *piVar6;
        }
      }
      param_1 = 0;
      if (iVar7 < 1) {
        iVar4 = 0;
      }
      else {
        do {
          iVar5 = *(int *)(*(int *)(local_1c + 8) + param_1 * 4);
          iVar4 = FUN_00469d70(uVar1,*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar2 + 0xcd4),
                               local_8,local_4,local_10,local_c,local_18,&local_20);
          if (iVar4 < 0) break;
          if ((DAT_0064778c != 0) &&
             (iVar5 = FUN_0046a5a0(uVar1,iVar5,*(undefined4 *)(iVar2 + 0xcd4),local_8,local_4,
                                   local_10,local_c,0xffffffff), iVar5 < 0)) goto LAB_0046dfc9;
          param_1 = param_1 + 1;
        } while (param_1 < iVar7);
      }
    }
    else {
      iVar4 = FUN_00469d70(uVar1,*(undefined4 *)(param_1 + 0xcd0),*(undefined4 *)(param_1 + 0xcd4),
                           local_8,local_4,local_10,local_c,uVar3,&local_20);
      if ((-1 < iVar4) && (DAT_0064778c != 0)) {
        FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd0));
        iVar5 = FUN_0046be00(uVar1,*(undefined4 *)(param_1 + 0xcd4),local_8,local_4,local_10,local_c
                             ,local_24);
        if (iVar5 != 1) {
LAB_0046dfc9:
          iVar4 = iVar5;
        }
      }
    }
    FUN_005b84d0(uVar1,0);
    FUN_0046dae0(*(undefined4 *)(iVar2 + 0xcd4),local_24,local_8,local_4,local_10,local_c);
    if (local_14 != 0) {
      FUN_0046dbd0(iVar2,*(undefined4 *)(iVar2 + 0xcd4));
      CloseClipboard();
    }
    FUN_00456c20(iVar2);
    DAT_0064767c = DAT_0064767c | 4;
    if (local_20 != (HCURSOR)0x0) {
      SetCursor(local_20);
    }
    if (iVar4 < 0) {
      _SfErrorHandler_MsgBox_24(0,0x30,8,iVar4,0,0);
    }
  }
  return;
}


