/* Module: vegas30.exe
   Function: FUN_0043df40
   Address: 0043df40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043df40(undefined4 param_1)

{
  undefined4 uVar1;
  HWND hWnd;
  HCURSOR pHVar2;
  long lVar3;
  
  uVar1 = 1;
  if (DAT_0064b57c == 0) {
    hWnd = (HWND)FUN_004524f0(param_1,"Scanning for CD Devices...");
    pHVar2 = (HCURSOR)_SfGetUICursor_4(0x7f02);
    pHVar2 = SetCursor(pHVar2);
    SfCdi_Initialize(DAT_006471fc,
                     -(uint)(DAT_0064acbc != 0) & 8 | (-(uint)(DAT_0064acb8 != 0) & 0xfffffffc) + 4,
                     &DAT_00647210,0);
    lVar3 = cdr_AutoFindDevices((tSFLIST **)&DAT_0064b57c,DAT_0064acc0 == 0 | 2);
    if (-1 < lVar3) {
      FUN_0042a200(&DAT_006476a0,DAT_0064b57c);
    }
    if (hWnd != (HWND)0x0) {
      DestroyWindow(hWnd);
    }
    SetCursor(pHVar2);
    uVar1 = 0;
  }
  return uVar1;
}


