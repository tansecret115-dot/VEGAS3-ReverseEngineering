/* Module: vegas30.exe
   Function: FUN_004f2c60
   Address: 004f2c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2c60(HWND param_1,int *param_2)

{
  HWND pHVar1;
  UINT Msg;
  RECT *lpRect;
  BOOL bErase;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 500) = DAT_0063f4a4;
  *(undefined4 *)(*param_2 + 0xc) = _DAT_0063f2bc;
  *(undefined4 *)(*param_2 + 0x3104) = DAT_006423b4;
  *(undefined4 *)(*param_2 + 0x11a4) = DAT_00640454;
  *(undefined4 *)(*param_2 + 0xd4) = DAT_0063f384;
  *(undefined4 *)(*param_2 + 0x98) = DAT_0063f348;
  *(undefined4 *)(*param_2 + 0x9c) = DAT_0063f34c;
  *(undefined4 *)(*param_2 + 0xd0) = DAT_0063f380;
  *(undefined4 *)(*param_2 + 0x1d9c) = DAT_0064104c;
  *(undefined4 *)(*param_2 + 0x1db4) = DAT_00641064;
  *(undefined4 *)(*param_2 + 0x1f38) = DAT_006411e8;
  *(undefined4 *)(*param_2 + 0x1f3c) = DAT_006411ec;
  *(undefined4 *)(*param_2 + 0x264c) = DAT_006418fc;
  *(undefined4 *)(*param_2 + 0x2de4) = DAT_00642094;
  *(undefined4 *)(*param_2 + 0x2784) = DAT_00641a34;
  *(undefined4 *)(*param_2 + 0x2794) = DAT_00641a44;
  *(undefined4 *)(*param_2 + 0x2cb4) = DAT_00641f64;
  *(undefined4 *)(*param_2 + 0x464) = DAT_0063f714;
  *(undefined4 *)(*param_2 + 0x45c) = DAT_0063f70c;
  *(undefined4 *)(*param_2 + 0x2de0) = DAT_00642090;
  *(undefined4 *)(*param_2 + 0x2de8) = DAT_00642098;
  *(undefined4 *)(*param_2 + 0x2e30) = DAT_006420e0;
  *(undefined4 *)(*param_2 + 0x2e6c) = DAT_0064211c;
  *(undefined4 *)(*param_2 + 0x2e98) = DAT_00642148;
  *(undefined4 *)(*param_2 + 0x2e9c) = DAT_0064214c;
  *(undefined4 *)(*param_2 + 0x2eac) = DAT_0064215c;
  *(undefined4 *)(*param_2 + 0x3238) = DAT_006424e8;
  *(undefined4 *)(*param_2 + 0x33b0) = DAT_00642660;
  _mbscpy((uchar *)(*param_2 + 0x300),&DAT_0063f5b0);
  *(undefined4 *)(*param_2 + 0x3500) = DAT_006427b0;
  *(undefined4 *)(*param_2 + 0x3108) = DAT_006423b8;
  *(undefined4 *)(*param_2 + 0x3814) = DAT_00642ac4;
  *(undefined4 *)(*param_2 + 0x381c) = DAT_00642acc;
  *(undefined4 *)(*param_2 + 0x3820) = DAT_00642ad0;
  *(undefined4 *)(*param_2 + 0x3824) = DAT_00642ad4;
  *(undefined4 *)(*param_2 + 0x382c) = DAT_00642adc;
  *(undefined4 *)(*param_2 + 0xb0) = DAT_0063f360;
  *(undefined4 *)(*param_2 + 0x3854) = DAT_00642b04;
  *(undefined4 *)(*param_2 + 0x2e00) = DAT_006420b0;
  *(undefined4 *)(*param_2 + 0x3800) = DAT_00642ab0;
  FUN_004f0c10(*param_2);
  bErase = 0;
  lpRect = (RECT *)0x0;
  pHVar1 = GetDlgItem(param_1,0x3ed);
  InvalidateRect(pHVar1,lpRect,bErase);
  FUN_004f2b40(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


