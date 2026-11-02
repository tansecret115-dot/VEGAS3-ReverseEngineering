/* Module: vegas30.exe
   Function: FUN_00527330
   Address: 00527330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00527330(int param_1)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  SetCapture(*(HWND *)(param_1 + 0x8c));
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
  case 1:
    uVar2 = FUN_00526ed0(param_1);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  case 2:
  case 3:
  case 4:
    uVar2 = FUN_0050a1b0(*(undefined4 *)(param_1 + 0xfc));
    uVar2 = FUN_005270d0(param_1,uVar2);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  case 5:
    uVar2 = FUN_0050a1f0(*(undefined4 *)(param_1 + 0xfc));
    uVar2 = FUN_005270d0(param_1,uVar2);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  case 6:
    uVar2 = FUN_0050a230(*(undefined4 *)(param_1 + 0xfc));
    uVar2 = FUN_005270d0(param_1,uVar2);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  default:
    SetCursor(pHVar1);
    ReleaseCapture();
    return 0x80070057;
  }
}


