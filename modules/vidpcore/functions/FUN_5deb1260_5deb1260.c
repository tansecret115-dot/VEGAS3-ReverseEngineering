/* Module: vidpcore.dll
   Function: FUN_5deb1260
   Address: 5deb1260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb1260(int param_1,HDC param_2,int param_3)

{
  HGDIOBJ h;
  HDC hdc;
  HBITMAP h_00;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  hdc = (HDC)0x0;
  h_00 = (HBITMAP)0x0;
  local_20 = *(int *)(param_1 + 0x34);
  local_1c = *(int *)(param_1 + 0x38);
  local_18 = *(int *)(param_1 + 0x3c);
  local_14 = *(int *)(param_1 + 0x40);
  if (param_3 != 0) {
    hdc = CreateCompatibleDC(param_2);
    h_00 = CreateCompatibleBitmap(param_2,local_18,local_14);
    if ((hdc != (HDC)0x0) && (h_00 != (HBITMAP)0x0)) {
      h = SelectObject(hdc,h_00);
      local_c = local_1c;
      local_8 = local_18;
      local_10 = local_20;
      local_4 = local_14;
      FUN_5deb11f0(param_1,hdc,&local_10);
      BitBlt(param_2,local_20,local_1c,local_18,local_14,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      goto LAB_5deb133a;
    }
  }
  FUN_5deb11f0(param_1,param_2,&local_20);
LAB_5deb133a:
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return;
}


