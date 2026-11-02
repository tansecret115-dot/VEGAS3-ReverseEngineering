/* Module: vidcap30.exe
   Function: FUN_0045dbd0
   Address: 0045dbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045dbd0(HWND param_1,int param_2,int param_3)

{
  SHORT SVar1;
  WPARAM wParam;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  WPARAM wParam_00;
  undefined1 local_234 [8];
  undefined4 local_22c;
  int local_228;
  undefined4 local_224;
  undefined1 *local_220;
  undefined4 local_21c;
  int local_20c;
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  wParam = SendMessageA(param_1,0x1042,0,0);
  if (wParam == 0xffffffff) {
    return 0;
  }
  wParam_00 = param_2 + wParam;
  if ((int)wParam_00 < 0) {
LAB_0045dc54:
    wParam_00 = 0;
  }
  else {
    LVar2 = SendMessageA(param_1,0x1004,0,0);
    if (LVar2 == 1 || LVar2 + -1 < 0) {
      iVar3 = 0;
    }
    else {
      LVar2 = SendMessageA(param_1,0x1004,0,0);
      iVar3 = LVar2 + -1;
    }
    if (iVar3 < (int)wParam_00) {
      LVar2 = SendMessageA(param_1,0x1004,0,0);
      if (LVar2 + -1 < 1) goto LAB_0045dc54;
      LVar2 = SendMessageA(param_1,0x1004,0,0);
      wParam_00 = LVar2 - 1;
    }
  }
  if (wParam == wParam_00) {
    return 0;
  }
  if ((wParam_00 == 0) || (wParam == 0)) {
    *(undefined4 *)(param_3 + 0x14) = 0;
  }
  local_22c = 0;
  local_220 = local_104;
  local_21c = 0x104;
  SendMessageA(param_1,0x102d,wParam,(LPARAM)local_234);
  local_220 = local_208;
  local_22c = 0;
  local_21c = 0x104;
  SendMessageA(param_1,0x102d,wParam_00,(LPARAM)local_234);
  local_220 = local_208;
  local_22c = 0;
  SendMessageA(param_1,0x102e,wParam,(LPARAM)local_234);
  local_220 = local_104;
  local_22c = 0;
  SendMessageA(param_1,0x102e,wParam_00,(LPARAM)local_234);
  uVar4 = SendMessageA(param_1,0x102c,wParam,0xf000);
  local_20c = (uVar4 >> 0xc) - 1;
  local_224 = 0xf000;
  uVar4 = SendMessageA(param_1,0x102c,wParam_00,0xf000);
  local_228 = ((uVar4 >> 0xc != 1) + 1) * 0x1000;
  SendMessageA(param_1,0x102b,wParam,(LPARAM)local_234);
  local_224 = 0xf000;
  local_228 = ((local_20c != 0) + 1) * 0x1000;
  SendMessageA(param_1,0x102b,wParam_00,(LPARAM)local_234);
  FUN_0045cb80(param_1,wParam,local_208);
  FUN_0045cb80(param_1,wParam_00,local_104);
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    SVar1 = GetKeyState(0x26);
    if (-1 < SVar1) {
      SVar1 = GetKeyState(0x28);
      if (-1 < SVar1) goto LAB_0045ddb5;
    }
    wParam_00 = wParam;
  }
LAB_0045ddb5:
  SendMessageA(param_1,0x1043,0,wParam_00);
  local_224 = 3;
  local_228 = 3;
  SendMessageA(param_1,0x102b,wParam_00,(LPARAM)local_234);
  return 1;
}


