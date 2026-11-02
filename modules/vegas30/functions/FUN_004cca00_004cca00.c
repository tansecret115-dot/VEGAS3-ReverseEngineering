/* Module: vegas30.exe
   Function: FUN_004cca00
   Address: 004cca00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cca00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HDC hdc;
  HRGN hrgn;
  RECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  hdc = GetDC(*(HWND *)(param_1 + 4));
  local_20.left = *(LONG *)(param_1 + 0x38c);
  local_20.top = *(int *)(param_1 + 0x390) + -2;
  local_20.right = *(LONG *)(param_1 + 0x394);
  local_20.bottom = *(LONG *)(param_1 + 0x398);
  hrgn = CreateRectRgnIndirect(&local_20);
  SelectClipRgn(hdc,hrgn);
  DeleteObject(hrgn);
  local_c = DAT_0064cbc4;
  local_10 = DAT_0064cbc0;
  local_8 = DAT_0064cbc8;
  local_4 = DAT_0064cbcc;
  FUN_00468740(hdc,&local_10,2,2,0x550009);
  SelectClipRgn(hdc,(HRGN)0x0);
  ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  if (param_4 != 0) {
    FUN_004cc380(param_1,param_2,param_3);
  }
  return;
}


