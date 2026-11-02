/* Module: vegas30k.dll
   Function: FUN_011535c0
   Address: 011535c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011535c0(HDC param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int *piVar1;
  HDC hdc;
  HGDIOBJ h;
  int iVar2;
  int cy;
  int cx;
  int x;
  uint local_38;
  HRGN local_34;
  RECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  local_38 = *(ushort *)(param_6 + 0xe) & 0xff00;
  local_28.left = *param_2;
  local_28.top = param_2[1];
  local_28.right = param_2[2];
  local_28.bottom = param_2[3];
  if (*(int *)(param_6 + 0x18) != 0) {
    hdc = CreateCompatibleDC(param_1);
    if (hdc != (HDC)0x0) {
      h = SelectObject(hdc,*(HGDIOBJ *)(param_6 + 0x18));
      GetObjectA(*(HANDLE *)(param_6 + 0x18),0x18,local_18);
      cx = *(int *)(param_6 + 0x1c);
      if (cx == 0) {
        param_6 = 1;
        iVar2 = local_14;
        cy = local_10;
        cx = local_14;
      }
      else {
        piVar1 = (int *)(param_6 + 0x20);
        param_6 = local_14 / cx;
        iVar2 = local_14 + -2 + param_6 * 2;
        cy = *piVar1;
      }
      if (local_10 <= cy * param_5) {
        param_5 = 0;
      }
      local_34 = (HRGN)0x0;
      if ((local_28.right - local_28.left < iVar2) || (local_28.bottom - local_28.top < cy)) {
        local_34 = CreateRectRgnIndirect(&local_28);
        SelectClipRgn(param_1,local_34);
      }
      param_2 = (int *)(local_28.bottom - cx);
      if (cx < (local_28.bottom - local_28.top) + 1) {
        param_2 = (int *)((int)param_2 + -1);
      }
      if ((param_4 & 3) == 3) {
        x = ((local_28.right - local_28.left) - iVar2) / 2 + local_28.left;
      }
      else {
        x = local_28.left;
        if ((param_4 & 3) == 0) {
          x = local_28.right - iVar2;
        }
      }
      if (0 < param_6) {
        iVar2 = 0;
        do {
          if ((local_38 & 0x100) != 0) {
            BitBlt(param_1,x,(int)param_2 + param_3,cx,cy,hdc,iVar2,cy * param_5,0xcc0020);
          }
          x = x + cx + 2;
          iVar2 = iVar2 + cx;
          local_38 = local_38 >> 1;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      if (local_34 != (HRGN)0x0) {
        SelectClipRgn(param_1,(HRGN)0x0);
        DeleteObject(local_34);
      }
      SelectObject(hdc,h);
      DeleteDC(hdc);
    }
  }
  return;
}


