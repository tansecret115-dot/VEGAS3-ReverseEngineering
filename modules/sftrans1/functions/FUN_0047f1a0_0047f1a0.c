/* Module: sftrans1.dll
   Function: FUN_0047f1a0
   Address: 0047f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0047f1a0(int param_1)

{
  int iVar1;
  byte bVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  HWND hWnd;
  LRESULT LVar6;
  LRESULT LVar7;
  WPARAM WVar8;
  code *pcVar9;
  tagRECT local_3a8;
  double local_398;
  undefined4 local_38c;
  WPARAM local_388;
  int local_36c;
  double local_368;
  double local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined2 local_33c;
  undefined4 local_238;
  undefined4 local_234;
  int local_230;
  undefined4 local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  CHAR local_210 [260];
  CHAR local_10c [264];
  
  pcVar9 = GetDlgItem_exref;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x649);
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_368 = 0.5;
  local_360 = 0.5;
  local_358 = 2;
  local_354 = 1;
  local_350 = 0xffffffff;
  local_34c = 0x3f800000;
  local_348 = 0x3f000000;
  local_344 = 0x3f000000;
  local_340 = 0;
  local_33c = 0;
  local_238 = 0;
  local_234 = 0xffffff;
  local_230 = 0;
  local_22c = 0x3f800000;
  local_218 = 1;
  local_214 = 0;
  FUN_0047ed60(1,0);
  iVar4 = *(int *)(param_1 + 0x34);
  if ((*(double *)(iVar4 + 0x438) == _DAT_00555910) || (*(double *)(iVar4 + 0x440) == _DAT_00555910)
     ) {
    local_368 = 0.0;
    local_360 = 0.0;
  }
  else {
    if ((*(byte *)(*(int *)(param_1 + 0x30) + 0x160) & 1) != 0) {
      *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x1b8) = *(undefined8 *)(iVar4 + 0x448);
      *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x1c0) =
           *(undefined8 *)(*(int *)(param_1 + 0x34) + 0x450);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    local_368 = *(double *)(*(int *)(param_1 + 0x30) + 0x1b8) / *(double *)(iVar4 + 0x438) +
                _DAT_00557838;
    local_360 = *(double *)(*(int *)(param_1 + 0x30) + 0x1c0) / *(double *)(iVar4 + 0x440) +
                _DAT_00557838;
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if ((*(float *)(iVar5 + 0x7c) <= *(float *)(iVar5 + 0x80)) ||
     (*(float *)(iVar5 + 0x7c) <= *(float *)(iVar5 + 0x78))) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  local_230 = (-(uint)bVar2 & 0x7f8000) + 0x8000;
  iVar1 = *(int *)(iVar4 + 0x490);
  if (iVar1 == 0) {
    local_358 = 2;
    local_22c = 0x3f333333;
  }
  else {
    local_358 = 3;
    local_214 = 1;
    local_218 = 0;
    local_3a8.left = *(int *)(iVar1 + 0x3c);
    local_3a8.top = *(int *)(iVar1 + 0x40);
    local_3a8.right = *(int *)(iVar1 + 0x44);
    local_3a8.bottom = *(int *)(iVar1 + 0x48);
    local_398 = ((*(double *)(iVar5 + 0x1b8) - *(double *)(iVar4 + 0x448)) *
                (double)*(int *)(iVar4 + 0x414)) / *(double *)(iVar4 + 0x438);
    iVar4 = ftol();
    iVar5 = ftol();
    OffsetRect(&local_3a8,iVar5,iVar4);
    iVar4 = ftol();
    local_21c = ftol();
    local_228 = local_3a8.left - iVar4;
    local_224 = local_3a8.top - local_21c;
    local_220 = local_3a8.right - iVar4;
    local_21c = local_3a8.bottom - local_21c;
  }
  SendMessageA(pHVar3,0x804,0,(LPARAM)&local_368);
  SendMessageA(pHVar3,0x80f,0,0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x64b);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x64c);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1b8),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1bc));
  GetWindowTextA(pHVar3,local_10c,0x104);
  iVar4 = lstrcmpA(local_210,local_10c);
  if (iVar4 != 0) {
    FUN_004c84a0(pHVar3,local_210);
  }
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c0),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c4));
  GetWindowTextA(hWnd,local_10c,0x104);
  iVar4 = lstrcmpA(local_210,local_10c);
  if (iVar4 != 0) {
    FUN_004c84a0(hWnd,local_210);
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x67a);
  local_388 = SendMessageA(pHVar3,0x147,0,0);
  local_38c = 0x20;
  SendMessageA(pHVar3,0x404,0,(LPARAM)&local_38c);
  if ((local_36c != 0) &&
     ((*(int *)(local_36c + 8) != *(int *)(*(int *)(param_1 + 0x30) + 0x1a0) ||
      (*(int *)(local_36c + 0xc) != *(int *)(*(int *)(param_1 + 0x30) + 0x1a4))))) {
    LVar6 = SendMessageA(pHVar3,0x146,0,0);
    WVar8 = 0;
    pcVar9 = GetDlgItem_exref;
    if (0 < LVar6) {
      do {
        local_38c = 0x20;
        local_388 = WVar8;
        SendMessageA(pHVar3,0x404,0,(LPARAM)&local_38c);
        if (((local_36c != 0) &&
            (*(int *)(local_36c + 8) == *(int *)(*(int *)(param_1 + 0x30) + 0x1a0))) &&
           (*(int *)(local_36c + 0xc) == *(int *)(*(int *)(param_1 + 0x30) + 0x1a4))) {
          SendMessageA(pHVar3,0x14e,WVar8,0);
          pcVar9 = GetDlgItem_exref;
          break;
        }
        WVar8 = WVar8 + 1;
        pcVar9 = GetDlgItem_exref;
      } while ((int)WVar8 < LVar6);
    }
  }
  pHVar3 = (HWND)(*pcVar9)(*(undefined4 *)(param_1 + 4),0x67f);
  WVar8 = SendMessageA(pHVar3,0x147,0,0);
  LVar6 = SendMessageA(pHVar3,0x150,WVar8,0);
  if (LVar6 != *(int *)(*(int *)(param_1 + 0x30) + 0x15c)) {
    LVar6 = SendMessageA(pHVar3,0x146,0,0);
    WVar8 = 0;
    if (0 < LVar6) {
      while (LVar7 = SendMessageA(pHVar3,0x150,WVar8,0),
            LVar7 != *(int *)(*(int *)(param_1 + 0x30) + 0x15c)) {
        WVar8 = WVar8 + 1;
        if (LVar6 <= (int)WVar8) {
          return 1;
        }
      }
      SendMessageA(pHVar3,0x14e,WVar8,0);
    }
  }
  return 1;
}


