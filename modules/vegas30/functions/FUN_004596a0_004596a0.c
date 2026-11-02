/* Module: vegas30.exe
   Function: FUN_004596a0
   Address: 004596a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004596a0(int param_1,HWND param_2,int param_3,byte param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  tagPOINT local_8;
  
  local_8.x = (LONG)(short)param_5;
  local_8.y = (LONG)(short)((uint)param_5 >> 0x10);
  if (param_3 == 0x200) {
    if ((*(uint *)(param_1 + 0x18) & 0x20000000) == 0) {
      return;
    }
    _SfWheel_AutoScrollSetCursor_4(param_1 + 0xe8);
    if (DAT_00647684 == &DAT_00454a00) {
      return;
    }
    iVar2 = _SfWheel_AutoScrollPtInOrigin_12(param_1 + 0xe8,local_8.x,local_8.y);
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0x17;
    SetCapture(param_2);
    ScreenToClient(param_2,&local_8);
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    uVar3 = 0x40;
    if (*(int *)(param_1 + 0xf8) != 0) {
      uVar3 = 0x41;
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      uVar3 = uVar3 | 2;
    }
    FUN_00454f60(param_1,local_8.x,local_8.y,param_1 + 0x11c,&DAT_00612860,uVar3);
    return;
  }
  if (param_3 != 0x207) {
    if (param_3 != 0x208) {
      return;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x20000000) == 0) {
      return;
    }
    if (DAT_00647684 != &DAT_00454a00) {
      iVar2 = _SfWheel_AutoScrollPtInOrigin_12(param_1 + 0xe8,local_8.x,local_8.y);
      if (iVar2 != 0) {
        _SfWheel_AutoScrollSetCursor_4(param_1 + 0xe8);
        return;
      }
    }
    FUN_00459640(param_1);
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x20000000) != 0) {
    FUN_00459640(param_1);
    return;
  }
  if ((*(uint *)(param_1 + 0x174) & 0xf0000) != 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0xe8);
  puVar4 = puVar1;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(param_1 + 0xb88) == 0 && *(int *)(param_1 + 0xb8c) == 0) {
    if ((*(int *)(param_1 + 0x604) <= *(int *)(param_1 + 0xb94)) &&
       ((*(int *)(param_1 + 0x604) < *(int *)(param_1 + 0xb94) ||
        (*(uint *)(param_1 + 0x600) <= *(uint *)(param_1 + 0xb90))))) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      goto LAB_004597a9;
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = 1;
LAB_004597a9:
  if ((*(int *)(param_1 + 0xba8) == 0) && (*(int *)(param_1 + 0x674) <= *(int *)(param_1 + 0xbac)))
  {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = 1;
  }
  if ((param_4 & 4) != 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if ((*(int *)(param_1 + 0xf8) != 0) || (*(int *)(param_1 + 0xfc) != 0)) {
    SetFocus(*(HWND *)(param_1 + 4));
    *puVar1 = param_2;
    *(undefined4 *)(param_1 + 0xec) = DAT_006471fc;
    *(LONG *)(param_1 + 0xf0) = local_8.x;
    *(LONG *)(param_1 + 0xf4) = local_8.y;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0x23e7;
    *(undefined4 *)(param_1 + 0x108) = 0x23e7;
    *(undefined4 *)(param_1 + 0x10c) = 0x23e7;
    *(undefined4 *)(param_1 + 0x110) = 0x23e7;
    *(undefined4 *)(param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x118) = 0;
    iVar2 = _SfWheel_AutoScrollInit_4(puVar1);
    if (iVar2 != 0) {
      _SfWheel_AutoScrollOriginIcon_8(puVar1,1);
      _SfWheel_AutoScrollSetCursor_4(puVar1);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
      return;
    }
  }
  return;
}


