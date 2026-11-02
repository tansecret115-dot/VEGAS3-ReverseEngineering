/* Module: vidcap30.exe
   Function: _SfForcePopupRectOntoDesktop@16
   Address: 0047f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfForcePopupRectOntoDesktop_16(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HDC hdc;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  tagRECT local_68;
  tagRECT local_58;
  undefined4 local_48 [5];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
                    /* 0x7f3a0  382  _SfForcePopupRectOntoDesktop@16 */
  iVar5 = _SfMonitor_MonitorFromRect_8(param_2,1);
  local_48[0] = 0x48;
  if ((iVar5 == 0) || (iVar5 = _SfMonitor_GetMonitorInfo_8(iVar5,local_48), iVar5 == 0)) {
    hdc = GetDC((HWND)0x0);
    GetClipBox(hdc,&local_58);
    ReleaseDC((HWND)0x0,hdc);
  }
  else {
    local_58.left = local_34;
    local_58.top = local_30;
    local_58.right = local_2c;
    local_58.bottom = local_28;
  }
  iVar1 = *param_2;
  iVar2 = param_2[2];
  iVar6 = local_58.left + local_58.right;
  iVar3 = param_2[1];
  iVar5 = local_58.bottom + local_58.top;
  iVar4 = param_2[3];
  InflateRect(&local_58,-param_3,-param_4);
  switch((iVar1 + iVar2) / 2 <= iVar6 / 2 | (iVar5 / 2 < (iVar4 + iVar3) / 2) - 1U & 2) {
  case 0:
    local_68.right = *param_2;
    local_68.bottom = param_2[1];
    local_68.top = (param_1[1] - param_1[3]) + local_68.bottom;
    uVar7 = local_68.right - local_58.right;
    local_68.left = (*param_1 - param_1[2]) + local_68.right;
    uVar8 = local_58.left - local_68.left;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    }
    else {
      uVar7 = ((int)uVar8 < 1) - 1 & uVar8;
    }
    uVar8 = local_68.bottom - local_58.bottom;
    uVar9 = local_58.top - local_68.top;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar8 & ((int)uVar8 < 1) - 1;
    }
    else {
      uVar8 = ((int)uVar9 < 1) - 1 & uVar9;
    }
    if ((uVar7 == 0) && (uVar8 == 0)) {
      *param_1 = local_68.left;
      param_1[1] = local_68.top;
      param_1[2] = local_68.right;
      param_1[3] = local_68.bottom;
      return;
    }
    break;
  case 1:
    local_68.bottom = param_2[1];
    local_68.left = param_2[2];
    local_68.right = (param_1[2] - *param_1) + local_68.left;
    uVar7 = local_68.right - local_58.right;
    uVar8 = local_58.left - local_68.left;
    local_68.top = (param_1[1] - param_1[3]) + local_68.bottom;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    }
    else {
      uVar7 = ((int)uVar8 < 1) - 1 & uVar8;
    }
    uVar8 = local_68.bottom - local_58.bottom;
    uVar9 = local_58.top - local_68.top;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar8 & ((int)uVar8 < 1) - 1;
    }
    else {
      uVar8 = ((int)uVar9 < 1) - 1 & uVar9;
    }
    if ((uVar7 == 0) && (uVar8 == 0)) {
      *param_1 = local_68.left;
      param_1[1] = local_68.top;
      param_1[2] = local_68.right;
      param_1[3] = local_68.bottom;
      return;
    }
    break;
  case 2:
    local_68.right = *param_2;
    local_68.top = param_2[3];
    local_68.bottom = (param_1[3] - param_1[1]) + local_68.top;
    uVar7 = local_68.right - local_58.right;
    local_68.left = (*param_1 - param_1[2]) + local_68.right;
    uVar8 = local_58.left - local_68.left;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    }
    else {
      uVar7 = ((int)uVar8 < 1) - 1 & uVar8;
    }
    uVar8 = local_68.bottom - local_58.bottom;
    uVar9 = local_58.top - local_68.top;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar8 & ((int)uVar8 < 1) - 1;
    }
    else {
      uVar8 = ((int)uVar9 < 1) - 1 & uVar9;
    }
    if ((uVar7 == 0) && (uVar8 == 0)) {
      *param_1 = local_68.left;
      param_1[1] = local_68.top;
      param_1[2] = local_68.right;
      param_1[3] = local_68.bottom;
      return;
    }
    break;
  case 3:
    SetRect(&local_68,param_2[2],param_2[3],(param_1[2] - *param_1) + param_2[2],
            (param_1[3] - param_1[1]) + param_2[3]);
    uVar8 = local_58.left - local_68.left;
    uVar7 = local_68.right - local_58.right;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    }
    else {
      uVar7 = ((int)uVar8 < 1) - 1 & uVar8;
    }
    uVar8 = local_68.bottom - local_58.bottom;
    uVar9 = local_58.top - local_68.top;
    if ((int)uVar9 < (int)uVar8) {
      uVar9 = ((int)uVar8 < 1) - 1;
    }
    else {
      uVar8 = ((int)uVar9 < 1) - 1;
    }
    if ((uVar7 == 0) && ((uVar8 & uVar9) == 0)) {
      *param_1 = local_68.left;
      param_1[1] = local_68.top;
      param_1[2] = local_68.right;
      param_1[3] = local_68.bottom;
      return;
    }
  }
  _SfForceRectOntoDesktop_12(&local_68,param_3,param_4);
  *param_1 = local_68.left;
  param_1[1] = local_68.top;
  param_1[2] = local_68.right;
  param_1[3] = local_68.bottom;
  return;
}


