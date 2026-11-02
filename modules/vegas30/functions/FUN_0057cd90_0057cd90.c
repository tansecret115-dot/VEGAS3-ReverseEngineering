/* Module: vegas30.exe
   Function: FUN_0057cd90
   Address: 0057cd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0057cd90(int *param_1,HWND param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  HCURSOR pHVar2;
  int iVar3;
  HWND *ppHVar4;
  HWND *local_24;
  uint local_20;
  HWND local_1c [7];
  
  if ((param_1[0x53] == 0) || (param_1[0x54] == 0)) {
    return 0;
  }
  ppHVar4 = local_1c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppHVar4 = (HWND)0x0;
    ppHVar4 = ppHVar4 + 1;
  }
  local_1c[1] = (HWND)param_3;
  local_1c[3] = (HWND)param_5;
  local_1c[2] = (HWND)param_4;
  local_24 = local_1c;
  local_20 = local_20 & 0xffff0000;
  local_1c[0] = param_2;
  FUN_0057d600(param_1 + 5,param_1 + 0x2c,1,2,0x601,&local_24);
  uVar1 = local_20 & 0xffff;
  if (uVar1 == 0x101) {
    SetCapture(param_2);
    pHVar2 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    pHVar2 = SetCursor(pHVar2);
    iVar3 = FUN_0057cc80();
    SetCursor(pHVar2);
    ReleaseCapture();
    FUN_0040dea0(DAT_0064762c);
  }
  else {
    if (uVar1 < 0x102) {
      return 0;
    }
    if (0x103 < uVar1) {
      return 0;
    }
    iVar3 = FUN_0057d010();
    if ((-1 < iVar3) && (iVar3 = FUN_0057d060(), -1 < iVar3)) {
      iVar3 = FUN_0057d0a0();
    }
    if ((HWND)param_1[2] != (HWND)0x0) {
      DestroyWindow((HWND)param_1[2]);
      param_1[2] = 0;
    }
    (**(code **)(*param_1 + 8))();
    FUN_0040dea0(DAT_0064762c);
  }
  if (iVar3 < 0) {
    _SfErrorHandler_MsgBox_24(0,0x30,0x29,iVar3,0,0);
  }
  return 1;
}


