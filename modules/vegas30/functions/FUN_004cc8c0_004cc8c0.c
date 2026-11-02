/* Module: vegas30.exe
   Function: FUN_004cc8c0
   Address: 004cc8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cc8c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  HDC hdc;
  HRGN hrgn;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  RECT local_10;
  
  local_1c = *(undefined4 *)(param_1 + 0x390);
  local_18 = *(undefined4 *)(param_1 + 0xac8);
  local_20 = *(undefined4 *)(param_1 + 0xac0);
  local_14 = *(undefined4 *)(param_1 + 0x398);
  FUN_00454f60(param_1,param_2,param_3,&local_20,&DAT_006137b8,6);
  hdc = GetDC(*(HWND *)(param_1 + 4));
  local_10.left = *(LONG *)(param_1 + 0x38c);
  local_10.top = *(int *)(param_1 + 0x390) + -2;
  local_10.right = *(LONG *)(param_1 + 0x394);
  local_10.bottom = *(LONG *)(param_1 + 0x398);
  hrgn = CreateRectRgnIndirect(&local_10);
  SelectClipRgn(hdc,hrgn);
  DeleteObject(hrgn);
  local_2c = DAT_0064cbc4;
  local_30 = DAT_0064cbc0;
  local_28 = DAT_0064cbc8;
  local_24 = DAT_0064cbcc;
  FUN_00468740(hdc,&local_30,2,2,0x550009);
  FUN_004cc5f0(param_1,param_2,param_3,&local_30);
  FUN_00468740(hdc,&local_30,2,2,0x550009);
  DAT_0064cbc0 = local_30;
  DAT_0064cbc4 = local_2c;
  DAT_0064cbc8 = local_28;
  DAT_0064cbcc = local_24;
  SelectClipRgn(hdc,(HRGN)0x0);
  ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  return;
}


