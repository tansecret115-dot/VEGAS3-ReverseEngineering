/* Module: vidcap30.exe
   Function: FUN_00512280
   Address: 00512280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00512280(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  LONG LVar1;
  HWND pHVar2;
  HDC hDC;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (*(int *)(LVar1 + 0x60) != 0) {
    MessageBeep(0);
    return;
  }
  pHVar2 = GetCapture();
  if (pHVar2 == param_1) {
    if ((*(int *)(LVar1 + 0x4c) != 0) && (-1 < *(int *)(LVar1 + 0x44))) {
      hDC = GetDC(param_1);
      local_10 = *(undefined4 *)(LVar1 + 0x3c);
      local_c = *(undefined4 *)(LVar1 + 0x40);
      iVar3 = *(int *)(LVar1 + 0x44);
      if (iVar3 < 0) {
        local_8 = 0;
      }
      else {
        local_8 = (*(int *)(LVar1 + 0x80) - *(int *)(LVar1 + 0x78)) + -1;
        if (iVar3 <= local_8) {
          local_8 = iVar3;
        }
      }
      iVar3 = *(int *)(LVar1 + 0x48);
      if (iVar3 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = (*(int *)(LVar1 + 0x84) - *(int *)(LVar1 + 0x7c)) + -1;
        if (iVar3 <= local_4) {
          local_4 = iVar3;
        }
      }
      FUN_005123e0(hDC,&local_10);
      ReleaseDC(param_1,hDC);
    }
    *(undefined4 *)(LVar1 + 0x50) = 0;
    ReleaseCapture();
    return;
  }
  local_18 = param_3;
  local_14 = param_4;
  iVar3 = FUN_00510f50(LVar1,&local_18);
  if (iVar3 == -1) {
    MessageBeep(0);
    return;
  }
  if (param_2 == 0) {
    FUN_00511960(LVar1,iVar3);
    if (*(HWND *)(LVar1 + 0x6c) != (HWND)0x0) {
      PostMessageA(*(HWND *)(LVar1 + 0x6c),0x612,0,iVar3 << 0x10 | (uint)*(ushort *)(LVar1 + 0x34));
    }
  }
  return;
}


