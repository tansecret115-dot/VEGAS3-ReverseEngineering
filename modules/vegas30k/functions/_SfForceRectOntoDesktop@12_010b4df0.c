/* Module: vegas30k.dll
   Function: _SfForceRectOntoDesktop@12
   Address: 010b4df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfForceRectOntoDesktop_12(LPRECT param_1,int param_2,int param_3)

{
  int iVar1;
  HDC hdc;
  tagRECT local_58;
  undefined4 local_48 [5];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
                    /* 0xb4df0  934  _SfForceRectOntoDesktop@12 */
  iVar1 = _SfMonitor_MonitorFromRect_8(param_1,1);
  local_48[0] = 0x48;
  if (iVar1 == 0) {
LAB_010b4e40:
    hdc = GetDC((HWND)0x0);
    GetClipBox(hdc,&local_58);
    ReleaseDC((HWND)0x0,hdc);
  }
  else {
    iVar1 = _SfMonitor_GetMonitorInfo_8(iVar1,local_48);
    if (iVar1 == 0) goto LAB_010b4e40;
    local_58.left = local_34;
    local_58.top = local_30;
    local_58.right = local_2c;
    local_58.bottom = local_28;
  }
  if (param_1->left < param_2 + local_58.left) {
    param_2 = (local_58.left - param_1->left) + param_2;
  }
  else {
    if (param_1->right <= local_58.right - param_2) goto LAB_010b4eb3;
    param_2 = (local_58.right - param_1->right) - param_2;
  }
  OffsetRect(param_1,param_2,0);
LAB_010b4eb3:
  if (param_1->top < local_58.top + param_3) {
    OffsetRect(param_1,0,(local_58.top - param_1->top) + param_3);
    return;
  }
  if (local_58.bottom - param_3 < param_1->bottom) {
    OffsetRect(param_1,0,(local_58.bottom - param_1->bottom) - param_3);
  }
  return;
}


