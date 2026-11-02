/* Module: vegas30.exe
   Function: FUN_004b8660
   Address: 004b8660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004b873f) */

void FUN_004b8660(int param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int iStack_7c;
  uchar local_78 [40];
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  uchar local_28 [40];
  
  FUN_00455090(param_1,0);
  UpdateWindow(*(HWND *)(param_1 + 4));
  puVar3 = (undefined4 *)(param_1 + 0x20);
  _SfNanoTimeToText_20
            (local_78,puVar3,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),0);
  local_84 = (int *)_SfGetUIFontSize_4(0x6e);
  local_94 = *(uint *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc) + 1;
  local_8c = *(undefined4 *)(param_2 + 0x10);
  local_80 = *(int *)(param_1 + 0xb90);
  local_88 = *(undefined4 *)(param_2 + 0x14);
  iStack_7c = *(int *)(param_1 + 0xb94);
  local_90 = iVar4;
  if (local_80 == 0 && iStack_7c == 0) {
    local_94 = 0xffffffff;
  }
  else {
    lVar6 = ftol();
    uVar1 = lVar6 + *(int *)(param_1 + 0xac0);
    local_94 = (uint)uVar1;
    if ((uVar1 < 0x8000000000000000) ||
       ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_94)))) {
      if (0x3fff < (longlong)uVar1) {
        local_94 = 0x3fff;
      }
    }
    else {
      local_94 = 0xffffc000;
    }
  }
  local_8c = *local_84 * 0x10 + local_94;
  local_88 = local_84[1] + 2 + iVar4;
  iVar4 = *(int *)(param_2 + 0x10) + -2;
  if (iVar4 < local_8c) {
    local_94 = (*(int *)(param_2 + 0x10) - local_8c) + -2 + local_94;
    local_8c = iVar4;
  }
  _mbscpy(local_28,local_78);
  iVar4 = FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_94,100,local_78,0x28);
  if (iVar4 == 0) {
    iVar4 = lstrcmpA((LPCSTR)local_78,(LPCSTR)local_28);
    if (iVar4 == 0) {
      return;
    }
    puVar2 = puVar3;
    puVar5 = local_50;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    local_38 = 0;
    local_34 = 0;
    uVar7 = _SfTextToNanoTimeToken_16(local_78,local_50,0,0);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0xb70) - (uint)uVar7;
    *(uint *)(param_1 + 0x3c) =
         (*(int *)(param_1 + 0xb74) - (int)((ulonglong)uVar7 >> 0x20)) -
         (uint)(*(uint *)(param_1 + 0xb70) < (uint)uVar7);
    if (DAT_00647630 == param_1) {
      puVar2 = puVar3;
      puVar5 = &DAT_0064b110;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      DAT_0064767c = DAT_0064767c | 2;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0xbc8) + 0x458);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
    }
  }
  FUN_004530a0(param_1,0x7fff);
  return;
}


