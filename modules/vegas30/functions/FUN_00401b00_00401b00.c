/* Module: vegas30.exe
   Function: FUN_00401b00
   Address: 00401b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401b00(LPVOID param_1)

{
  tagWNDCLASSA *ptVar1;
  BOOL BVar2;
  int iVar3;
  tagWNDCLASSA local_28;
  
  if ((((byte)DAT_0064761c & 0x40) != 0) && (DAT_006476b0 != 0)) {
    BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.Splash",&local_28);
    if (BVar2 == 0) {
      ptVar1 = &local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar1->style = 0;
        ptVar1 = (tagWNDCLASSA *)((int)ptVar1 + 4);
      }
      local_28.lpfnWndProc = (WNDPROC)&LAB_00401bd0;
      local_28.hInstance = DAT_006471fc;
      local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
      local_28.hbrBackground = (HBRUSH)0x10;
      local_28.lpszClassName = "Vegas.Splash";
      RegisterClassA(&local_28);
    }
    DAT_00647620 = CreateWindowExA(0x188,"Vegas.Splash",(LPCSTR)0x0,0x90880000,0,0,0,0,(HWND)0x0,
                                   (HMENU)0x0,DAT_006471fc,param_1);
    UpdateWindow(DAT_00647620);
    _SfKernel_SetSplash_4(DAT_00647620);
  }
  return;
}


