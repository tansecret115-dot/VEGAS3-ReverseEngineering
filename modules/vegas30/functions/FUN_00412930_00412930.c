/* Module: vegas30.exe
   Function: FUN_00412930
   Address: 00412930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412930(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  tagRECT *ptVar3;
  int *piVar4;
  HWND hWnd;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_58;
  undefined1 local_48 [12];
  int local_3c;
  int local_38;
  int local_34;
  tagRECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  local_48._8_4_ = 0x22;
  local_30.left = 0x22;
  local_48._4_4_ = 0x12;
  local_30.top = 0x12;
  uVar9 = param_9 >> 0xf & 1;
  uVar12 = param_9 >> 4;
  uVar10 = param_9 >> 5;
  local_48._0_4_ = 0x16;
  local_3c = 0x1b;
  if ((param_9 & 2) == 0) {
    ptVar3 = (tagRECT *)(local_48 + 8);
    if ((param_9 & 1) == 0) {
      ptVar3 = &local_30;
    }
  }
  else {
    ptVar3 = (tagRECT *)local_48;
  }
  local_58 = ptVar3->left;
  iVar1 = ptVar3->top;
  piVar4 = (int *)_SfGetUIFontSize_4(0x92);
  iVar6 = *piVar4;
  iVar2 = piVar4[1];
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  if ((param_9 & 1) == 0) {
    param_9 = 0x1a;
    if (DAT_0064b8c8 == 0) {
      hWnd = CreateWindowExA(0,"ComboBoxEx32",(LPCSTR)0x0,0x40000042,0,0,0,0x14,
                             *(HWND *)(param_1 + 8),(HMENU)0xffffffff,DAT_006471fc,(LPVOID)0x0);
      GetWindowRect(hWnd,&local_10);
      DestroyWindow(hWnd);
      DAT_0064b8c8 = (local_10.bottom - local_10.top) + 6;
    }
    iVar5 = DAT_0064b8c8;
    if (DAT_0064b8c8 < 0x1b) goto LAB_00412a48;
  }
  else {
    iVar5 = iVar1 + 6;
  }
  param_9 = iVar5;
LAB_00412a48:
  if (uVar9 != 0) {
    local_58 = 0;
  }
  if (param_2 != 0) {
    _SfGetToolbarSize_8(param_2,local_48);
    if ((uVar12 & 1) != 0) {
      local_48._0_4_ = 0;
    }
  }
  GetClientRect(*(HWND *)(param_1 + 8),&local_30);
  if ((uVar10 & 1) != 0) {
    local_3c = 1;
    iVar5 = iVar6 * 0x32;
    iVar11 = local_30.right - ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
    local_38 = local_30.right + -3;
    iVar5 = (int)(iVar2 * 0xe + (iVar2 * 0xe >> 0x1f & 7U)) >> 3;
    local_48._8_4_ = iVar11 + -3;
    local_30.right = iVar11 + -6;
    local_34 = iVar5 + 1;
    local_1c = iVar5 + 7;
    local_14 = iVar5 * 2 + 8;
    local_20 = local_48._8_4_;
    local_18 = local_38;
  }
  iVar5 = local_30.top + param_9;
  iVar11 = ((local_30.top - iVar1) + iVar5) / 2;
  if (uVar9 == 0) {
    iVar6 = iVar6 / 2;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = local_58 + local_30.left + iVar6;
  iVar13 = iVar6;
  if (iVar6 <= local_30.right - local_48._0_4_) {
    iVar13 = local_30.right - local_48._0_4_;
  }
  iVar7 = ((local_30.top - local_48._4_4_) + iVar5) / 2;
  iVar8 = ((local_30.top - iVar2) + iVar5) / 2;
  if (param_3 != (int *)0x0) {
    *param_3 = local_30.left;
    param_3[1] = local_30.top;
    param_3[2] = local_30.right;
    param_3[3] = iVar5;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_30.left;
    param_4[1] = iVar11;
    param_4[2] = local_58 + local_30.left;
    param_4[3] = iVar11 + iVar1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar6;
    param_5[1] = iVar8;
    param_5[2] = iVar13;
    param_5[3] = iVar2 + iVar8;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar13;
    param_6[1] = iVar7;
    param_6[2] = local_48._0_4_ + iVar13;
    param_6[3] = iVar7 + local_48._4_4_;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_48._8_4_;
    param_7[1] = local_3c;
    param_7[2] = local_38;
    param_7[3] = local_34;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_20;
    param_8[1] = local_1c;
    param_8[2] = local_18;
    param_8[3] = local_14;
  }
  return;
}


