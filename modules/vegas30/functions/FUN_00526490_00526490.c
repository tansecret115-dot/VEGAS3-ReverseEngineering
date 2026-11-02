/* Module: vegas30.exe
   Function: FUN_00526490
   Address: 00526490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00526490(int param_1,undefined4 param_2)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  SetCapture(*(HWND *)(param_1 + 0x8c));
  pHVar1 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar1 = SetCursor(pHVar1);
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
  case 1:
    uVar2 = FUN_00525c30(param_1,param_2);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    uVar2 = FUN_00526270(param_1,param_2,1,0);
    SetCursor(pHVar1);
    ReleaseCapture();
    return uVar2;
  default:
    SetCursor(pHVar1);
    ReleaseCapture();
    return 0x80070057;
  }
}


