/* Module: vegas30.exe
   Function: FUN_0043ea10
   Address: 0043ea10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043ea10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                longlong *param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_29c;
  int local_298;
  int local_294;
  longlong local_290;
  int local_288;
  longlong local_284;
  int local_27c;
  int local_278;
  int local_274;
  longlong local_270;
  int local_268 [5];
  int local_254;
  int local_250;
  int local_24c;
  undefined1 *local_248;
  uint local_240 [2];
  undefined8 local_238;
  uint local_220;
  uchar local_208 [259];
  undefined1 local_105;
  CHAR local_104 [260];
  
  local_274 = DAT_00647630;
  if (DAT_00647630 == 0) {
    return 0;
  }
  if (param_5 != (longlong *)0x0) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)((int)param_5 + 4) = 0;
  }
  uVar7 = __allmul(DAT_0064aef0,DAT_0064aef0 >> 0x1f,10000000,0);
  lVar8 = __alldiv(uVar7,0x4b,0);
  local_290 = lVar8;
  if (param_6 == 0) {
    local_290 = 0;
  }
  local_284 = 0;
  if (param_7 != 0) {
    local_284 = lVar8;
  }
  lVar8 = FUN_0043e470(param_3,param_4);
  local_29c = 0;
  iVar1 = FUN_004ab190(param_2,param_1,&local_29c);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_29c == 0) {
    return iVar1;
  }
  iVar2 = FUN_004ab060(local_29c,2);
  if (iVar2 == 0) {
    return iVar1;
  }
  iVar2 = FUN_004aafe0(local_29c,2,0);
  if (iVar2 == 0) {
    return iVar1;
  }
  local_27c = *(int *)(iVar2 + 0x20);
  local_278 = *(int *)(iVar2 + 0x24);
  local_288 = *(int *)(iVar2 + 0x10);
  if ((local_27c == 0) && (local_278 == 0)) {
    return iVar1;
  }
  lVar9 = FUN_0043e470(local_27c,local_278);
  local_270 = lVar9;
  piVar3 = (int *)FUN_005b87b0(param_1);
  iVar1 = FUN_004ca930(DAT_00647630);
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if ((iVar1 < 0) || (iVar2 + -1 < iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(piVar3[2] + iVar1 * 4);
  }
  local_298 = iVar1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 2) {
LAB_0043ebb2:
      local_298 = iVar1;
      if (iVar1 != 0) goto LAB_0043ebd8;
    }
    else {
      local_298 = 0;
      iVar2 = 0;
      if (0 < *piVar3) {
        piVar5 = (int *)piVar3[2];
        do {
          iVar1 = *piVar5;
          if (*(int *)(iVar1 + 4) == 2) goto LAB_0043ebb2;
          iVar2 = iVar2 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar2 < *piVar3);
      }
    }
  }
  iVar1 = FUN_005ce780(&local_298,param_1,2,0xffffffff,"CD Audio");
  if (local_298 == 0) {
    return iVar1;
  }
LAB_0043ebd8:
  FUN_0046cb60(local_274,0,lVar8,lVar9 + local_284 + local_290,1,1,0,1);
  FUN_005b83b0(param_1,1);
  iVar1 = FUN_005c9cc0(&local_294,param_1,local_298,2,lVar8 + local_290,0,0,0);
  if (param_5 != (longlong *)0x0) {
    *param_5 = local_290 + lVar9;
  }
  if (-1 < iVar1) {
    piVar3 = local_268;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_254 = local_278;
    local_268[0] = 0x10;
    local_268[2] = 0;
    local_268[3] = 0;
    local_268[4] = local_27c;
    if ((*(byte *)(param_2 + 0x218) & 8) != 0) {
      local_268[2] = *(undefined4 *)(param_2 + 0x220);
      local_268[3] = *(undefined4 *)(param_2 + 0x224);
      local_268[4] = *(int *)(param_2 + 0x228);
      local_254 = *(int *)(param_2 + 0x22c);
    }
    local_248 = &DAT_0060f98c;
    local_250 = local_29c;
    local_24c = local_288;
    *(int *)(local_294 + 0x20) = local_268[4];
    *(int *)(local_294 + 0x24) = local_254;
    iVar1 = FUN_005c70c0(param_1,local_294,local_29c,local_268,local_288,0,1);
    if (-1 < iVar1) {
      iVar2 = FUN_005b89b0(param_1);
      puVar6 = local_240;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_240[0] = *(uint *)(local_294 + 0x18);
      local_240[1] = *(undefined4 *)(local_294 + 0x1c);
      local_220 = local_220 | 1;
      local_238 = local_270;
      uVar4 = FUN_005f2d10();
      FUN_0043e400(uVar4,local_104);
      FUN_0043e1e0();
      lstrcpynA((LPSTR)local_208,local_104,0x104);
      local_105 = 0;
      iVar1 = lstrlenA((LPCSTR)local_208);
      iVar1 = _SfList_AllocAndInsertItem_20(iVar2,local_240,iVar1 + 0x39,0xffffffff,&local_288);
      if (-1 < iVar1) {
        _mbscpy((uchar *)(*(int *)(*(int *)(iVar2 + 8) + local_288 * 4) + 0x30),local_208);
      }
    }
  }
  FUN_005b84d0(param_1,1);
  return iVar1;
}


