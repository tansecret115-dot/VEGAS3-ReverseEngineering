/* Module: vegas30.exe
   Function: FUN_00503f50
   Address: 00503f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503f50(HWND param_1,int *param_2)

{
  HWND pHVar1;
  ulong uVar2;
  UINT Msg;
  LPARAM lParam;
  
  pHVar1 = GetDlgItem(param_1,0x4b0);
  uVar2 = SendMessageA(pHVar1,0x147,0,0);
  Mixer_GetDeviceName((char *)(*param_2 + 0x11a8),0x40,0x100,uVar2);
  lParam = 0;
  Msg = 0x468;
  *(ulong *)(*param_2 + 0x1d70) = uVar2;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  param_2[0x1b] = 1;
  return;
}


