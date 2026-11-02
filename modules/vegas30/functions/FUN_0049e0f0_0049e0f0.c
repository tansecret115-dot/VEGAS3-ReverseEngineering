/* Module: vegas30.exe
   Function: FUN_0049e0f0
   Address: 0049e0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0049e0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  HWND pHVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  tagPOINT local_30;
  int local_28;
  int local_24;
  tagPOINT local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30.y = (LONG)(short)((uint)param_5 >> 0x10);
  switch(param_3) {
  case 0x200:
    pHVar2 = GetCapture();
    if (pHVar2 != *(HWND *)(param_1 + 4)) {
      return 0;
    }
    if (*(int *)(param_1 + 0xa4) != 3) {
      return 0;
    }
    iVar5 = 0;
    pt.y = local_30.y;
    pt.x = (int)(short)param_5;
    BVar3 = PtInRect((RECT *)(param_1 + 0x3a8),pt);
    if (BVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x174);
    }
    if (iVar5 == *(int *)(param_1 + 0x3b8)) {
      return 0;
    }
    *(int *)(param_1 + 0x3b8) = iVar5;
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x3a8),0);
    return 0;
  case 0x201:
  case 0x203:
    FUN_00453000(param_1);
    *(undefined4 *)(param_1 + 0xa4) = 3;
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x174);
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x3a8),0);
    FUN_004592f0(param_1,0,0,0,0);
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  case 0x202:
    iVar5 = *(int *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    pHVar2 = GetCapture();
    if (pHVar2 == *(HWND *)(param_1 + 4)) {
      ReleaseCapture();
    }
    if (iVar5 != 3) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0xcec);
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x3a8),0);
    pt_00.y = local_30.y;
    pt_00.x = (int)(short)param_5;
    BVar3 = PtInRect((RECT *)(param_1 + 0x3a8),pt_00);
    if (BVar3 == 0) {
      return 0;
    }
    break;
  default:
    goto switchD_0049e11f_default;
  }
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = iVar5;
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 9:
    local_10 = 1;
    local_8 = *(undefined4 *)(iVar5 + 0x1fc);
    local_20.y = *(int *)(*(int *)(iVar5 + 0x218) + 0x44);
    local_20.x = *(int *)(*(int *)(iVar5 + 0x218) + 0x40);
    local_18 = local_20.x + 10;
    local_20.x = local_20.x + -10;
    local_14 = local_20.y + 10;
    local_20.y = local_20.y + -10;
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_20,2);
    *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) = *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) | 0x80;
    FUN_0044e590(&local_10,0,&local_20);
    iVar5 = *(int *)(iVar5 + 0x218);
    uVar4 = *(uint *)(iVar5 + 0x68) & 0xffffff7f;
    break;
  case 10:
    local_10 = 7;
    local_20.y = *(int *)(*(int *)(iVar5 + 0x218) + 0x5c);
    local_20.x = *(int *)(*(int *)(iVar5 + 0x218) + 0x58);
    local_14 = local_20.y + 10;
    local_20.y = local_20.y + -10;
    local_18 = local_20.x + 10;
    local_20.x = local_20.x + -10;
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_20,2);
    *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) = *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) | 0x400;
    FUN_0044e590(&local_10,0,&local_20);
    iVar5 = *(int *)(iVar5 + 0x218);
    uVar4 = *(uint *)(iVar5 + 0x68) & 0xfffffbff;
    break;
  case 0xb:
    local_10 = 8;
    local_20.y = *(int *)(*(int *)(iVar5 + 0x218) + 100);
    local_20.x = *(int *)(*(int *)(iVar5 + 0x218) + 0x60);
    local_14 = local_20.y + 10;
    local_18 = local_20.x + 10;
    local_20.x = local_20.x + -10;
    local_20.y = local_20.y + -10;
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_20,2);
    *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) = *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) | 0x800;
    FUN_0044e590(&local_10,0,&local_20);
    iVar5 = *(int *)(iVar5 + 0x218);
    uVar4 = *(uint *)(iVar5 + 0x68) & 0xfffff7ff;
    break;
  default:
    goto switchD_0049e26a_caseD_c;
  case 0xe:
    local_10 = 1;
    local_8 = 0xffffffff;
    local_20.y = *(int *)(*(int *)(iVar5 + 0x218) + 0x4c);
    local_20.x = *(int *)(*(int *)(iVar5 + 0x218) + 0x48);
    local_18 = local_20.x + 10;
    local_20.x = local_20.x + -10;
    local_14 = local_20.y + 10;
    local_20.y = local_20.y + -10;
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_20,2);
    *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) = *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) | 0x100;
    FUN_00521940(&local_10,&local_20);
    iVar5 = *(int *)(iVar5 + 0x218);
    uVar4 = *(uint *)(iVar5 + 0x68) & 0xfffffeff;
    break;
  case 0xf:
    if ((*(int *)(iVar5 + 0x50) != 0) &&
       ((*(uint *)(*(int *)(*(int *)(iVar5 + 0x50) + 0x18) + 0x134) & 0x400) != 0)) {
      iVar1 = *(int *)(iVar5 + 0x218);
      local_30.x = *(int *)(iVar1 + 0x50) + -10;
      local_30.y = *(int *)(iVar1 + 0x54) + -10;
      local_28 = *(int *)(iVar1 + 0x50) + 10;
      local_24 = *(int *)(iVar1 + 0x54) + 10;
      MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_30,2);
      *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) = *(uint *)(*(int *)(iVar5 + 0x218) + 0x68) | 0x200;
      FUN_005f34d0(iVar5,&local_30);
      iVar5 = *(int *)(iVar5 + 0x218);
      uVar4 = *(uint *)(iVar5 + 0x68) & 0xfffffdff;
      break;
    }
    goto switchD_0049e26a_caseD_c;
  }
  *(uint *)(iVar5 + 0x68) = uVar4;
switchD_0049e26a_caseD_c:
  FUN_00456c20(param_1);
  FUN_004530a0(param_1,0);
switchD_0049e11f_default:
  return 0;
}


