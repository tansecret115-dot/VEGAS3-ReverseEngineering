/* Module: vidcap30.exe
   Function: FUN_004b0410
   Address: 004b0410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b0410(int param_1,HDC param_2)

{
  HGDIOBJ h;
  HDC hdc;
  HGDIOBJ h_00;
  COLORREF color;
  COLORREF color_00;
  
  h = *(HGDIOBJ *)(param_1 + 0x84);
  if (h == (HGDIOBJ)0x0) {
    return 0;
  }
  hdc = CreateCompatibleDC(param_2);
  if (*(HGDIOBJ *)(param_1 + 0x88) == (HGDIOBJ)0x0) {
    h_00 = SelectObject(hdc,h);
    BitBlt(param_2,*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),
           *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68),
           *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c),hdc,0,0,0xcc0020);
  }
  else if (DAT_005c22cc == 0) {
    h_00 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x88));
    color = SetTextColor(param_2,0);
    color_00 = SetBkColor(param_2,0xffffff);
    BitBlt(param_2,*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),
           *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68),
           *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c),hdc,0,0,0x8800c6);
    SetBkColor(param_2,color_00);
    SetTextColor(param_2,color);
    SelectObject(hdc,h);
    BitBlt(param_2,*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),
           *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68),
           *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c),hdc,0,0,0x660046);
  }
  else {
    h_00 = SelectObject(hdc,h);
    MaskBlt(param_2,*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),
            *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x68),
            *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c),hdc,0,0,*(HBITMAP *)(param_1 + 0x88)
            ,0,0,0xccaa0029);
  }
  SelectObject(hdc,h_00);
  DeleteDC(hdc);
  return 1;
}


