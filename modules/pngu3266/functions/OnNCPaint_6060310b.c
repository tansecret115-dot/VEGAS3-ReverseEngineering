/* Module: pngu3266.dll
   Function: OnNCPaint
   Address: 6060310b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnNCPaint(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnNCPaint(CPNCustomFrame *this,CPNEvent *param_1)

{
  HRGN hrgnSrc1;
  uint uVar1;
  int iVar2;
  HRGN hrgnSrc1_00;
  CPNWindowDC local_230 [484];
  tagRECT local_4c;
  RECT local_3c;
  RECT local_2c;
  ulong local_1c;
  long local_18;
  HRGN local_14;
  HRGN local_10;
  HRGN local_c;
  HRGN local_8;
  
                    /* 0x1310b  1661  ?OnNCPaint@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  uVar1 = GetWindowLongA(*(HWND *)(this + 0x14),-0x10);
  if (((uVar1 & 0x400000) == 0) || ((uVar1 & 0x800000) == 0)) {
    return 0;
  }
  (**(code **)(*(int *)this + 0x40))();
  hrgnSrc1 = *(HRGN *)(param_1 + 0x1c);
  local_18 = *(long *)(param_1 + 0x20);
  local_1c = *(ulong *)(param_1 + 0x24);
  GetWindowRect(*(HWND *)(this + 0x14),&local_4c);
  iVar2 = *(int *)(this + 0x18);
  local_2c.left = *(int *)(iVar2 + 0x34) + local_4c.left;
  local_2c.top = *(int *)(iVar2 + 0x38) + local_4c.top;
  local_2c.right = *(int *)(iVar2 + 0x3c) + local_4c.left;
  local_2c.bottom = *(int *)(iVar2 + 0x40) + local_4c.top;
  local_3c.left = *(int *)(iVar2 + 0x7c) + local_4c.left;
  local_3c.right = *(int *)(iVar2 + 0x84) + local_4c.left;
  local_3c.top = *(int *)(iVar2 + 0x80) + local_4c.top;
  local_3c.bottom = *(int *)(iVar2 + 0x88) + local_4c.top;
  local_8 = CreateRectRgnIndirect(&local_3c);
  local_14 = CreateRectRgnIndirect(&local_3c);
  local_10 = CreateRectRgnIndirect(&local_2c);
  local_c = CreateRectRgnIndirect(&local_2c);
  CombineRgn(local_8,local_14,local_10,2);
  if (hrgnSrc1 < (HRGN)0x2) {
    if (hrgnSrc1 == (HRGN)0x1) {
      hrgnSrc1_00 = CreateRectRgnIndirect(&local_4c);
      CombineRgn(local_c,hrgnSrc1_00,local_8,4);
      DeleteObject(hrgnSrc1_00);
    }
  }
  else {
    iVar2 = CombineRgn(local_c,hrgnSrc1,local_8,4);
    if (iVar2 == 1) {
      iVar2 = 0;
      goto LAB_6060326f;
    }
  }
  if (hrgnSrc1 != (HRGN)0x0) {
    CPNWindow::DefWindowProcA(*(CPNWindow **)(this + 8),local_1c,(uint)local_c,local_18);
    CPNWindowDC::CPNWindowDC(local_230,*(CPNWindow **)(this + 8));
    (**(code **)(*(int *)this + 0x44))(local_230);
    CPNWindowDC::~CPNWindowDC(local_230);
  }
  iVar2 = 1;
LAB_6060326f:
  if (local_10 != (HRGN)0x0) {
    DeleteObject(local_10);
  }
  if (hrgnSrc1 != (HRGN)0x0) {
    DeleteObject(hrgnSrc1);
  }
  if (local_c != (HRGN)0x0) {
    DeleteObject(local_c);
  }
  if (local_8 != (HRGN)0x0) {
    DeleteObject(local_8);
  }
  if (local_14 != (HRGN)0x0) {
    DeleteObject(local_14);
  }
  return iVar2;
}


