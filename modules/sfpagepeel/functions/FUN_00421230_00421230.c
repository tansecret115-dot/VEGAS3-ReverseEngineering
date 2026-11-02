/* Module: sfpagepeel.dll
   Function: FUN_00421230
   Address: 00421230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421230(uint *param_1,HDC param_2,int param_3)

{
  HGDIOBJ h;
  HDC hdc;
  HBITMAP h_00;
  RECT local_20;
  RECT local_10;
  
  hdc = (HDC)0x0;
  h_00 = (HBITMAP)0x0;
  local_20.left = param_1[0xd];
  local_20.top = param_1[0xe];
  local_20.right = param_1[0xf];
  local_20.bottom = param_1[0x10];
  if (param_3 != 0) {
    hdc = CreateCompatibleDC(param_2);
    h_00 = CreateCompatibleBitmap(param_2,local_20.right,local_20.bottom);
    if ((hdc != (HDC)0x0) && (h_00 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,h_00);
      local_10.top = local_20.top;
      local_10.right = local_20.right;
      local_10.left = local_20.left;
      local_10.bottom = local_20.bottom;
      FUN_004211c0(param_1,hdc,&local_10);
      BitBlt(param_2,local_20.left,local_20.top,local_20.right,local_20.bottom,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_0042130a;
    }
  }
  FUN_004211c0(param_1,param_2,&local_20);
LAB_0042130a:
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return;
}


