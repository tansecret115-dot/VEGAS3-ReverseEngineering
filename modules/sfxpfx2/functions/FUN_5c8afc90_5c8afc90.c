/* Module: sfxpfx2.dll
   Function: FUN_5c8afc90
   Address: 5c8afc90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8afc90(uint *param_1,HDC param_2,int param_3)

{
  HGDIOBJ h;
  HDC hdc;
  HBITMAP h_00;
  RECT local_20;
  RECT local_10;
  
  hdc = (HDC)0x0;
  h_00 = (HBITMAP)0x0;
  local_20.left = param_1[0xf];
  local_20.top = param_1[0x10];
  local_20.right = param_1[0x11];
  local_20.bottom = param_1[0x12];
  if (param_3 != 0) {
    hdc = CreateCompatibleDC(param_2);
    h_00 = CreateCompatibleBitmap(param_2,local_20.right,local_20.bottom);
    if ((hdc != (HDC)0x0) && (h_00 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,h_00);
      local_10.top = local_20.top;
      local_10.right = local_20.right;
      local_10.left = local_20.left;
      local_10.bottom = local_20.bottom;
      FUN_5c8afd90(param_1,hdc,&local_10);
      BitBlt(param_2,local_20.left,local_20.top,local_20.right,local_20.bottom,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_5c8afd6a;
    }
  }
  FUN_5c8afd90(param_1,param_2,&local_20);
LAB_5c8afd6a:
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return;
}


