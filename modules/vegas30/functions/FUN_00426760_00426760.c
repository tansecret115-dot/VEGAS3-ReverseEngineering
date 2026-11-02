/* Module: vegas30.exe
   Function: FUN_00426760
   Address: 00426760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426760(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  tagRECT *ptVar8;
  undefined4 *puVar9;
  undefined4 *local_4d4;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  tagRECT local_4c0;
  undefined1 local_4b0 [12];
  undefined4 local_4a4;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_470 [6];
  undefined4 local_458;
  undefined4 local_454;
  undefined1 local_430 [1068];
  
  if (DAT_0064762c == 0) {
    local_4cc = 0;
  }
  else {
    local_4cc = *(int *)(DAT_0064762c + 0x80);
  }
  local_4d4 = (undefined4 *)0x0;
  FUN_004266c0();
  if (param_2 != (undefined4 *)0x0) {
    local_4d4 = param_2;
  }
  uVar3 = FUN_005ba4b0(param_1,param_6);
  iVar4 = FUN_005b9fc0(param_1,uVar3,1);
  if (local_4d4 == (undefined4 *)0x0) {
    ptVar8 = (tagRECT *)0x0;
    puVar7 = (undefined1 *)0x0;
  }
  else {
    local_4c0.left = local_4d4[1];
    local_4c0.top = local_4d4[2];
    if (param_3 == 0) {
      puVar9 = &param_3;
    }
    else {
      puVar9 = (undefined4 *)0x0;
    }
    FUN_005ba670(param_1,uVar3,puVar9,local_4b0,0,param_6);
    local_4a4 = *local_4d4;
    local_498 = local_4d4[4];
    local_494 = local_4d4[5];
    ptVar8 = &local_4c0;
    puVar7 = local_4b0;
  }
  FUN_005ba6d0(param_1,uVar3,param_3,puVar7,ptVar8,param_4,param_5,param_6);
  local_4c8 = *(int *)(iVar4 + 0x34);
  local_4c4 = *(int *)(iVar4 + 0x38);
  iVar1 = *(int *)(iVar4 + 0x80);
  iVar2 = *(int *)(iVar4 + 0x84);
  puVar9 = (undefined4 *)(iVar4 + 0x40);
  puVar6 = local_470;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar6 = puVar6 + 1;
  }
  param_4 = *(undefined4 *)(iVar4 + 0x50);
  param_5 = *(undefined4 *)(iVar4 + 0x54);
  param_3 = *(undefined4 *)(iVar4 + 0x30);
  FUN_005ba030(param_1,iVar4,1,1);
  FUN_00562a50(&DAT_0064b538,&local_4c8,local_458,local_454);
  if (local_4cc != 0) {
    if (*(int *)(local_4cc + 0x94) != 0) {
      _SfVideo_InitBitmapInfo_28(local_430,param_3,local_4c8 / iVar1,local_4c4 / iVar2,0,0,0);
      (**(code **)(**(int **)(local_4cc + 0x94) + 0x54))(local_430,local_470);
      (**(code **)(**(int **)(local_4cc + 0x94) + 0x58))(param_4,param_5);
    }
    GetClientRect(*(HWND *)(local_4cc + 8),&local_4c0);
    FUN_00426140(local_4cc,local_4c0.right - local_4c0.left,local_4c0.bottom - local_4c0.top,0,0);
  }
  FUN_00426710();
  return;
}


