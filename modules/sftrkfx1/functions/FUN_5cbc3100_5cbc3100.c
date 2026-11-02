/* Module: sftrkfx1.dll
   Function: FUN_5cbc3100
   Address: 5cbc3100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc3100(HWND param_1,HDC param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  HGDIOBJ h;
  HBITMAP h_00;
  HDC hdc;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,4);
  h_00 = (HBITMAP)0x0;
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint((HWND)*puVar1,&local_40);
  }
  else {
    local_40.hdc = (HDC)0x0;
    local_40.fErase = 1;
  }
  GetClientRect((HWND)*puVar1,&local_50);
  uVar2 = GetWindowLongA((HWND)*puVar1,-0x10);
  if ((puVar1[3] == 0) || (puVar1[4] == 0)) {
    hdc = CreateCompatibleDC(param_2);
    h_00 = CreateCompatibleBitmap(param_2,local_50.right,local_50.bottom);
    if ((hdc != (HDC)0x0) && (h_00 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,h_00);
      FUN_5cbc2f70(puVar1,hdc,&local_50,uVar2);
      BitBlt(param_2,0,0,local_50.right,local_50.bottom,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_5cbc3178;
    }
  }
  else {
    hdc = (HDC)0x0;
  }
  FUN_5cbc2f70(puVar1,param_2,&local_50,uVar2);
LAB_5cbc3178:
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (local_40.hdc != (HDC)0x0) {
    EndPaint((HWND)*puVar1,&local_40);
  }
  return;
}


