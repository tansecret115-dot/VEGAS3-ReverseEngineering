/* Module: sftrans1.dll
   Function: FUN_00467530
   Address: 00467530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00467530(int param_1,undefined4 param_2,void *param_3)

{
  DWORD w;
  DWORD h;
  void *pvVar1;
  HBITMAP ho;
  HBRUSH hbr;
  BITMAPINFO local_2c;
  
  pvVar1 = param_3;
  if (param_3 != (void *)0x0) {
    w = *(DWORD *)((int)param_3 + 0xc);
    h = *(DWORD *)((int)param_3 + 0x10);
    local_2c.bmiHeader.biCompression = 0;
    local_2c.bmiHeader.biSizeImage = 0;
    local_2c.bmiHeader.biClrUsed = 0;
    local_2c.bmiHeader.biClrImportant = 0;
    local_2c.bmiHeader.biSize = 0x28;
    local_2c.bmiHeader.biPlanes = 1;
    local_2c.bmiHeader.biBitCount = 0x20;
    local_2c.bmiHeader.biWidth = w;
    local_2c.bmiHeader.biHeight = h;
    ho = CreateDIBSection(*(HDC *)((int)param_3 + 0x14),&local_2c,0,&param_3,(HANDLE)0x0,0);
    if (ho == (HBITMAP)0x0) {
      hbr = CreateSolidBrush(0xc8c8);
      FillRect(*(HDC *)((int)pvVar1 + 0x14),(RECT *)((int)pvVar1 + 4),hbr);
      DeleteObject(hbr);
      return 0;
    }
    GetDlgItem(*(HWND *)(param_1 + 0x30),0x580);
    FUN_004649e0(&local_2c,param_3,param_1 + 0x68);
    SetDIBitsToDevice(*(HDC *)((int)pvVar1 + 0x14),0,0,w,h,0,0,0,h,param_3,&local_2c,0);
    DeleteObject(ho);
  }
  return 0;
}


