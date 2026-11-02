/* Module: vidcap30.exe
   Function: FUN_005205c0
   Address: 005205c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005205c0(int param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ h;
  int iVar2;
  HDC hdc;
  HGDIOBJ h_00;
  COLORREF color;
  COLORREF color_00;
  int local_10;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0xc);
  h = *(HGDIOBJ *)(param_1 + 0x114);
  if (((uVar1 & 0x80) == 0) && (h != (HGDIOBJ)0x0)) {
    local_10 = 0;
    param_1 = 0;
    if ((uVar1 & 0x10) != 0) {
      if ((uVar1 & 8) == 0) {
        param_1 = *(int *)(iVar2 + 0xe0) - *(int *)(iVar2 + 0xbc);
      }
      else {
        local_10 = *(int *)(iVar2 + 0xdc) - *(int *)(iVar2 + 0xb8);
      }
    }
    hdc = CreateCompatibleDC(param_2);
    if (*(HGDIOBJ *)(iVar2 + 0x118) == (HGDIOBJ)0x0) {
      h_00 = SelectObject(hdc,h);
      BitBlt(param_2,*(int *)(iVar2 + 0xb8),*(int *)(iVar2 + 0xbc),
             *(int *)(iVar2 + 0xc0) - *(int *)(iVar2 + 0xb8),
             *(int *)(iVar2 + 0xc4) - *(int *)(iVar2 + 0xbc),hdc,0,0,0xcc0020);
      if ((*(byte *)(iVar2 + 0xc) & 0x10) != 0) {
        BitBlt(param_2,*(int *)(iVar2 + 0xdc),*(int *)(iVar2 + 0xe0),
               *(int *)(iVar2 + 0xe4) - *(int *)(iVar2 + 0xdc),
               *(int *)(iVar2 + 0xe8) - *(int *)(iVar2 + 0xe0),hdc,local_10,param_1,0xcc0020);
      }
    }
    else if (DAT_0066244c == 0) {
      h_00 = SelectObject(hdc,*(HGDIOBJ *)(iVar2 + 0x118));
      color = SetTextColor(param_2,0);
      color_00 = SetBkColor(param_2,0xffffff);
      BitBlt(param_2,*(int *)(iVar2 + 0xb8),*(int *)(iVar2 + 0xbc),
             *(int *)(iVar2 + 0xc0) - *(int *)(iVar2 + 0xb8),
             *(int *)(iVar2 + 0xc4) - *(int *)(iVar2 + 0xbc),hdc,0,0,0x8800c6);
      if ((*(byte *)(iVar2 + 0xc) & 0x10) != 0) {
        BitBlt(param_2,*(int *)(iVar2 + 0xdc),*(int *)(iVar2 + 0xe0),
               *(int *)(iVar2 + 0xe4) - *(int *)(iVar2 + 0xdc),
               *(int *)(iVar2 + 0xe8) - *(int *)(iVar2 + 0xe0),hdc,local_10,param_1,0x8800c6);
      }
      SetBkColor(param_2,color_00);
      SetTextColor(param_2,color);
      SelectObject(hdc,h);
      BitBlt(param_2,*(int *)(iVar2 + 0xb8),*(int *)(iVar2 + 0xbc),
             *(int *)(iVar2 + 0xc0) - *(int *)(iVar2 + 0xb8),
             *(int *)(iVar2 + 0xc4) - *(int *)(iVar2 + 0xbc),hdc,0,0,0x660046);
      if ((*(byte *)(iVar2 + 0xc) & 0x10) != 0) {
        BitBlt(param_2,*(int *)(iVar2 + 0xdc),*(int *)(iVar2 + 0xe0),
               *(int *)(iVar2 + 0xe4) - *(int *)(iVar2 + 0xdc),
               *(int *)(iVar2 + 0xe8) - *(int *)(iVar2 + 0xe0),hdc,local_10,param_1,0x660046);
      }
    }
    else {
      h_00 = SelectObject(hdc,h);
      MaskBlt(param_2,*(int *)(iVar2 + 0xb8),*(int *)(iVar2 + 0xbc),
              *(int *)(iVar2 + 0xc0) - *(int *)(iVar2 + 0xb8),
              *(int *)(iVar2 + 0xc4) - *(int *)(iVar2 + 0xbc),hdc,0,0,*(HBITMAP *)(iVar2 + 0x118),0,
              0,0xccaa0029);
      if ((*(byte *)(iVar2 + 0xc) & 0x10) != 0) {
        MaskBlt(param_2,*(int *)(iVar2 + 0xdc),*(int *)(iVar2 + 0xe0),
                *(int *)(iVar2 + 0xe4) - *(int *)(iVar2 + 0xdc),
                *(int *)(iVar2 + 0xe8) - *(int *)(iVar2 + 0xe0),hdc,local_10,param_1,
                *(HBITMAP *)(iVar2 + 0x118),local_10,param_1,0xccaa0029);
      }
    }
    SelectObject(hdc,h_00);
    DeleteDC(hdc);
    return 1;
  }
  return 0;
}


