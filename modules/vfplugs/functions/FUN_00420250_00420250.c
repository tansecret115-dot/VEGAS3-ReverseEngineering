/* Module: vfplugs.dll
   Function: FUN_00420250
   Address: 00420250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420250(HWND param_1,int param_2)

{
  uint *dwNewLong;
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  
  dwNewLong = LocalAlloc(0x40,0x458);
  if (dwNewLong == (uint *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  dwNewLong[2] = (uint)param_1;
  *dwNewLong = *(uint *)(param_2 + 0x20);
  pHVar1 = GetParent(param_1);
  dwNewLong[3] = (uint)pHVar1;
  GetClientRect(param_1,(LPRECT)(dwNewLong + 0x5e));
  uVar2 = *dwNewLong;
  dwNewLong[0x52] = 0;
  dwNewLong[0x54] = 0;
  dwNewLong[0x4d] = ~uVar2 >> 10 & 1;
  dwNewLong[0x4f] = 0;
  dwNewLong[0x4a] = 0;
  dwNewLong[0x4b] = 0;
  dwNewLong[0x53] = 0;
  dwNewLong[0x55] = 0;
  dwNewLong[0xbb] = 0;
  dwNewLong[1] = ((((uVar2 >> 1 & 1) << 1 | uVar2 >> 2 & 1) << 1 | uVar2 >> 0xc & 1) << 3 |
                 uVar2 >> 8 & 1) << 1 | dwNewLong[1] & 0xffffff8d;
  FUN_0041e810((int)dwNewLong);
  if ((dwNewLong[1] & 0x20) != 0) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    SetWindowLongA(param_1,-0x10,uVar2 | 0x2000000);
    iVar3 = FUN_0041ff70((int)dwNewLong);
    if (iVar3 == 0) {
      return 0;
    }
  }
  dwNewLong[0x7e] = 0;
  dwNewLong[0x56] = 0x3dcccccd;
  dwNewLong[0x57] = 0x3f4ccccd;
  dwNewLong[0x58] = 0x3f800000;
  dwNewLong[0x59] = 0x3f800000;
  FUN_0041b090((int)dwNewLong);
  dwNewLong[0x5a] = 0x3f000000;
  dwNewLong[0x5b] = 0x3f000000;
  dwNewLong[0x5c] = 0x3f000000;
  dwNewLong[0x5d] = 0x3f800000;
  dwNewLong[199] = 0;
  dwNewLong[200] = 0;
  dwNewLong[0x4e] = 0;
  pHVar1 = FUN_00420420((int)dwNewLong,(HINSTANCE)0x0);
  dwNewLong[4] = (uint)pHVar1;
  dwNewLong[0x46] = 0;
  dwNewLong[0x48] = 0;
  dwNewLong[0x49] = 0;
  uVar2 = GetDlgCtrlID(param_1);
  dwNewLong[0x114] = uVar2;
  FUN_0041f1c0((int)dwNewLong);
  FUN_0041f490((int)dwNewLong);
  FUN_0041f700((int)dwNewLong);
  FUN_0041f290((int)dwNewLong);
  FUN_0041f540((int)dwNewLong);
  FUN_0041f7b0((int)dwNewLong);
  FUN_0041b090((int)dwNewLong);
  FUN_0041a550((int)dwNewLong);
  FUN_0041da20((HWND)dwNewLong[2]);
  return 1;
}


