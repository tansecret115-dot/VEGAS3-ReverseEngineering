/* Module: vfplugs.dll
   Function: FUN_00473fe0
   Address: 00473fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00473fe0(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  HWND pHVar1;
  int iVar2;
  int local_160 [11];
  undefined2 local_134;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  dwNewLong = LocalAlloc(0x40,0x4b0);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  SetTimer(param_1,0x80c,500,(TIMERPROC)0x0);
  dwNewLong[0xb0] = param_1;
  dwNewLong[0xb1] = *(undefined4 *)(param_2 + 0x20);
  pHVar1 = GetParent(param_1);
  dwNewLong[0xb2] = pHVar1;
  GetClientRect(param_1,(LPRECT)(dwNewLong + 0xb3));
  dwNewLong[0xbe] = 0;
  dwNewLong[0xbb] = 1;
  dwNewLong[0x11e] = 1;
  *dwNewLong = 0;
  dwNewLong[1] = 0;
  dwNewLong[2] = 0;
  dwNewLong[3] = 0xffffffff;
  dwNewLong[4] = 0;
  dwNewLong[6] = 0;
  dwNewLong[10] = 0xffffffff;
  dwNewLong[5] = 0x3fe00000;
  dwNewLong[7] = 0x3fe00000;
  dwNewLong[0xc] = 0x3f000000;
  dwNewLong[0xd] = 0x3f000000;
  dwNewLong[0xb] = 0x3f800000;
  dwNewLong[0x53] = 0x3f800000;
  dwNewLong[8] = 2;
  dwNewLong[9] = 1;
  dwNewLong[0xe] = 0;
  *(undefined2 *)(dwNewLong + 0xf) = 0;
  dwNewLong[0x50] = 0;
  dwNewLong[0x51] = 0xffffff;
  dwNewLong[0x52] = 0;
  dwNewLong[0x54] = 0;
  dwNewLong[0x55] = 0;
  dwNewLong[0x56] = 0;
  dwNewLong[0x57] = 0;
  dwNewLong[0x58] = 1;
  dwNewLong[0x59] = 0;
  FUN_00474c30(dwNewLong + 0x5a);
  *dwNewLong = (HWND)dwNewLong[0xb0];
  iVar2 = GetDlgCtrlID((HWND)dwNewLong[0xb0]);
  dwNewLong[1] = iVar2;
  dwNewLong[2] = 0;
  iVar2 = FUN_0044c3d0(dwNewLong + 0xc2,0x158,-1,-1,0x40000004);
  if (iVar2 < 0) {
    return 0;
  }
  local_20 = 0;
  local_1c = 0;
  local_160[4] = 2;
  local_18 = 0;
  local_160[5] = 1;
  local_160[6] = 0xffffffff;
  local_160[7] = 0x3f800000;
  local_160[8] = 0x3f000000;
  local_160[9] = 0x3f000000;
  local_160[10] = 0;
  local_134 = 0;
  local_30 = 0;
  local_2c = 0xffffff;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_14 = 0;
  local_10 = 1;
  local_c = 0;
  dwNewLong[0xca] = 0xffffffff;
  dwNewLong[0xc9] = 1;
  dwNewLong[0xcb] = 0x3f800000;
  dwNewLong[0x113] = 0x3f800000;
  dwNewLong[0xcc] = 0x3f000000;
  dwNewLong[0xcd] = 0x3f000000;
  dwNewLong[0xc4] = 0;
  dwNewLong[0xc6] = 0;
  dwNewLong[0xc5] = 0x3fe00000;
  dwNewLong[199] = 0x3fe00000;
  dwNewLong[200] = 2;
  dwNewLong[0xce] = 0;
  *(undefined2 *)(dwNewLong + 0xcf) = 0;
  dwNewLong[0x110] = 0;
  dwNewLong[0x111] = 0xffffff;
  dwNewLong[0x112] = 0;
  dwNewLong[0x114] = 0;
  dwNewLong[0x115] = 0;
  dwNewLong[0x116] = 0;
  dwNewLong[0x117] = 0;
  dwNewLong[0x118] = 1;
  dwNewLong[0x119] = 0;
  local_160[0] = 0;
  local_160[1] = 0x3fe00000;
  local_160[2] = 0;
  local_160[3] = 0x3fe00000;
  dwNewLong[0xc4] = 0;
  dwNewLong[0xc6] = 0;
  dwNewLong[0xc5] = 0x3fe00000;
  dwNewLong[199] = 0x3fe00000;
  FUN_0044ada0((int *)dwNewLong[0xc2],0,local_160,1);
  dwNewLong[0xbf] = 0;
  iVar2 = (int)dwNewLong[0xb5] / 0x1e;
  dwNewLong[0xc0] = 1000;
  dwNewLong[0xc1] = 0;
  if (iVar2 < 2) {
    iVar2 = 2;
  }
  else if (7 < iVar2) {
    iVar2 = 7;
  }
  dwNewLong[0x11c] = 0;
  dwNewLong[0x11d] = 0;
  *(undefined1 *)((int)dwNewLong + 0x4ae) = 0;
  dwNewLong[0x11f] = 0;
  dwNewLong[0x11a] = iVar2;
  *(undefined1 *)(dwNewLong + 299) = 0xff;
  *(undefined1 *)((int)dwNewLong + 0x4ad) = 0xff;
  dwNewLong[0x120] = 0x47ae147b;
  dwNewLong[0x122] = 0x9999999a;
  dwNewLong[0x124] = 0x47ae147b;
  dwNewLong[0x126] = 0x9999999a;
  dwNewLong[0x11b] = 0xffff;
  dwNewLong[0x121] = 0x3f847ae1;
  dwNewLong[0x123] = 0x3fa99999;
  dwNewLong[0x125] = 0x3f847ae1;
  dwNewLong[0x127] = 0x3fa99999;
  dwNewLong[0x128] = 0x37;
  dwNewLong[0x129] = 0x36;
  dwNewLong[0x12a] = 0x7f00;
  FUN_00472870(param_1);
  return 1;
}


