/* Module: vidcap30.exe
   Function: FUN_00437100
   Address: 00437100
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00437100(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HCURSOR pHVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_600;
  uchar *local_5fc;
  int local_5f8;
  undefined4 local_5f4;
  undefined1 local_5f0 [260];
  undefined1 local_4ec [260];
  undefined4 local_3e8;
  undefined4 local_3e4 [141];
  uchar local_1b0 [420];
  int local_c;
  
  local_5fc = &DAT_005bb680;
  iVar1 = param_1 + 0xa48;
  if ((*(byte *)(param_1 + 0x1ac0) & 2) == 0) {
    local_5fc = &DAT_005bb57c;
  }
  local_5f4 = DAT_005bb838;
  uVar4 = 0;
  local_5f8 = 0;
  if (*(int *)(param_1 + 0x1acc) != 0) {
    KillTimer(*(HWND *)(param_1 + 8),5);
    *(undefined4 *)(param_1 + 0x1acc) = 0;
  }
  iVar2 = FUN_00428e00(iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_0043fe60(param_1,iVar1,param_2);
    goto LAB_00437427;
  }
  if ((*(byte *)(param_1 + 0x1ac4) & 8) != 0) {
    if ((*(uint *)(param_1 + 0x1c34) & 0x200) != 0) {
      KillTimer(*(HWND *)(param_1 + 8),7);
      Sleep(1000);
    }
    iVar2 = FUN_00421b90(iVar1);
    if (iVar2 < 0) goto LAB_00437427;
    local_600 = 0;
    iVar2 = FUN_0042d700(iVar1,&local_600);
    if ((-1 < iVar2) && (local_600 != 0)) {
      while( true ) {
        local_3e8 = 0;
        puVar5 = local_3e4;
        for (iVar2 = 0xf9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar2 = FUN_0042d740(iVar1,uVar4,&local_3e8);
        if (iVar2 < 0) break;
        _mbscpy(local_1b0,local_5fc);
        if ((((*(uint *)(param_1 + 0x1c34) & 0x200) != 0) && (uVar4 == 0)) && (local_600 == 1)) {
          local_c = *(int *)(param_1 + 0x1adc) + -1;
        }
        iVar2 = FUN_00440a10(param_1,&local_3e8);
        if ((iVar2 < 0) || (uVar4 = uVar4 + 1, local_600 <= uVar4)) break;
      }
    }
    if (param_2 != 0) {
      iVar2 = FUN_00426c30(iVar1);
      if (iVar2 < 0) {
        Sleep(1000);
        iVar2 = FUN_00426c30(iVar1);
        if (iVar2 < 0) {
          FUN_0043fe60(param_1,iVar1,param_2);
          goto LAB_004372a5;
        }
      }
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 4;
    }
    if (iVar2 < 0) goto LAB_00437427;
  }
LAB_004372a5:
  *(undefined4 *)(param_1 + 0x1c50) = 1;
  iVar2 = FUN_0043e7f0(param_1,iVar1);
  if (iVar2 == -0x7ffb1ffe) {
    local_5f8 = 1;
    *(undefined4 *)(param_1 + 0x1ac8) = 3;
  }
  else if (iVar2 < 0) goto LAB_00437427;
  iVar2 = FUN_0042b1d0(iVar1,0);
  if (iVar2 == -0x7ffb1ffe) {
    local_5f8 = 1;
  }
  if ((*(byte *)(param_1 + 0x1ac4) & 8) == 0) {
    FUN_0042b850(iVar1,local_5f0,0x104);
    iVar2 = FUN_00440a50(param_1,local_5fc,local_5f0,*(undefined4 *)(param_1 + 0x1ac8),
                         *(undefined4 *)(param_1 + 0x1c40),*(undefined4 *)(param_1 + 0x1c44));
  }
  if (-1 < iVar2) {
    if (((*(uint *)(param_1 + 0x1c34) & 0x200) == 0) && ((*(uint *)(param_1 + 0x1c34) & 0x80) == 0))
    {
      pHVar3 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
      pHVar3 = SetCursor(pHVar3);
      FUN_00440c80(param_1);
      if (DAT_005bb20c != 0) {
        FUN_00456250(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c64),1,1);
        RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x181);
      }
      iVar2 = FUN_00440510(param_1,local_5f4,*(undefined4 *)(param_1 + 0x1c64),1);
      SetCursor(pHVar3);
    }
    else {
      PostMessageA(*(HWND *)(param_1 + 8),0x410,0,0);
    }
  }
  if (local_5f8 != 0) {
    FUN_0042b880(param_1 + 0xa48,local_5f0,0x104);
    _SfGetPathNameFromFilePath_12(local_5f0,local_4ec,0x104);
    SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,
             "The disk is full. Preview and capture are unavailable until you free some space on %s.\n\nYou can also change your current scratch disk in the Disk Management preferences."
             ,local_4ec);
  }
LAB_00437427:
  InvalidateRect(*(HWND *)(param_1 + 0xcc),(RECT *)0x0,1);
  return iVar2;
}


