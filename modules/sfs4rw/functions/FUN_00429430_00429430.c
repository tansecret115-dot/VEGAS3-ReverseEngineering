/* Module: sfs4rw.dll
   Function: FUN_00429430
   Address: 00429430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429430(LPRECT param_1,int param_2,int param_3)

{
  int iVar1;
  HDC hdc;
  tagRECT local_58;
  undefined4 local_48 [5];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_00430340(param_1,1);
  local_48[0] = 0x48;
  if (iVar1 == 0) {
LAB_00429480:
    hdc = GetDC((HWND)0x0);
    GetClipBox(hdc,&local_58);
    ReleaseDC((HWND)0x0,hdc);
  }
  else {
    iVar1 = FUN_00430300(iVar1,local_48);
    if (iVar1 == 0) goto LAB_00429480;
    local_58.left = local_34;
    local_58.top = local_30;
    local_58.right = local_2c;
    local_58.bottom = local_28;
  }
  if (param_1->left < param_2 + local_58.left) {
    iVar1 = (local_58.left - param_1->left) + param_2;
  }
  else {
    if (param_1->right <= local_58.right - param_2) goto LAB_004294f3;
    iVar1 = (local_58.right - param_1->right) - param_2;
  }
  OffsetRect(param_1,iVar1,0);
LAB_004294f3:
  if (param_1->top < local_58.top + param_3) {
    OffsetRect(param_1,0,(local_58.top - param_1->top) + param_3);
    return;
  }
  if (local_58.bottom - param_3 < param_1->bottom) {
    OffsetRect(param_1,0,(local_58.bottom - param_1->bottom) - param_3);
  }
  return;
}


